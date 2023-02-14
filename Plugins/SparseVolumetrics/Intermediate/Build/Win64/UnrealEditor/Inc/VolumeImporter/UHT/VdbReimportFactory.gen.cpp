// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importer/Private/VdbReimportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbReimportFactory() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VolumeImporter();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbImportFactory();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbReimportFactory();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbReimportFactory_NoRegister();
// End Cross Module References
	void UVdbReimportFactory::StaticRegisterNativesUVdbReimportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbReimportFactory);
	UClass* Z_Construct_UClass_UVdbReimportFactory_NoRegister()
	{
		return UVdbReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVdbReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVdbImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Reimports a UVdbVolume asset\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VdbReimportFactory.h" },
		{ "ModuleRelativePath", "Private/VdbReimportFactory.h" },
		{ "ToolTip", "Reimports a UVdbVolume asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbReimportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbReimportFactory_Statics::ClassParams = {
		&UVdbReimportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVdbReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbReimportFactory()
	{
		if (!Z_Registration_Info_UClass_UVdbReimportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbReimportFactory.OuterSingleton, Z_Construct_UClass_UVdbReimportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbReimportFactory.OuterSingleton;
	}
	template<> VOLUMEIMPORTER_API UClass* StaticClass<UVdbReimportFactory>()
	{
		return UVdbReimportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbReimportFactory);
	UVdbReimportFactory::~UVdbReimportFactory() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbReimportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbReimportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbReimportFactory, UVdbReimportFactory::StaticClass, TEXT("UVdbReimportFactory"), &Z_Registration_Info_UClass_UVdbReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbReimportFactory), 1385327952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbReimportFactory_h_3102222290(TEXT("/Script/VolumeImporter"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbReimportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbReimportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
