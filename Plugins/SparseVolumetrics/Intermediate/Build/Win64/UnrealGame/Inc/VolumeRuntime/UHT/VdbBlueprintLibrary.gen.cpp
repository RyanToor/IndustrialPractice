// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbBlueprintLibrary();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbBlueprintLibrary_NoRegister();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod();
// End Cross Module References
	DEFINE_FUNCTION(UVdbBlueprintLibrary::execSetDenoiserMethod)
	{
		P_GET_ENUM(EVdbDenoiserMethod,Z_Param_Method);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVdbBlueprintLibrary::SetDenoiserMethod(EVdbDenoiserMethod(Z_Param_Method));
		P_NATIVE_END;
	}
	void UVdbBlueprintLibrary::StaticRegisterNativesUVdbBlueprintLibrary()
	{
		UClass* Class = UVdbBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDenoiserMethod", &UVdbBlueprintLibrary::execSetDenoiserMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics
	{
		struct VdbBlueprintLibrary_eventSetDenoiserMethod_Parms
		{
			EVdbDenoiserMethod Method;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbBlueprintLibrary_eventSetDenoiserMethod_Parms, Method), Z_Construct_UEnum_VolumeRuntime_EVdbDenoiserMethod, METADATA_PARAMS(nullptr, 0) }; // 453174477
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::NewProp_Method,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "SparseVolumetrics" },
		{ "Comment", "// Set denoising method\n" },
		{ "ModuleRelativePath", "Public/VdbBlueprintLibrary.h" },
		{ "ToolTip", "Set denoising method" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbBlueprintLibrary, nullptr, "SetDenoiserMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::VdbBlueprintLibrary_eventSetDenoiserMethod_Parms), Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbBlueprintLibrary);
	UClass* Z_Construct_UClass_UVdbBlueprintLibrary_NoRegister()
	{
		return UVdbBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVdbBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbBlueprintLibrary_SetDenoiserMethod, "SetDenoiserMethod" }, // 215730313
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VdbBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VdbBlueprintLibrary.h" },
		{ "ScriptName", "VdbLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbBlueprintLibrary_Statics::ClassParams = {
		&UVdbBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVdbBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVdbBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbBlueprintLibrary.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbBlueprintLibrary>()
	{
		return UVdbBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbBlueprintLibrary);
	UVdbBlueprintLibrary::~UVdbBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbBlueprintLibrary, UVdbBlueprintLibrary::StaticClass, TEXT("UVdbBlueprintLibrary"), &Z_Registration_Info_UClass_UVdbBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbBlueprintLibrary), 3774335249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbBlueprintLibrary_h_3417038224(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
