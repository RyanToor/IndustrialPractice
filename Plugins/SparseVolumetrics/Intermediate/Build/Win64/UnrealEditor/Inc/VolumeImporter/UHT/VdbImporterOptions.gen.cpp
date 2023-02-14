// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importer/Private/VdbImporterOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbImporterOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VolumeImporter();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbImporterOptions();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbImporterOptions_NoRegister();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EQuantizationType();
// End Cross Module References
	void UVdbImporterOptions::StaticRegisterNativesUVdbImporterOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbImporterOptions);
	UClass* Z_Construct_UClass_UVdbImporterOptions_NoRegister()
	{
		return UVdbImporterOptions::StaticClass();
	}
	struct Z_Construct_UClass_UVdbImporterOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Quantization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Quantization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSequence_MetaData[];
#endif
		static void NewProp_IsSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportAsSequence_MetaData[];
#endif
		static void NewProp_ImportAsSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportAsSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbImporterOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "DebugProperty" },
		{ "IncludePath", "VdbImporterOptions.h" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization_MetaData[] = {
		{ "Category", "Compression" },
		{ "DisplayName", "Quantization Type" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
		{ "ToolTip", "VDB float grids can be quantized (compressed). Not applicable with Vector Grids. Use this for lighter models in memory. Note that compressed models do not render necessarily faster." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization = { "Quantization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbImporterOptions, Quantization), Z_Construct_UEnum_VolumeRuntime_EQuantizationType, METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization_MetaData)) }; // 4005535642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
		{ "ToolTip", "True if file is part of a sequence in the same folder." },
	};
#endif
	void Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence_SetBit(void* Obj)
	{
		((UVdbImporterOptions*)Obj)->IsSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence = { "IsSequence", nullptr, (EPropertyFlags)0x0010000000034001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbImporterOptions), &Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "EditCondition", "IsSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
		{ "ToolTip", "Import as a sequence or as individual frame." },
	};
#endif
	void Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence_SetBit(void* Obj)
	{
		((UVdbImporterOptions*)Obj)->ImportAsSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence = { "ImportAsSequence", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbImporterOptions), &Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_FirstFrame_MetaData[] = {
		{ "Category", "Sequence" },
		{ "EditCondition", "IsSequence && ImportAsSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
		{ "ToolTip", "Index of first detected frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_FirstFrame = { "FirstFrame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbImporterOptions, FirstFrame), METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_FirstFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_FirstFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_LastFrame_MetaData[] = {
		{ "Category", "Sequence" },
		{ "EditCondition", "IsSequence && ImportAsSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/VdbImporterOptions.h" },
		{ "ToolTip", "Index of last detected frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_LastFrame = { "LastFrame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbImporterOptions, LastFrame), METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_LastFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_LastFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbImporterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_Quantization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_IsSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_ImportAsSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_FirstFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbImporterOptions_Statics::NewProp_LastFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbImporterOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbImporterOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbImporterOptions_Statics::ClassParams = {
		&UVdbImporterOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVdbImporterOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbImporterOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImporterOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbImporterOptions()
	{
		if (!Z_Registration_Info_UClass_UVdbImporterOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbImporterOptions.OuterSingleton, Z_Construct_UClass_UVdbImporterOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbImporterOptions.OuterSingleton;
	}
	template<> VOLUMEIMPORTER_API UClass* StaticClass<UVdbImporterOptions>()
	{
		return UVdbImporterOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbImporterOptions);
	UVdbImporterOptions::~UVdbImporterOptions() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImporterOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImporterOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbImporterOptions, UVdbImporterOptions::StaticClass, TEXT("UVdbImporterOptions"), &Z_Registration_Info_UClass_UVdbImporterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbImporterOptions), 113437778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImporterOptions_h_3975206470(TEXT("/Script/VolumeImporter"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImporterOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImporterOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
