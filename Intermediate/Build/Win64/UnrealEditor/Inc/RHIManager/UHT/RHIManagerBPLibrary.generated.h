// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RHIManagerBPLibrary.h"

#ifdef RHIMANAGER_RHIManagerBPLibrary_generated_h
#error "RHIManagerBPLibrary.generated.h already included, missing '#pragma once' in RHIManagerBPLibrary.h"
#endif
#define RHIMANAGER_RHIManagerBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGraphicsRHI : uint8;

// ********** Begin Class URHIManagerBPLibrary *****************************************************
#define FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSupportedRHIs); \
	DECLARE_FUNCTION(execRequiresRestart); \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execRestartGame); \
	DECLARE_FUNCTION(execIsCurrentRuntimeRHI); \
	DECLARE_FUNCTION(execGetRHIDisplayName); \
	DECLARE_FUNCTION(execGetRuntimeRHIName); \
	DECLARE_FUNCTION(execGetCurrentGraphicsRHI); \
	DECLARE_FUNCTION(execSetGraphicsRHI);


struct Z_Construct_UClass_URHIManagerBPLibrary_Statics;
RHIMANAGER_API UClass* Z_Construct_UClass_URHIManagerBPLibrary_NoRegister();

#define FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURHIManagerBPLibrary(); \
	friend struct ::Z_Construct_UClass_URHIManagerBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RHIMANAGER_API UClass* ::Z_Construct_UClass_URHIManagerBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URHIManagerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RHIManager"), Z_Construct_UClass_URHIManagerBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(URHIManagerBPLibrary)


#define FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URHIManagerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URHIManagerBPLibrary(URHIManagerBPLibrary&&) = delete; \
	URHIManagerBPLibrary(const URHIManagerBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URHIManagerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URHIManagerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URHIManagerBPLibrary) \
	NO_API virtual ~URHIManagerBPLibrary();


#define FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_15_PROLOG
#define FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URHIManagerBPLibrary;

// ********** End Class URHIManagerBPLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
