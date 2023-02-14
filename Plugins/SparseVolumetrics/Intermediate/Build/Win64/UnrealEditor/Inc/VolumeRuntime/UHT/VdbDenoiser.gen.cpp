// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/Rendering/VdbDenoiser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbDenoiser() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVdbDenoiserMethod;
	static UEnum* EVdbDenoiserMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVdbDenoiserMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVdbDenoiserMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("EVdbDenoiserMethod"));
		}
		return Z_Registration_Info_UEnum_EVdbDenoiserMethod.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UEnum* StaticEnum<EVdbDenoiserMethod>()
	{
		return EVdbDenoiserMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enumerators[] = {
		{ "EVdbDenoiserMethod::None", (int64)EVdbDenoiserMethod::None },
		{ "EVdbDenoiserMethod::GaussianBlur", (int64)EVdbDenoiserMethod::GaussianBlur },
		{ "EVdbDenoiserMethod::BoxBlur", (int64)EVdbDenoiserMethod::BoxBlur },
		{ "EVdbDenoiserMethod::Count", (int64)EVdbDenoiserMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxBlur.DisplayName", "Box blur" },
		{ "BoxBlur.Name", "EVdbDenoiserMethod::BoxBlur" },
		{ "Count.Comment", "// Add your own method here\n" },
		{ "Count.DisplayName", "Invalid" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EVdbDenoiserMethod::Count" },
		{ "Count.ToolTip", "Add your own method here" },
		{ "GaussianBlur.DisplayName", "Gaussian blur" },
		{ "GaussianBlur.Name", "EVdbDenoiserMethod::GaussianBlur" },
		{ "ModuleRelativePath", "Private/Rendering/VdbDenoiser.h" },
		{ "None.DisplayName", "No denoising" },
		{ "None.Name", "EVdbDenoiserMethod::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		"EVdbDenoiserMethod",
		"EVdbDenoiserMethod",
		Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod()
	{
		if (!Z_Registration_Info_UEnum_EVdbDenoiserMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVdbDenoiserMethod.InnerSingleton, Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVdbDenoiserMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h_Statics::EnumInfo[] = {
		{ EVdbDenoiserMethod_StaticEnum, TEXT("EVdbDenoiserMethod"), &Z_Registration_Info_UEnum_EVdbDenoiserMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 453174477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h_678484945(TEXT("/Script/VolumeRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Rendering_VdbDenoiser_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
