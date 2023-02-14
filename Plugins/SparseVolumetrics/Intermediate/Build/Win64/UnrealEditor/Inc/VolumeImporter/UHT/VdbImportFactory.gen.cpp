// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importer/Private/VdbImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VolumeImporter();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbImportFactory();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbImportFactory_NoRegister();
// End Cross Module References
	void UVdbImportFactory::StaticRegisterNativesUVdbImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbImportFactory);
	UClass* Z_Construct_UClass_UVdbImportFactory_NoRegister()
	{
		return UVdbImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVdbImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Responsible for creating and importing new OpenVDB & NanoVDB objects\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VdbImportFactory.h" },
		{ "ModuleRelativePath", "Private/VdbImportFactory.h" },
		{ "ToolTip", "Responsible for creating and importing new OpenVDB & NanoVDB objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbImportFactory_Statics::ClassParams = {
		&UVdbImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbImportFactory()
	{
		if (!Z_Registration_Info_UClass_UVdbImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbImportFactory.OuterSingleton, Z_Construct_UClass_UVdbImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbImportFactory.OuterSingleton;
	}
	template<> VOLUMEIMPORTER_API UClass* StaticClass<UVdbImportFactory>()
	{
		return UVdbImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbImportFactory);
	UVdbImportFactory::~UVdbImportFactory() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbImportFactory, UVdbImportFactory::StaticClass, TEXT("UVdbImportFactory"), &Z_Registration_Info_UClass_UVdbImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbImportFactory), 3371602774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImportFactory_h_3833822441(TEXT("/Script/VolumeImporter"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
