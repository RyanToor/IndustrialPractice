// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Private/MovieSceneVolumeTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVolumeTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_VolumeSequencer();
	VOLUMESEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVolumeParams();
	VOLUMESEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate();
	VOLUMESEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneVolumeSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneVolumeParams>(), "USTRUCT FMovieSceneVolumeSectionTemplateParameters cannot be polymorphic unless super FMovieSceneVolumeParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters;
class UScriptStruct* FMovieSceneVolumeSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters, Z_Construct_UPackage__Script_VolumeSequencer(), TEXT("MovieSceneVolumeSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.OuterSingleton;
}
template<> VOLUMESEQUENCER_API UScriptStruct* StaticStruct<FMovieSceneVolumeSectionTemplateParameters>()
{
	return FMovieSceneVolumeSectionTemplateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneVolumeTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVolumeSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneVolumeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneVolumeSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneVolumeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneVolumeSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewProp_SectionEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeSequencer,
		Z_Construct_UScriptStruct_FMovieSceneVolumeParams,
		&NewStructOps,
		"MovieSceneVolumeSectionTemplateParameters",
		sizeof(FMovieSceneVolumeSectionTemplateParameters),
		alignof(FMovieSceneVolumeSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneVolumeSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneVolumeSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate;
class UScriptStruct* FMovieSceneVolumeSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate, Z_Construct_UPackage__Script_VolumeSequencer(), TEXT("MovieSceneVolumeSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.OuterSingleton;
}
template<> VOLUMESEQUENCER_API UScriptStruct* StaticStruct<FMovieSceneVolumeSectionTemplate>()
{
	return FMovieSceneVolumeSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneVolumeTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVolumeSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneVolumeTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneVolumeSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewProp_Params_MetaData)) }; // 2339422885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeSequencer,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneVolumeSectionTemplate",
		sizeof(FMovieSceneVolumeSectionTemplate),
		alignof(FMovieSceneVolumeSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Sequencer_Private_MovieSceneVolumeTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Sequencer_Private_MovieSceneVolumeTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneVolumeSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneVolumeSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVolumeSectionTemplateParameters), 2339422885U) },
		{ FMovieSceneVolumeSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVolumeSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneVolumeSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneVolumeSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVolumeSectionTemplate), 3264083203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Sequencer_Private_MovieSceneVolumeTemplate_h_1482190915(TEXT("/Script/VolumeSequencer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Sequencer_Private_MovieSceneVolumeTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Sequencer_Private_MovieSceneVolumeTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
