// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importer/Private/VdbToVolumeTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbToVolumeTextureFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VolumeImporter();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbToVolumeTextureFactory();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UVdbToVolumeTextureFactory_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeStatic_NoRegister();
// End Cross Module References
	void UVdbToVolumeTextureFactory::StaticRegisterNativesUVdbToVolumeTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbToVolumeTextureFactory);
	UClass* Z_Construct_UClass_UVdbToVolumeTextureFactory_NoRegister()
	{
		return UVdbToVolumeTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialVdbVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialVdbVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for creating volume texture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VdbToVolumeTextureFactory.h" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureFactory.h" },
		{ "ToolTip", "Factory for creating volume texture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::NewProp_InitialVdbVolume_MetaData[] = {
		{ "Comment", "/** An initial texture to assign to the newly created volume texture */" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureFactory.h" },
		{ "ToolTip", "An initial texture to assign to the newly created volume texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::NewProp_InitialVdbVolume = { "InitialVdbVolume", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbToVolumeTextureFactory, InitialVdbVolume), Z_Construct_UClass_UVdbVolumeStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::NewProp_InitialVdbVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::NewProp_InitialVdbVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::NewProp_InitialVdbVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbToVolumeTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::ClassParams = {
		&UVdbToVolumeTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbToVolumeTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UVdbToVolumeTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbToVolumeTextureFactory.OuterSingleton, Z_Construct_UClass_UVdbToVolumeTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbToVolumeTextureFactory.OuterSingleton;
	}
	template<> VOLUMEIMPORTER_API UClass* StaticClass<UVdbToVolumeTextureFactory>()
	{
		return UVdbToVolumeTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbToVolumeTextureFactory);
	UVdbToVolumeTextureFactory::~UVdbToVolumeTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbToVolumeTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbToVolumeTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbToVolumeTextureFactory, UVdbToVolumeTextureFactory::StaticClass, TEXT("UVdbToVolumeTextureFactory"), &Z_Registration_Info_UClass_UVdbToVolumeTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbToVolumeTextureFactory), 1756127138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbToVolumeTextureFactory_h_153843846(TEXT("/Script/VolumeImporter"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbToVolumeTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_VdbToVolumeTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
