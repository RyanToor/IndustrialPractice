// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeStreamingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOLUMESTREAMER_VolumeStreamingManager_generated_h
#error "VolumeStreamingManager.generated.h already included, missing '#pragma once' in VolumeStreamingManager.h"
#endif
#define VOLUMESTREAMER_VolumeStreamingManager_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h


#define FOREACH_ENUM_EVOLUMEPLAYMODE(op) \
	op(EVolumePlayMode::Stopped) \
	op(EVolumePlayMode::Playing) \
	op(EVolumePlayMode::Paused) 

enum class EVolumePlayMode : uint8;
template<> struct TIsUEnumClass<EVolumePlayMode> { enum { Value = true }; };
template<> VOLUMESTREAMER_API UEnum* StaticEnum<EVolumePlayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
