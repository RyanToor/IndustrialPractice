// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbCommon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix44f();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EQuantizationType();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbClass();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeFrameInfos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuantizationType;
	static UEnum* EQuantizationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuantizationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuantizationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VolumeRuntime_EQuantizationType, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("EQuantizationType"));
		}
		return Z_Registration_Info_UEnum_EQuantizationType.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UEnum* StaticEnum<EQuantizationType>()
	{
		return EQuantizationType_StaticEnum();
	}
	struct Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enumerators[] = {
		{ "EQuantizationType::None", (int64)EQuantizationType::None },
		{ "EQuantizationType::Fp4", (int64)EQuantizationType::Fp4 },
		{ "EQuantizationType::Fp8", (int64)EQuantizationType::Fp8 },
		{ "EQuantizationType::Fp16", (int64)EQuantizationType::Fp16 },
		{ "EQuantizationType::FpN", (int64)EQuantizationType::FpN },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Based on nanovdb::GridType enum\n" },
		{ "Fp16.Comment", "// 16bit quantization of float point value\n" },
		{ "Fp16.Name", "EQuantizationType::Fp16" },
		{ "Fp16.ToolTip", "16bit quantization of float point value" },
		{ "Fp4.Comment", "// 4bit quantization of float point value\n" },
		{ "Fp4.Name", "EQuantizationType::Fp4" },
		{ "Fp4.ToolTip", "4bit quantization of float point value" },
		{ "Fp8.Comment", "// 8bit quantization of float point value\n" },
		{ "Fp8.Name", "EQuantizationType::Fp8" },
		{ "Fp8.ToolTip", "8bit quantization of float point value" },
		{ "FpN.Comment", "// variable bit quantization of floating point value\n" },
		{ "FpN.Name", "EQuantizationType::FpN" },
		{ "FpN.ToolTip", "variable bit quantization of floating point value" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
		{ "None.Comment", "// keep original data type\n" },
		{ "None.Name", "EQuantizationType::None" },
		{ "None.ToolTip", "keep original data type" },
		{ "ToolTip", "Based on nanovdb::GridType enum" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		"EQuantizationType",
		"EQuantizationType",
		Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VolumeRuntime_EQuantizationType()
	{
		if (!Z_Registration_Info_UEnum_EQuantizationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuantizationType.InnerSingleton, Z_Construct_UEnum_VolumeRuntime_EQuantizationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuantizationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVdbClass;
	static UEnum* EVdbClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVdbClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVdbClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VolumeRuntime_EVdbClass, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("EVdbClass"));
		}
		return Z_Registration_Info_UEnum_EVdbClass.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UEnum* StaticEnum<EVdbClass>()
	{
		return EVdbClass_StaticEnum();
	}
	struct Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enumerators[] = {
		{ "EVdbClass::FogVolume", (int64)EVdbClass::FogVolume },
		{ "EVdbClass::SignedDistance", (int64)EVdbClass::SignedDistance },
		{ "EVdbClass::Undefined", (int64)EVdbClass::Undefined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enum_MetaDataParams[] = {
		{ "FogVolume.Name", "EVdbClass::FogVolume" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
		{ "SignedDistance.Name", "EVdbClass::SignedDistance" },
		{ "Undefined.Name", "EVdbClass::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		"EVdbClass",
		"EVdbClass",
		Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbClass()
	{
		if (!Z_Registration_Info_UEnum_EVdbClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVdbClass.InnerSingleton, Z_Construct_UEnum_VolumeRuntime_EVdbClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVdbClass.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeFrameInfos;
class UScriptStruct* FVolumeFrameInfos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeFrameInfos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeFrameInfos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeFrameInfos, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("VolumeFrameInfos"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeFrameInfos.OuterSingleton;
}
template<> VOLUMERUNTIME_API UScriptStruct* StaticStruct<FVolumeFrameInfos>()
{
	return FVolumeFrameInfos::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberActiveVoxels_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberActiveVoxels;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexToLocal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexToLocal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_MemoryUsage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Store per-frame Volume information\n" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
		{ "ToolTip", "Store per-frame Volume information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeFrameInfos>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_NumberActiveVoxels_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_NumberActiveVoxels = { "NumberActiveVoxels", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, NumberActiveVoxels), METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_NumberActiveVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_NumberActiveVoxels_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexToLocal_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexToLocal = { "IndexToLocal", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, IndexToLocal), Z_Construct_UScriptStruct_FMatrix44f, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexToLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexToLocal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMin_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMin = { "IndexMin", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, IndexMin), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMax_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMax = { "IndexMax", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, IndexMax), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_MemoryUsage_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbCommon.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_MemoryUsage = { "MemoryUsage", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVolumeFrameInfos, MemoryUsage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_MemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_MemoryUsage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_NumberActiveVoxels,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexToLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_IndexMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewProp_MemoryUsage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		&NewStructOps,
		"VolumeFrameInfos",
		sizeof(FVolumeFrameInfos),
		alignof(FVolumeFrameInfos),
		Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVolumeFrameInfos()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumeFrameInfos.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeFrameInfos.InnerSingleton, Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumeFrameInfos.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::EnumInfo[] = {
		{ EQuantizationType_StaticEnum, TEXT("EQuantizationType"), &Z_Registration_Info_UEnum_EQuantizationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4005535642U) },
		{ EVdbClass_StaticEnum, TEXT("EVdbClass"), &Z_Registration_Info_UEnum_EVdbClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4284313104U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::ScriptStructInfo[] = {
		{ FVolumeFrameInfos::StaticStruct, Z_Construct_UScriptStruct_FVolumeFrameInfos_Statics::NewStructOps, TEXT("VolumeFrameInfos"), &Z_Registration_Info_UScriptStruct_VolumeFrameInfos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeFrameInfos), 1885919563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_185071967(TEXT("/Script/VolumeRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
