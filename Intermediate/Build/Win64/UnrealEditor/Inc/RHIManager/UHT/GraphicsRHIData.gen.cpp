// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphicsRHIData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGraphicsRHIData() {}

// ********** Begin Cross Module References ********************************************************
RHIMANAGER_API UEnum* Z_Construct_UEnum_RHIManager_EGraphicsRHI();
UPackage* Z_Construct_UPackage__Script_RHIManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGraphicsRHI **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphicsRHI;
static UEnum* EGraphicsRHI_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RHIManager_EGraphicsRHI, (UObject*)Z_Construct_UPackage__Script_RHIManager(), TEXT("EGraphicsRHI"));
	}
	return Z_Registration_Info_UEnum_EGraphicsRHI.OuterSingleton;
}
template<> RHIMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphicsRHI>()
{
	return EGraphicsRHI_StaticEnum();
}
struct Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x9b\xbe\xe5\xbd\xa2RHI API\xe6\x9e\x9a\xe4\xb8\xbe\n */" },
#endif
		{ "ModuleRelativePath", "Public/GraphicsRHIData.h" },
		{ "RHI_Default.DisplayName", "Default" },
		{ "RHI_Default.Name", "EGraphicsRHI::RHI_Default" },
		{ "RHI_DX11.DisplayName", "DirectX 11" },
		{ "RHI_DX11.Name", "EGraphicsRHI::RHI_DX11" },
		{ "RHI_DX12.DisplayName", "DirectX 12" },
		{ "RHI_DX12.Name", "EGraphicsRHI::RHI_DX12" },
		{ "RHI_VULKAN.DisplayName", "Vulkan" },
		{ "RHI_VULKAN.Name", "EGraphicsRHI::RHI_VULKAN" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xbe\xe5\xbd\xa2RHI API\xe6\x9e\x9a\xe4\xb8\xbe" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGraphicsRHI::RHI_DX11", (int64)EGraphicsRHI::RHI_DX11 },
		{ "EGraphicsRHI::RHI_DX12", (int64)EGraphicsRHI::RHI_DX12 },
		{ "EGraphicsRHI::RHI_VULKAN", (int64)EGraphicsRHI::RHI_VULKAN },
		{ "EGraphicsRHI::RHI_Default", (int64)EGraphicsRHI::RHI_Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RHIManager,
	nullptr,
	"EGraphicsRHI",
	"EGraphicsRHI",
	Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RHIManager_EGraphicsRHI()
{
	if (!Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton, Z_Construct_UEnum_RHIManager_EGraphicsRHI_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGraphicsRHI.InnerSingleton;
}
// ********** End Enum EGraphicsRHI ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h__Script_RHIManager_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGraphicsRHI_StaticEnum, TEXT("EGraphicsRHI"), &Z_Registration_Info_UEnum_EGraphicsRHI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 233942443U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h__Script_RHIManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h__Script_RHIManager_3544755025{
	TEXT("/Script/RHIManager"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h__Script_RHIManager_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h__Script_RHIManager_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
