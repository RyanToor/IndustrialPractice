// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/VdbDenoiser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOLUMERUNTIME_VdbDenoiser_generated_h
#error "VdbDenoiser.generated.h already included, missing '#pragma once' in VdbDenoiser.h"
#endif
#define VOLUMERUNTIME_VdbDenoiser_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h


#define FOREACH_ENUM_EVDBDENOISERMETHOD(op) \
	op(EVdbDenoiserMethod::None) \
	op(EVdbDenoiserMethod::GaussianBlur) \
	op(EVdbDenoiserMethod::BoxBlur) \
	op(EVdbDenoiserMethod::Count) 

enum class EVdbDenoiserMethod : uint8;
template<> struct TIsUEnumClass<EVdbDenoiserMethod> { enum { Value = true }; };
template<> VOLUMERUNTIME_API UEnum* StaticEnum<EVdbDenoiserMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
