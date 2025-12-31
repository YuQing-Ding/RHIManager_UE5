// Copyright Epic Games, Inc. All Rights Reserved.

#include "RHIManagerBPLibrary.h"
#include "RHI.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Misc/ConfigCacheIni.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

// 将RHI枚举转换为配置字符串
FString URHIManagerBPLibrary::ConvertRHIEnumToConfigString(EGraphicsRHI GraphicsRHI)
{
	switch (GraphicsRHI)
	{
	case EGraphicsRHI::RHI_DX11:
		return TEXT("DefaultGraphicsRHI_DX11");
	case EGraphicsRHI::RHI_DX12:
		return TEXT("DefaultGraphicsRHI_DX12");
	case EGraphicsRHI::RHI_VULKAN:
		return TEXT("DefaultGraphicsRHI_Vulkan");
	case EGraphicsRHI::RHI_Default:
		return TEXT("DefaultGraphicsRHI_Default");
	default:
		return TEXT("DefaultGraphicsRHI_Default");
	}
}

// 将配置字符串转换为RHI枚举
EGraphicsRHI URHIManagerBPLibrary::ConvertConfigStringToRHIEnum(const FString& ConfigString)
{
	if (ConfigString.Contains(TEXT("DX11"), ESearchCase::IgnoreCase))
	{
		return EGraphicsRHI::RHI_DX11;
	}
	else if (ConfigString.Contains(TEXT("DX12")) || ConfigString.Contains(TEXT("D3D12"), ESearchCase::IgnoreCase))
	{
		return EGraphicsRHI::RHI_DX12;
	}
	else if (ConfigString.Contains(TEXT("Vulkan"), ESearchCase::IgnoreCase))
	{
		return EGraphicsRHI::RHI_VULKAN;
	}
	return EGraphicsRHI::RHI_Default;
}

bool URHIManagerBPLibrary::SetGraphicsRHI(EGraphicsRHI GraphicsRHI)
{
	FString PlatformName = UGameplayStatics::GetPlatformName();
	
	// 确定配置文件路径和Section
	FString ConfigSection;
	FString ConfigFile;
	
	if (PlatformName.Equals(TEXT("Windows"), ESearchCase::IgnoreCase))
	{
		ConfigSection = TEXT("/Script/WindowsTargetPlatform.WindowsTargetSettings");
		ConfigFile = GEngineIni;
	}
	else if (PlatformName.Equals(TEXT("Linux"), ESearchCase::IgnoreCase))
	{
		ConfigSection = TEXT("/Script/LinuxTargetPlatform.LinuxTargetSettings");
		ConfigFile = GEngineIni;
	}
	else if (PlatformName.Equals(TEXT("Mac"), ESearchCase::IgnoreCase))
	{
		// Mac平台可能不支持切换RHI
		UE_LOG(LogTemp, Warning, TEXT("Mac platform may not support RHI switching"));
		return false;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unsupported platform for RHI switching: %s"), *PlatformName);
		return false;
	}

	// 获取当前RHI设置
	FString CurrentRHI;
	GConfig->GetString(*ConfigSection, TEXT("DefaultGraphicsRHI"), CurrentRHI, ConfigFile);

	// 转换目标RHI为配置字符串
	FString TargetRHIString = ConvertRHIEnumToConfigString(GraphicsRHI);

	// 如果RHI没有变化，不需要修改
	if (CurrentRHI.Equals(TargetRHIString, ESearchCase::IgnoreCase))
	{
		UE_LOG(LogTemp, Log, TEXT("RHI is already set to: %s"), *TargetRHIString);
		return true;
	}

	// 设置新的RHI
	GConfig->SetString(*ConfigSection, TEXT("DefaultGraphicsRHI"), *TargetRHIString, ConfigFile);
	
	// 刷新配置到磁盘
	GConfig->Flush(false, ConfigFile);

	UE_LOG(LogTemp, Log, TEXT("RHI changed from %s to %s. Restart required."), *CurrentRHI, *TargetRHIString);
	
	return true;
}

EGraphicsRHI URHIManagerBPLibrary::GetCurrentGraphicsRHI()
{
	FString PlatformName = UGameplayStatics::GetPlatformName();
	FString ConfigSection;
	FString ConfigFile = GEngineIni;

	if (PlatformName.Equals(TEXT("Windows"), ESearchCase::IgnoreCase))
	{
		ConfigSection = TEXT("/Script/WindowsTargetPlatform.WindowsTargetSettings");
	}
	else if (PlatformName.Equals(TEXT("Linux"), ESearchCase::IgnoreCase))
	{
		ConfigSection = TEXT("/Script/LinuxTargetPlatform.LinuxTargetSettings");
	}
	else
	{
		return EGraphicsRHI::RHI_Default;
	}

	FString DefaultGraphicsRHI;
	GConfig->GetString(*ConfigSection, TEXT("DefaultGraphicsRHI"), DefaultGraphicsRHI, ConfigFile);

	return ConvertConfigStringToRHIEnum(DefaultGraphicsRHI);
}

