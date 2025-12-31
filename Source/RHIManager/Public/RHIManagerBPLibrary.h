// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GraphicsRHIData.h"
#include "RHIManagerBPLibrary.generated.h"

/**
 * RHI管理器蓝图函数库
 * 用于在运行时切换图形API（需要重启游戏生效）
 */
UCLASS()
class URHIManagerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * 设置图形RHI API（需要重启游戏才能生效）
	 * @param GraphicsRHI 要设置的RHI类型
	 * @return 是否成功设置配置
	 */
	UFUNCTION(BlueprintCallable, Category = "Graphics|RHI Manager")
	static bool SetGraphicsRHI(EGraphicsRHI GraphicsRHI);

	/**
	 * 获取当前配置的图形RHI API
	 * @return 当前配置的RHI类型
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static EGraphicsRHI GetCurrentGraphicsRHI();

	/**
	 * 获取运行时实际使用的RHI名称
	 * @return RHI名称字符串（如 "D3D11", "D3D12", "Vulkan"）
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static FString GetRuntimeRHIName();

	/**
	 * 获取RHI枚举的显示名称
	 * @param GraphicsRHI RHI枚举值
	 * @return 显示名称
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static FString GetRHIDisplayName(EGraphicsRHI GraphicsRHI);

	/**
	 * 检查指定的RHI是否与当前运行的RHI匹配
	 * @param GraphicsRHI 要检查的RHI类型
	 * @return 是否匹配
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static bool IsCurrentRuntimeRHI(EGraphicsRHI GraphicsRHI);

	/**
	 * 重启游戏（用于应用RHI更改）
	 * @param Delay 延迟重启的秒数
	 */
	UFUNCTION(BlueprintCallable, Category = "Graphics|RHI Manager")
	static void RestartGame(float Delay = 1.0f);

	/**
	 * 退出游戏
	 */
	UFUNCTION(BlueprintCallable, Category = "Graphics|RHI Manager")
	static void QuitGame();

	/**
	 * 检查配置的RHI是否需要重启才能生效
	 * @param TargetRHI 目标RHI类型
	 * @return 是否需要重启
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static bool RequiresRestart(EGraphicsRHI TargetRHI);

	/**
	 * 获取所有支持的RHI列表
	 * @return 支持的RHI数组
	 */
	UFUNCTION(BlueprintPure, Category = "Graphics|RHI Manager")
	static TArray<EGraphicsRHI> GetSupportedRHIs();

private:
	// 辅助函数：将枚举转换为配置字符串
	static FString ConvertRHIEnumToConfigString(EGraphicsRHI GraphicsRHI);
	
	// 辅助函数：将配置字符串转换为枚举
	static EGraphicsRHI ConvertConfigStringToRHIEnum(const FString& ConfigString);
};
