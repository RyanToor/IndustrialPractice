// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/VdbToVolumeTextureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbToVolumeTextureActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbToVolumeTextureActor();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbToVolumeTextureActor_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister();
// End Cross Module References
	void AVdbToVolumeTextureActor::StaticRegisterNativesAVdbToVolumeTextureActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVdbToVolumeTextureActor);
	UClass* Z_Construct_UClass_AVdbToVolumeTextureActor_NoRegister()
	{
		return AVdbToVolumeTextureActor::StaticClass();
	}
	struct Z_Construct_UClass_AVdbToVolumeTextureActor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VdbToTexComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VdbToTexComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Actor that dynamically transfers VDB grids (from OpenVDB or NanoVDB files) \n// into a Volume Texture Render Target\n" },
		{ "ComponentWrapperClass", "" },
		{ "IncludePath", "VdbToVolumeTextureActor.h" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureActor.h" },
		{ "ToolTip", "Actor that dynamically transfers VDB grids (from OpenVDB or NanoVDB files)\ninto a Volume Texture Render Target" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_AssetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_AssetComponent = { "AssetComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToVolumeTextureActor, AssetComponent), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_AssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_AssetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_VdbToTexComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_VdbToTexComponent = { "VdbToTexComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToVolumeTextureActor, VdbToTexComponent), Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_VdbToTexComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_VdbToTexComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_SequenceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_SequenceComponent = { "SequenceComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToVolumeTextureActor, SequenceComponent), Z_Construct_UClass_UVdbSequenceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_SequenceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_SequenceComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_AssetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_VdbToTexComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::NewProp_SequenceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVdbToVolumeTextureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::ClassParams = {
		&AVdbToVolumeTextureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVdbToVolumeTextureActor()
	{
		if (!Z_Registration_Info_UClass_AVdbToVolumeTextureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVdbToVolumeTextureActor.OuterSingleton, Z_Construct_UClass_AVdbToVolumeTextureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVdbToVolumeTextureActor.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<AVdbToVolumeTextureActor>()
	{
		return AVdbToVolumeTextureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVdbToVolumeTextureActor);
	AVdbToVolumeTextureActor::~AVdbToVolumeTextureActor() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVdbToVolumeTextureActor, AVdbToVolumeTextureActor::StaticClass, TEXT("AVdbToVolumeTextureActor"), &Z_Registration_Info_UClass_AVdbToVolumeTextureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVdbToVolumeTextureActor), 3523189906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureActor_h_2629137191(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