FString URHIManagerBPLibrary::GetRuntimeRHIName()
{
	// 获取实际运行时的RHI名称
	FString RHIName = GDynamicRHI ? GDynamicRHI->GetName() : TEXT("Unknown");
	return RHIName;
}

FString URHIManagerBPLibrary::GetRHIDisplayName(EGraphicsRHI GraphicsRHI)
{
	switch (GraphicsRHI)
	{
	case EGraphicsRHI::RHI_DX11:
		return TEXT("DirectX 11");
	case EGraphicsRHI::RHI_DX12:
		return TEXT("DirectX 12");
	case EGraphicsRHI::RHI_VULKAN:
		return TEXT("Vulkan");
	case EGraphicsRHI::RHI_Default:
		return TEXT("Default");
	default:
		return TEXT("Unknown");
	}
}

bool URHIManagerBPLibrary::IsCurrentRuntimeRHI(EGraphicsRHI GraphicsRHI)
{
	FString RuntimeRHI = GetRuntimeRHIName();
	
	switch (GraphicsRHI)
	{
	case EGraphicsRHI::RHI_DX11:
		return RuntimeRHI.Contains(TEXT("D3D11"), ESearchCase::IgnoreCase);
	case EGraphicsRHI::RHI_DX12:
		return RuntimeRHI.Contains(TEXT("D3D12"), ESearchCase::IgnoreCase);
	case EGraphicsRHI::RHI_VULKAN:
		return RuntimeRHI.Contains(TEXT("Vulkan"), ESearchCase::IgnoreCase);
	default:
		return false;
	}
}

void URHIManagerBPLibrary::RestartGame(float Delay)
{
	if (GEngine && GEngine->GameViewport)
	{
		UWorld* World = GEngine->GameViewport->GetWorld();
		if (World)
		{
			FTimerHandle TimerHandle;
			World->GetTimerManager().SetTimer(
				TimerHandle,
				[]()
				{
					// 尝试重启游戏
					FString ExecutablePath = FPlatformProcess::ExecutablePath();
					FString CommandLine = FCommandLine::Get();
					FPlatformProcess::LaunchURL(*ExecutablePath, *CommandLine, nullptr);
					
					// 然后退出当前进程
					FPlatformMisc::RequestExit(false);
				},
				Delay,
				false
			);
			return;
		}
	}
	
	// 如果无法延迟执行，直接重启
	FString ExecutablePath = FPlatformProcess::ExecutablePath();
	FString CommandLine = FCommandLine::Get();
	FPlatformProcess::LaunchURL(*ExecutablePath, *CommandLine, nullptr);
	FPlatformMisc::RequestExit(false);
}

void URHIManagerBPLibrary::QuitGame()
{
	if (GEngine)
	{
		UWorld* World = GEngine->GetWorld();
		if (World)
		{
			APlayerController* PlayerController = World->GetFirstPlayerController();
			if (PlayerController)
			{
				// 优雅地退出
				PlayerController->ConsoleCommand("quit");
				return;
			}
		}
	}
	
	// 备用退出方法
	FPlatformMisc::RequestExit(false);
}

bool URHIManagerBPLibrary::RequiresRestart(EGraphicsRHI TargetRHI)
{
	// 检查目标RHI是否与当前运行的RHI不同
	return !IsCurrentRuntimeRHI(TargetRHI);
}

TArray<EGraphicsRHI> URHIManagerBPLibrary::GetSupportedRHIs()
{
	TArray<EGraphicsRHI> SupportedRHIs;
	
	FString PlatformName = UGameplayStatics::GetPlatformName();
	
	if (PlatformName.Equals(TEXT("Windows"), ESearchCase::IgnoreCase))
	{
		SupportedRHIs.Add(EGraphicsRHI::RHI_DX11);
		SupportedRHIs.Add(EGraphicsRHI::RHI_DX12);
		SupportedRHIs.Add(EGraphicsRHI::RHI_VULKAN);
	}
	else if (PlatformName.Equals(TEXT("Linux"), ESearchCase::IgnoreCase))
	{
		SupportedRHIs.Add(EGraphicsRHI::RHI_VULKAN);
	}
	// Mac通常使用Metal，这里不包含
	
	return SupportedRHIs;
}
