// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/VdbPrincipledActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbPrincipledActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbPrincipledActor();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbPrincipledActor_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbPrincipledComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister();
// End Cross Module References
	void AVdbPrincipledActor::StaticRegisterNativesAVdbPrincipledActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVdbPrincipledActor);
	UClass* Z_Construct_UClass_AVdbPrincipledActor_NoRegister()
	{
		return AVdbPrincipledActor::StaticClass();
	}
	struct Z_Construct_UClass_AVdbPrincipledActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrincipledComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrincipledComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVdbPrincipledActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbPrincipledActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Sparse Volumetric VDB actor, not using Unreal's material system but a hardcoded\n// Principled Volume Shader. This actor supports Unreal's pathtracer allowing for \n// progressive offline rendering.\n" },
		{ "ComponentWrapperClass", "" },
		{ "HideCategories", "Activation Input Physics Materials Collision Lighting LOD HLOD Mobile Navigation VirtualTexture" },
		{ "IncludePath", "VdbPrincipledActor.h" },
		{ "ModuleRelativePath", "Private/VdbPrincipledActor.h" },
		{ "ToolTip", "Sparse Volumetric VDB actor, not using Unreal's material system but a hardcoded\nPrincipled Volume Shader. This actor supports Unreal's pathtracer allowing for\nprogressive offline rendering." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_AssetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbPrincipledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_AssetComponent = { "AssetComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbPrincipledActor, AssetComponent), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_AssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_AssetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_PrincipledComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbPrincipledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_PrincipledComponent = { "PrincipledComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbPrincipledActor, PrincipledComponent), Z_Construct_UClass_UVdbPrincipledComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_PrincipledComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_PrincipledComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_SequenceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbPrincipledActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_SequenceComponent = { "SequenceComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbPrincipledActor, SequenceComponent), Z_Construct_UClass_UVdbSequenceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_SequenceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_SequenceComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVdbPrincipledActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_AssetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_PrincipledComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbPrincipledActor_Statics::NewProp_SequenceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVdbPrincipledActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVdbPrincipledActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVdbPrincipledActor_Statics::ClassParams = {
		&AVdbPrincipledActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVdbPrincipledActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVdbPrincipledActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVdbPrincipledActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbPrincipledActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVdbPrincipledActor()
	{
		if (!Z_Registration_Info_UClass_AVdbPrincipledActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVdbPrincipledActor.OuterSingleton, Z_Construct_UClass_AVdbPrincipledActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVdbPrincipledActor.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<AVdbPrincipledActor>()
	{
		return AVdbPrincipledActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVdbPrincipledActor);
	AVdbPrincipledActor::~AVdbPrincipledActor() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVdbPrincipledActor, AVdbPrincipledActor::StaticClass, TEXT("AVdbPrincipledActor"), &Z_Registration_Info_UClass_AVdbPrincipledActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVdbPrincipledActor), 1824202711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledActor_h_4060744332(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
