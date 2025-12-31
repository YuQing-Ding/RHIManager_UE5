// Copyright Epic Games, Inc. All Rights Reserved.

#include "RHIManager.h"

#define LOCTEXT_NAMESPACE "FRHIManagerModule"

void FRHIManagerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory
	// The exact timing is specified in the .uplugin file per-module
	UE_LOG(LogTemp, Log, TEXT("RHI Manager Module: Startup"));
}

void FRHIManagerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module
	// For modules that support dynamic reloading, we call this function before unloading the module
	UE_LOG(LogTemp, Log, TEXT("RHI Manager Module: Shutdown"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRHIManagerModule, RHIManager)
