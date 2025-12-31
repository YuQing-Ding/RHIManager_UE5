// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RHIManagerBPLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRHIManagerBPLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RHIMANAGER_API UClass* Z_Construct_UClass_URHIManagerBPLibrary();
RHIMANAGER_API UClass* Z_Construct_UClass_URHIManagerBPLibrary_NoRegister();
RHIMANAGER_API UEnum* Z_Construct_UEnum_RHIManager_EGraphicsRHI();
UPackage* Z_Construct_UPackage__Script_RHIManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URHIManagerBPLibrary Function GetCurrentGraphicsRHI **********************
struct Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics
{
	struct RHIManagerBPLibrary_eventGetCurrentGraphicsRHI_Parms
	{
		EGraphicsRHI ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x9b\xbe\xe5\xbd\xa2RHI API\n\x09 * @return \xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x9b\xbe\xe5\xbd\xa2RHI API\n@return \xe5\xbd\x93\xe5\x89\x8d\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentGraphicsRHI constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentGraphicsRHI constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentGraphicsRHI Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventGetCurrentGraphicsRHI_Parms, ReturnValue), Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentGraphicsRHI Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "GetCurrentGraphicsRHI", 	Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::RHIManagerBPLibrary_eventGetCurrentGraphicsRHI_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::RHIManagerBPLibrary_eventGetCurrentGraphicsRHI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execGetCurrentGraphicsRHI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGraphicsRHI*)Z_Param__Result=URHIManagerBPLibrary::GetCurrentGraphicsRHI();
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function GetCurrentGraphicsRHI ************************

