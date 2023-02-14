// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/VdbToDynamicMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbToDynamicMeshActor() {}
// Cross Module References
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbToDynamicMeshActor();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_AVdbToDynamicMeshActor_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVdbToDynamicMeshActor_UpdateDynamicMesh = FName(TEXT("UpdateDynamicMesh"));
	void AVdbToDynamicMeshActor::UpdateDynamicMesh()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVdbToDynamicMeshActor_UpdateDynamicMesh),NULL);
	}
	void AVdbToDynamicMeshActor::StaticRegisterNativesAVdbToDynamicMeshActor()
	{
	}
	struct Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VdbToDynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVdbToDynamicMeshActor, nullptr, "UpdateDynamicMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVdbToDynamicMeshActor);
	UClass* Z_Construct_UClass_AVdbToDynamicMeshActor_NoRegister()
	{
		return AVdbToDynamicMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AVdbToDynamicMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADynamicMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVdbToDynamicMeshActor_UpdateDynamicMesh, "UpdateDynamicMesh" }, // 4289923127
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Actor that combines VdbToVolumeTexture component with a dynamic mesh.\n// This class needs to be blueprinted, and the blueprint needs to implement UpdateDynamicMesh\n// See BP_VdbToDynamicMesh for an example.\n" },
		{ "ComponentWrapperClass", "" },
		{ "IncludePath", "VdbToDynamicMeshActor.h" },
		{ "ModuleRelativePath", "Private/VdbToDynamicMeshActor.h" },
		{ "ToolTip", "Actor that combines VdbToVolumeTexture component with a dynamic mesh.\nThis class needs to be blueprinted, and the blueprint needs to implement UpdateDynamicMesh\nSee BP_VdbToDynamicMesh for an example." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_AssetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToDynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_AssetComponent = { "AssetComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToDynamicMeshActor, AssetComponent), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_AssetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_AssetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_VdbToTexComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToDynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_VdbToTexComponent = { "VdbToTexComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToDynamicMeshActor, VdbToTexComponent), Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_VdbToTexComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_VdbToTexComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_SequenceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumetric" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VdbToDynamicMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_SequenceComponent = { "SequenceComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVdbToDynamicMeshActor, SequenceComponent), Z_Construct_UClass_UVdbSequenceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_SequenceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_SequenceComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_AssetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_VdbToTexComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::NewProp_SequenceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVdbToDynamicMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::ClassParams = {
		&AVdbToDynamicMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVdbToDynamicMeshActor()
	{
		if (!Z_Registration_Info_UClass_AVdbToDynamicMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVdbToDynamicMeshActor.OuterSingleton, Z_Construct_UClass_AVdbToDynamicMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVdbToDynamicMeshActor.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<AVdbToDynamicMeshActor>()
	{
		return AVdbToDynamicMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVdbToDynamicMeshActor);
	AVdbToDynamicMeshActor::~AVdbToDynamicMeshActor() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToDynamicMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToDynamicMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVdbToDynamicMeshActor, AVdbToDynamicMeshActor::StaticClass, TEXT("AVdbToDynamicMeshActor"), &Z_Registration_Info_UClass_AVdbToDynamicMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVdbToDynamicMeshActor), 1622688186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToDynamicMeshActor_h_3431568245(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToDynamicMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToDynamicMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
