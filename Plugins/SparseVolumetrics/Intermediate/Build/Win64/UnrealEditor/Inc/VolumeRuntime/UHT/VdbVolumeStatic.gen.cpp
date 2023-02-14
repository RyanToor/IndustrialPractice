// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbVolumeStatic.h"
#include "Runtime/Public/VdbCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbVolumeStatic() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeBase();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeStatic();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeStatic_NoRegister();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeFrameInfos();
// End Cross Module References
	void UVdbVolumeStatic::StaticRegisterNativesUVdbVolumeStatic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbVolumeStatic);
	UClass* Z_Construct_UClass_UVdbVolumeStatic_NoRegister()
	{
		return UVdbVolumeStatic::StaticClass();
	}
	struct Z_Construct_UClass_UVdbVolumeStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeFrameInfos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeFrameInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbVolumeStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVdbVolumeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeStatic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NanoVDB buffer container\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VdbVolumeStatic.h" },
		{ "ModuleRelativePath", "Public/VdbVolumeStatic.h" },
		{ "ToolTip", "NanoVDB buffer container" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeStatic_Statics::NewProp_VolumeFrameInfos_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeStatic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbVolumeStatic_Statics::NewProp_VolumeFrameInfos = { "VolumeFrameInfos", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeStatic, VolumeFrameInfos), Z_Construct_UScriptStruct_FVolumeFrameInfos, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeStatic_Statics::NewProp_VolumeFrameInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeStatic_Statics::NewProp_VolumeFrameInfos_MetaData)) }; // 1885919563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbVolumeStatic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeStatic_Statics::NewProp_VolumeFrameInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbVolumeStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbVolumeStatic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbVolumeStatic_Statics::ClassParams = {
		&UVdbVolumeStatic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVdbVolumeStatic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeStatic_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeStatic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbVolumeStatic()
	{
		if (!Z_Registration_Info_UClass_UVdbVolumeStatic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbVolumeStatic.OuterSingleton, Z_Construct_UClass_UVdbVolumeStatic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbVolumeStatic.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbVolumeStatic>()
	{
		return UVdbVolumeStatic::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVdbVolumeStatic)
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeStatic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeStatic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbVolumeStatic, UVdbVolumeStatic::StaticClass, TEXT("UVdbVolumeStatic"), &Z_Registration_Info_UClass_UVdbVolumeStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbVolumeStatic), 3319686279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeStatic_h_1436899272(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeStatic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeStatic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
