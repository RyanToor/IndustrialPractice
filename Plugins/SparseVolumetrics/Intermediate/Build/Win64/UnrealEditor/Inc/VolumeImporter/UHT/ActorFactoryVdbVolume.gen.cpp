// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Importer/Private/ActorFactoryVdbVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVdbVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_VolumeImporter();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UActorFactoryVdbVolume();
	VOLUMEIMPORTER_API UClass* Z_Construct_UClass_UActorFactoryVdbVolume_NoRegister();
// End Cross Module References
	void UActorFactoryVdbVolume::StaticRegisterNativesUActorFactoryVdbVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryVdbVolume);
	UClass* Z_Construct_UClass_UActorFactoryVdbVolume_NoRegister()
	{
		return UActorFactoryVdbVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVdbVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVdbVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVdbVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Factory class for spawning and creating AVdbMaterialActor from UVdbVolume\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVdbVolume.h" },
		{ "ModuleRelativePath", "Private/ActorFactoryVdbVolume.h" },
		{ "ToolTip", "Factory class for spawning and creating AVdbMaterialActor from UVdbVolume" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVdbVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVdbVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVdbVolume_Statics::ClassParams = {
		&UActorFactoryVdbVolume::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVdbVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVdbVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVdbVolume()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryVdbVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVdbVolume.OuterSingleton, Z_Construct_UClass_UActorFactoryVdbVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryVdbVolume.OuterSingleton;
	}
	template<> VOLUMEIMPORTER_API UClass* StaticClass<UActorFactoryVdbVolume>()
	{
		return UActorFactoryVdbVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVdbVolume);
	UActorFactoryVdbVolume::~UActorFactoryVdbVolume() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_ActorFactoryVdbVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_ActorFactoryVdbVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVdbVolume, UActorFactoryVdbVolume::StaticClass, TEXT("UActorFactoryVdbVolume"), &Z_Registration_Info_UClass_UActorFactoryVdbVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVdbVolume), 962992416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_ActorFactoryVdbVolume_h_2955894234(TEXT("/Script/VolumeImporter"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_ActorFactoryVdbVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Importer_Private_ActorFactoryVdbVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
