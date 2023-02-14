// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbVolumeSequence.h"
#include "Runtime/Public/VdbCommon.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbVolumeSequence() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeBase();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeSequence();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeSequence_NoRegister();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVdbSequenceChunk();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeFrameInfos();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VdbSequenceChunk;
class UScriptStruct* FVdbSequenceChunk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VdbSequenceChunk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VdbSequenceChunk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVdbSequenceChunk, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("VdbSequenceChunk"));
	}
	return Z_Registration_Info_UScriptStruct_VdbSequenceChunk.OuterSingleton;
}
template<> VOLUMERUNTIME_API UScriptStruct* StaticStruct<FVdbSequenceChunk>()
{
	return FVdbSequenceChunk::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VdbVolumeSequence.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVdbSequenceChunk>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		&NewStructOps,
		"VdbSequenceChunk",
		sizeof(FVdbSequenceChunk),
		alignof(FVdbSequenceChunk),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVdbSequenceChunk()
	{
		if (!Z_Registration_Info_UScriptStruct_VdbSequenceChunk.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VdbSequenceChunk.InnerSingleton, Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VdbSequenceChunk.InnerSingleton;
	}
	void UVdbVolumeSequence::StaticRegisterNativesUVdbVolumeSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbVolumeSequence);
	UClass* Z_Construct_UClass_UVdbVolumeSequence_NoRegister()
	{
		return UVdbVolumeSequence::StaticClass();
	}
	struct Z_Construct_UClass_UVdbVolumeSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameMaxMemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_FrameMaxMemoryUsage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeFramesInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeFramesInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VolumeFramesInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbVolumeSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVdbVolumeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NanoVDB file container\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VdbVolumeSequence.h" },
		{ "ModuleRelativePath", "Public/VdbVolumeSequence.h" },
		{ "ToolTip", "NanoVDB file container" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_FrameMaxMemoryUsage_MetaData[] = {
		{ "ModuleRelativePath", "Public/VdbVolumeSequence.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_FrameMaxMemoryUsage = { "FrameMaxMemoryUsage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeSequence, FrameMaxMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_FrameMaxMemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_FrameMaxMemoryUsage_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos_Inner = { "VolumeFramesInfos", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVolumeFrameInfos, METADATA_PARAMS(nullptr, 0) }; // 1885919563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeSequence.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos = { "VolumeFramesInfos", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeSequence, VolumeFramesInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos_MetaData)) }; // 1885919563
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbVolumeSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_FrameMaxMemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeSequence_Statics::NewProp_VolumeFramesInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbVolumeSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbVolumeSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbVolumeSequence_Statics::ClassParams = {
		&UVdbVolumeSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVdbVolumeSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeSequence_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbVolumeSequence()
	{
		if (!Z_Registration_Info_UClass_UVdbVolumeSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbVolumeSequence.OuterSingleton, Z_Construct_UClass_UVdbVolumeSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbVolumeSequence.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbVolumeSequence>()
	{
		return UVdbVolumeSequence::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVdbVolumeSequence)
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ScriptStructInfo[] = {
		{ FVdbSequenceChunk::StaticStruct, Z_Construct_UScriptStruct_FVdbSequenceChunk_Statics::NewStructOps, TEXT("VdbSequenceChunk"), &Z_Registration_Info_UScriptStruct_VdbSequenceChunk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVdbSequenceChunk), 1840480850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbVolumeSequence, UVdbVolumeSequence::StaticClass, TEXT("UVdbVolumeSequence"), &Z_Registration_Info_UClass_UVdbVolumeSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbVolumeSequence), 584471990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_76655517(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeSequence_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