// ********** Begin Class URHIManagerBPLibrary Function GetRHIDisplayName **************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics
{
	struct RHIManagerBPLibrary_eventGetRHIDisplayName_Parms
	{
		EGraphicsRHI GraphicsRHI;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96RHI\xe6\x9e\x9a\xe4\xb8\xbe\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @param GraphicsRHI RHI\xe6\x9e\x9a\xe4\xb8\xbe\xe5\x80\xbc\n\x09 * @return \xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96RHI\xe6\x9e\x9a\xe4\xb8\xbe\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0\n@param GraphicsRHI RHI\xe6\x9e\x9a\xe4\xb8\xbe\xe5\x80\xbc\n@return \xe6\x98\xbe\xe7\xa4\xba\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRHIDisplayName constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GraphicsRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphicsRHI;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRHIDisplayName constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRHIDisplayName Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_GraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_GraphicsRHI = { "GraphicsRHI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventGetRHIDisplayName_Parms, GraphicsRHI), Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventGetRHIDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_GraphicsRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_GraphicsRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::PropPointers) < 2048);
// ********** End Function GetRHIDisplayName Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "GetRHIDisplayName", 	Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::RHIManagerBPLibrary_eventGetRHIDisplayName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::RHIManagerBPLibrary_eventGetRHIDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execGetRHIDisplayName)
{
	P_GET_ENUM(EGraphicsRHI,Z_Param_GraphicsRHI);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URHIManagerBPLibrary::GetRHIDisplayName(EGraphicsRHI(Z_Param_GraphicsRHI));
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function GetRHIDisplayName ****************************

// ********** Begin Class URHIManagerBPLibrary Function GetRuntimeRHIName **************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics
{
	struct RHIManagerBPLibrary_eventGetRuntimeRHIName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xae\x9e\xe9\x99\x85\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84RHI\xe5\x90\x8d\xe7\xa7\xb0\n\x09 * @return RHI\xe5\x90\x8d\xe7\xa7\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xef\xbc\x88\xe5\xa6\x82 \"D3D11\", \"D3D12\", \"Vulkan\"\xef\xbc\x89\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xae\x9e\xe9\x99\x85\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84RHI\xe5\x90\x8d\xe7\xa7\xb0\n@return RHI\xe5\x90\x8d\xe7\xa7\xb0\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xef\xbc\x88\xe5\xa6\x82 \"D3D11\", \"D3D12\", \"Vulkan\"\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRuntimeRHIName constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRuntimeRHIName constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRuntimeRHIName Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventGetRuntimeRHIName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::PropPointers) < 2048);
// ********** End Function GetRuntimeRHIName Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "GetRuntimeRHIName", 	Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::RHIManagerBPLibrary_eventGetRuntimeRHIName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::RHIManagerBPLibrary_eventGetRuntimeRHIName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execGetRuntimeRHIName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URHIManagerBPLibrary::GetRuntimeRHIName();
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function GetRuntimeRHIName ****************************

// ********** Begin Class URHIManagerBPLibrary Function GetSupportedRHIs ***************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics
{
	struct RHIManagerBPLibrary_eventGetSupportedRHIs_Parms
	{
		TArray<EGraphicsRHI> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84RHI\xe5\x88\x97\xe8\xa1\xa8\n\x09 * @return \xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84RHI\xe6\x95\xb0\xe7\xbb\x84\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84RHI\xe5\x88\x97\xe8\xa1\xa8\n@return \xe6\x94\xaf\xe6\x8c\x81\xe7\x9a\x84RHI\xe6\x95\xb0\xe7\xbb\x84" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSupportedRHIs constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSupportedRHIs constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSupportedRHIs Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventGetSupportedRHIs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 233942443
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::PropPointers) < 2048);
// ********** End Function GetSupportedRHIs Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "GetSupportedRHIs", 	Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::RHIManagerBPLibrary_eventGetSupportedRHIs_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::RHIManagerBPLibrary_eventGetSupportedRHIs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execGetSupportedRHIs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<EGraphicsRHI>*)Z_Param__Result=URHIManagerBPLibrary::GetSupportedRHIs();
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function GetSupportedRHIs *****************************

// ********** Begin Class URHIManagerBPLibrary Function IsCurrentRuntimeRHI ************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics
{
	struct RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms
	{
		EGraphicsRHI GraphicsRHI;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\xa3\x80\xe6\x9f\xa5\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84RHI\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\x8e\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x90\xe8\xa1\x8c\xe7\x9a\x84RHI\xe5\x8c\xb9\xe9\x85\x8d\n\x09 * @param GraphicsRHI \xe8\xa6\x81\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\xb9\xe9\x85\x8d\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe6\x8c\x87\xe5\xae\x9a\xe7\x9a\x84RHI\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\x8e\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x90\xe8\xa1\x8c\xe7\x9a\x84RHI\xe5\x8c\xb9\xe9\x85\x8d\n@param GraphicsRHI \xe8\xa6\x81\xe6\xa3\x80\xe6\x9f\xa5\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b\n@return \xe6\x98\xaf\xe5\x90\xa6\xe5\x8c\xb9\xe9\x85\x8d" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsCurrentRuntimeRHI constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GraphicsRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphicsRHI;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCurrentRuntimeRHI constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCurrentRuntimeRHI Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_GraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_GraphicsRHI = { "GraphicsRHI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms, GraphicsRHI), Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
void Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms), &Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_GraphicsRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_GraphicsRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::PropPointers) < 2048);
// ********** End Function IsCurrentRuntimeRHI Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "IsCurrentRuntimeRHI", 	Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::RHIManagerBPLibrary_eventIsCurrentRuntimeRHI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execIsCurrentRuntimeRHI)
{
	P_GET_ENUM(EGraphicsRHI,Z_Param_GraphicsRHI);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHIManagerBPLibrary::IsCurrentRuntimeRHI(EGraphicsRHI(Z_Param_GraphicsRHI));
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function IsCurrentRuntimeRHI **************************

// ********** Begin Class URHIManagerBPLibrary Function QuitGame ***********************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe9\x80\x80\xe5\x87\xba\xe6\xb8\xb8\xe6\x88\x8f\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x80\xe5\x87\xba\xe6\xb8\xb8\xe6\x88\x8f" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function QuitGame constinit property declarations ******************************
// ********** End Function QuitGame constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "QuitGame", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	URHIManagerBPLibrary::QuitGame();
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function QuitGame *************************************

// ********** Begin Class URHIManagerBPLibrary Function RequiresRestart ****************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics
{
	struct RHIManagerBPLibrary_eventRequiresRestart_Parms
	{
		EGraphicsRHI TargetRHI;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe6\xa3\x80\xe6\x9f\xa5\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84RHI\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\x89\x8d\xe8\x83\xbd\xe7\x94\x9f\xe6\x95\x88\n\x09 * @param TargetRHI \xe7\x9b\xae\xe6\xa0\x87RHI\xe7\xb1\xbb\xe5\x9e\x8b\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\x9f\xa5\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84RHI\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\x89\x8d\xe8\x83\xbd\xe7\x94\x9f\xe6\x95\x88\n@param TargetRHI \xe7\x9b\xae\xe6\xa0\x87RHI\xe7\xb1\xbb\xe5\x9e\x8b\n@return \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequiresRestart constinit property declarations ***********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetRHI;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequiresRestart constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequiresRestart Property Definitions **********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_TargetRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_TargetRHI = { "TargetRHI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventRequiresRestart_Parms, TargetRHI), Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
void Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHIManagerBPLibrary_eventRequiresRestart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHIManagerBPLibrary_eventRequiresRestart_Parms), &Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_TargetRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_TargetRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::PropPointers) < 2048);
// ********** End Function RequiresRestart Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "RequiresRestart", 	Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::RHIManagerBPLibrary_eventRequiresRestart_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::RHIManagerBPLibrary_eventRequiresRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execRequiresRestart)
{
	P_GET_ENUM(EGraphicsRHI,Z_Param_TargetRHI);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHIManagerBPLibrary::RequiresRestart(EGraphicsRHI(Z_Param_TargetRHI));
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function RequiresRestart ******************************

// ********** Begin Class URHIManagerBPLibrary Function RestartGame ********************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics
{
	struct RHIManagerBPLibrary_eventRestartGame_Parms
	{
		float Delay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe5\xba\x94\xe7\x94\xa8RHI\xe6\x9b\xb4\xe6\x94\xb9\xef\xbc\x89\n\x09 * @param Delay \xe5\xbb\xb6\xe8\xbf\x9f\xe9\x87\x8d\xe5\x90\xaf\xe7\x9a\x84\xe7\xa7\x92\xe6\x95\xb0\n\x09 */" },
#endif
		{ "CPP_Default_Delay", "1.000000" },
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xef\xbc\x88\xe7\x94\xa8\xe4\xba\x8e\xe5\xba\x94\xe7\x94\xa8RHI\xe6\x9b\xb4\xe6\x94\xb9\xef\xbc\x89\n@param Delay \xe5\xbb\xb6\xe8\xbf\x9f\xe9\x87\x8d\xe5\x90\xaf\xe7\x9a\x84\xe7\xa7\x92\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RestartGame constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RestartGame constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RestartGame Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventRestartGame_Parms, Delay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::PropPointers) < 2048);
// ********** End Function RestartGame Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "RestartGame", 	Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::RHIManagerBPLibrary_eventRestartGame_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::RHIManagerBPLibrary_eventRestartGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execRestartGame)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
	P_FINISH;
	P_NATIVE_BEGIN;
	URHIManagerBPLibrary::RestartGame(Z_Param_Delay);
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function RestartGame **********************************

// ********** Begin Class URHIManagerBPLibrary Function SetGraphicsRHI *****************************
struct Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics
{
	struct RHIManagerBPLibrary_eventSetGraphicsRHI_Parms
	{
		EGraphicsRHI GraphicsRHI;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Graphics|RHI Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe5\x9b\xbe\xe5\xbd\xa2RHI API\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe6\x89\x8d\xe8\x83\xbd\xe7\x94\x9f\xe6\x95\x88\xef\xbc\x89\n\x09 * @param GraphicsRHI \xe8\xa6\x81\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b\n\x09 * @return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe8\xae\xbe\xe7\xbd\xae\xe9\x85\x8d\xe7\xbd\xae\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\x9b\xbe\xe5\xbd\xa2RHI API\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe6\x89\x8d\xe8\x83\xbd\xe7\x94\x9f\xe6\x95\x88\xef\xbc\x89\n@param GraphicsRHI \xe8\xa6\x81\xe8\xae\xbe\xe7\xbd\xae\xe7\x9a\x84RHI\xe7\xb1\xbb\xe5\x9e\x8b\n@return \xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe8\xae\xbe\xe7\xbd\xae\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetGraphicsRHI constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_GraphicsRHI_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphicsRHI;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGraphicsRHI constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGraphicsRHI Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI = { "GraphicsRHI", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RHIManagerBPLibrary_eventSetGraphicsRHI_Parms, GraphicsRHI), Z_Construct_UEnum_RHIManager_EGraphicsRHI, METADATA_PARAMS(0, nullptr) }; // 233942443
void Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RHIManagerBPLibrary_eventSetGraphicsRHI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RHIManagerBPLibrary_eventSetGraphicsRHI_Parms), &Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_GraphicsRHI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::PropPointers) < 2048);
// ********** End Function SetGraphicsRHI Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URHIManagerBPLibrary, nullptr, "SetGraphicsRHI", 	Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::RHIManagerBPLibrary_eventSetGraphicsRHI_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::Function_MetaDataParams), Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::RHIManagerBPLibrary_eventSetGraphicsRHI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URHIManagerBPLibrary::execSetGraphicsRHI)
{
	P_GET_ENUM(EGraphicsRHI,Z_Param_GraphicsRHI);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URHIManagerBPLibrary::SetGraphicsRHI(EGraphicsRHI(Z_Param_GraphicsRHI));
	P_NATIVE_END;
}
// ********** End Class URHIManagerBPLibrary Function SetGraphicsRHI *******************************

// ********** Begin Class URHIManagerBPLibrary *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URHIManagerBPLibrary;
UClass* URHIManagerBPLibrary::GetPrivateStaticClass()
{
	using TClass = URHIManagerBPLibrary;
	if (!Z_Registration_Info_UClass_URHIManagerBPLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RHIManagerBPLibrary"),
			Z_Registration_Info_UClass_URHIManagerBPLibrary.InnerSingleton,
			StaticRegisterNativesURHIManagerBPLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URHIManagerBPLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URHIManagerBPLibrary_NoRegister()
{
	return URHIManagerBPLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URHIManagerBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * RHI\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\n * \xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x87\xe6\x8d\xa2\xe5\x9b\xbe\xe5\xbd\xa2""API\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe7\x94\x9f\xe6\x95\x88\xef\xbc\x89\n */" },
#endif
		{ "IncludePath", "RHIManagerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RHIManagerBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RHI\xe7\xae\xa1\xe7\x90\x86\xe5\x99\xa8\xe8\x93\x9d\xe5\x9b\xbe\xe5\x87\xbd\xe6\x95\xb0\xe5\xba\x93\n\xe7\x94\xa8\xe4\xba\x8e\xe5\x9c\xa8\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x87\xe6\x8d\xa2\xe5\x9b\xbe\xe5\xbd\xa2""API\xef\xbc\x88\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe5\x90\xaf\xe6\xb8\xb8\xe6\x88\x8f\xe7\x94\x9f\xe6\x95\x88\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URHIManagerBPLibrary constinit property declarations *********************
// ********** End Class URHIManagerBPLibrary constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentGraphicsRHI"), .Pointer = &URHIManagerBPLibrary::execGetCurrentGraphicsRHI },
		{ .NameUTF8 = UTF8TEXT("GetRHIDisplayName"), .Pointer = &URHIManagerBPLibrary::execGetRHIDisplayName },
		{ .NameUTF8 = UTF8TEXT("GetRuntimeRHIName"), .Pointer = &URHIManagerBPLibrary::execGetRuntimeRHIName },
		{ .NameUTF8 = UTF8TEXT("GetSupportedRHIs"), .Pointer = &URHIManagerBPLibrary::execGetSupportedRHIs },
		{ .NameUTF8 = UTF8TEXT("IsCurrentRuntimeRHI"), .Pointer = &URHIManagerBPLibrary::execIsCurrentRuntimeRHI },
		{ .NameUTF8 = UTF8TEXT("QuitGame"), .Pointer = &URHIManagerBPLibrary::execQuitGame },
		{ .NameUTF8 = UTF8TEXT("RequiresRestart"), .Pointer = &URHIManagerBPLibrary::execRequiresRestart },
		{ .NameUTF8 = UTF8TEXT("RestartGame"), .Pointer = &URHIManagerBPLibrary::execRestartGame },
		{ .NameUTF8 = UTF8TEXT("SetGraphicsRHI"), .Pointer = &URHIManagerBPLibrary::execSetGraphicsRHI },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_GetCurrentGraphicsRHI, "GetCurrentGraphicsRHI" }, // 1448040619
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_GetRHIDisplayName, "GetRHIDisplayName" }, // 2728693890
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_GetRuntimeRHIName, "GetRuntimeRHIName" }, // 3481976563
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_GetSupportedRHIs, "GetSupportedRHIs" }, // 906507973
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_IsCurrentRuntimeRHI, "IsCurrentRuntimeRHI" }, // 1263673825
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_QuitGame, "QuitGame" }, // 1731159588
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_RequiresRestart, "RequiresRestart" }, // 969400372
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_RestartGame, "RestartGame" }, // 3294397569
		{ &Z_Construct_UFunction_URHIManagerBPLibrary_SetGraphicsRHI, "SetGraphicsRHI" }, // 2892916393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URHIManagerBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URHIManagerBPLibrary_Statics
