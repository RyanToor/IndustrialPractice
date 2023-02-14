// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbMaterialActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbMaterialActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbMaterialActor();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbMaterialActor_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbMaterialComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister();
// End Cross Module References
	void AVdbMaterialActor::StaticRegisterNativesAVdbMaterialActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVdbMaterialActor);
	UClass* Z_Construct_UClass_AVdbMaterialActor_NoRegister()
	{
		return AVdbMaterialActor::StaticClass();
	}
	struct Z_Construct_UClass_AVdbMaterialActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeqComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SeqComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVdbMaterialActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbMaterialActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Sparse Volumetric VDB actor, using Unreal's material system\n" },
		{ "ComponentWrapperClass", "" },
		{ "HideCategories", "Activation Input Physics Materials Collision Lighting LOD HLOD Mobile Navigation VirtualTexture" },
		{ "IncludePath", "VdbMaterialActor.h" },
		{ "ModuleRelativePath", "Public/VdbMaterialActor.h" },
		{ "ToolTip", "Sparse Volumetric VDB actor, using Unreal's material system" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_AssetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VdbMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_AssetComponent = { "AssetComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbMaterialActor, AssetComponent), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_AssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_AssetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_MaterialComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VdbMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_MaterialComponent = { "MaterialComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbMaterialActor, MaterialComponent), Z_Construct_UClass_UVdbMaterialComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_MaterialComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_MaterialComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_SeqComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VdbMaterialActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_SeqComponent = { "SeqComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbMaterialActor, SeqComponent), Z_Construct_UClass_UVdbSequenceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_SeqComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_SeqComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVdbMaterialActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_AssetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_MaterialComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbMaterialActor_Statics::NewProp_SeqComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVdbMaterialActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVdbMaterialActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVdbMaterialActor_Statics::ClassParams = {
		&AVdbMaterialActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVdbMaterialActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVdbMaterialActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVdbMaterialActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbMaterialActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVdbMaterialActor()
	{
		if (!Z_Registration_Info_UClass_AVdbMaterialActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVdbMaterialActor.OuterSingleton, Z_Construct_UClass_AVdbMaterialActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVdbMaterialActor.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<AVdbMaterialActor>()
	{
		return AVdbMaterialActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVdbMaterialActor);
	AVdbMaterialActor::~AVdbMaterialActor() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVdbMaterialActor, AVdbMaterialActor::StaticClass, TEXT("AVdbMaterialActor"), &Z_Registration_Info_UClass_AVdbMaterialActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVdbMaterialActor), 1888295954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialActor_h_1787722086(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
