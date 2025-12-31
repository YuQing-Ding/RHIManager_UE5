// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GraphicsRHIData.h"

#ifdef RHIMANAGER_GraphicsRHIData_generated_h
#error "GraphicsRHIData.generated.h already included, missing '#pragma once' in GraphicsRHIData.h"
#endif
#define RHIMANAGER_GraphicsRHIData_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_YuQing_Documents_Unreal_Projects_InDoorRenderingDemo_Plugins_RHIManager_UE5_Source_RHIManager_Public_GraphicsRHIData_h

// ********** Begin Enum EGraphicsRHI **************************************************************
#define FOREACH_ENUM_EGRAPHICSRHI(op) \
	op(EGraphicsRHI::RHI_DX11) \
	op(EGraphicsRHI::RHI_DX12) \
	op(EGraphicsRHI::RHI_VULKAN) \
	op(EGraphicsRHI::RHI_Default) 

enum class EGraphicsRHI : uint8;
template<> struct TIsUEnumClass<EGraphicsRHI> { enum { Value = true }; };
template<> RHIMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphicsRHI>();
// ********** End Enum EGraphicsRHI ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