UObject* (*const Z_Construct_UClass_URHIManagerBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RHIManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URHIManagerBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URHIManagerBPLibrary_Statics::ClassParams = {
	&URHIManagerBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URHIManagerBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URHIManagerBPLibrary_Statics::Class_MetaDataParams)
};
void URHIManagerBPLibrary::StaticRegisterNativesURHIManagerBPLibrary()
{
	UClass* Class = URHIManagerBPLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URHIManagerBPLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_URHIManagerBPLibrary()
{
	if (!Z_Registration_Info_UClass_URHIManagerBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URHIManagerBPLibrary.OuterSingleton, Z_Construct_UClass_URHIManagerBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URHIManagerBPLibrary.OuterSingleton;
}
URHIManagerBPLibrary::URHIManagerBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URHIManagerBPLibrary);
URHIManagerBPLibrary::~URHIManagerBPLibrary() {}
// ********** End Class URHIManagerBPLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h__Script_RHIManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URHIManagerBPLibrary, URHIManagerBPLibrary::StaticClass, TEXT("URHIManagerBPLibrary"), &Z_Registration_Info_UClass_URHIManagerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URHIManagerBPLibrary), 2383363783U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h__Script_RHIManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h__Script_RHIManager_3858971021{
	TEXT("/Script/RHIManager"),
	Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h__Script_RHIManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_RHIManagerBPLibrary_h__Script_RHIManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
