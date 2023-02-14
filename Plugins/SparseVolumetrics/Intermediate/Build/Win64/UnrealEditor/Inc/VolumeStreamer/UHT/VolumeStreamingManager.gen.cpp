// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Streamer/Public/VolumeStreamingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeStreamingManager() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VolumeStreamer();
	VOLUMESTREAMER_API UEnum* Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumePlayMode;
	static UEnum* EVolumePlayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumePlayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumePlayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode, Z_Construct_UPackage__Script_VolumeStreamer(), TEXT("EVolumePlayMode"));
		}
		return Z_Registration_Info_UEnum_EVolumePlayMode.OuterSingleton;
	}
	template<> VOLUMESTREAMER_API UEnum* StaticEnum<EVolumePlayMode>()
	{
		return EVolumePlayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enumerators[] = {
		{ "EVolumePlayMode::Stopped", (int64)EVolumePlayMode::Stopped },
		{ "EVolumePlayMode::Playing", (int64)EVolumePlayMode::Playing },
		{ "EVolumePlayMode::Paused", (int64)EVolumePlayMode::Paused },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VolumeStreamingManager.h" },
		{ "Paused.Name", "EVolumePlayMode::Paused" },
		{ "Playing.Name", "EVolumePlayMode::Playing" },
		{ "Stopped.Name", "EVolumePlayMode::Stopped" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VolumeStreamer,
		nullptr,
		"EVolumePlayMode",
		"EVolumePlayMode",
		Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode()
	{
		if (!Z_Registration_Info_UEnum_EVolumePlayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumePlayMode.InnerSingleton, Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumePlayMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h_Statics::EnumInfo[] = {
		{ EVolumePlayMode_StaticEnum, TEXT("EVolumePlayMode"), &Z_Registration_Info_UEnum_EVolumePlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3370391597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h_299236100(TEXT("/Script/VolumeStreamer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Streamer_Public_VolumeStreamingManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
