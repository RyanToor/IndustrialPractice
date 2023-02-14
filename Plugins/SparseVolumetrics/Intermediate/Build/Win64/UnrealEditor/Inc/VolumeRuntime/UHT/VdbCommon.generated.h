// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VdbCommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOLUMERUNTIME_VdbCommon_generated_h
#error "VdbCommon.generated.h already included, missing '#pragma once' in VdbCommon.h"
#endif
#define VOLUMERUNTIME_VdbCommon_generated_h

#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VOLUMERUNTIME_API UScriptStruct* StaticStruct<struct FVolumeFrameInfos>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h


#define FOREACH_ENUM_EQUANTIZATIONTYPE(op) \
	op(EQuantizationType::None) \
	op(EQuantizationType::Fp4) \
	op(EQuantizationType::Fp8) \
	op(EQuantizationType::Fp16) \
	op(EQuantizationType::FpN) 

enum class EQuantizationType : uint8;
template<> struct TIsUEnumClass<EQuantizationType> { enum { Value = true }; };
template<> VOLUMERUNTIME_API UEnum* StaticEnum<EQuantizationType>();

#define FOREACH_ENUM_EVDBCLASS(op) \
	op(EVdbClass::FogVolume) \
	op(EVdbClass::SignedDistance) \
	op(EVdbClass::Undefined) 

enum class EVdbClass : uint8;
template<> struct TIsUEnumClass<EVdbClass> { enum { Value = true }; };
template<> VOLUMERUNTIME_API UEnum* StaticEnum<EVdbClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
