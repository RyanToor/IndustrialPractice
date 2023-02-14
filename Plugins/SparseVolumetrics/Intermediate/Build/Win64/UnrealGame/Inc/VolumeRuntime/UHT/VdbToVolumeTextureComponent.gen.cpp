// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/VdbToVolumeTextureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbToVolumeTextureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVdbToVolumeMethod;
	static UEnum* EVdbToVolumeMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVdbToVolumeMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVdbToVolumeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("EVdbToVolumeMethod"));
		}
		return Z_Registration_Info_UEnum_EVdbToVolumeMethod.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UEnum* StaticEnum<EVdbToVolumeMethod>()
	{
		return EVdbToVolumeMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enumerators[] = {
		{ "EVdbToVolumeMethod::Disabled", (int64)EVdbToVolumeMethod::Disabled },
		{ "EVdbToVolumeMethod::PrimaryR8", (int64)EVdbToVolumeMethod::PrimaryR8 },
		{ "EVdbToVolumeMethod::PrimaryR16F", (int64)EVdbToVolumeMethod::PrimaryR16F },
		{ "EVdbToVolumeMethod::PrimaryRGB8", (int64)EVdbToVolumeMethod::PrimaryRGB8 },
		{ "EVdbToVolumeMethod::PrimaryRGB16F", (int64)EVdbToVolumeMethod::PrimaryRGB16F },
		{ "EVdbToVolumeMethod::PrimarySecondaryRG8", (int64)EVdbToVolumeMethod::PrimarySecondaryRG8 },
		{ "EVdbToVolumeMethod::PrimarySecondaryRG16F", (int64)EVdbToVolumeMethod::PrimarySecondaryRG16F },
		{ "EVdbToVolumeMethod::PrimarySecondaryRGBA8", (int64)EVdbToVolumeMethod::PrimarySecondaryRGBA8 },
		{ "EVdbToVolumeMethod::PrimarySecondaryRGBA16F", (int64)EVdbToVolumeMethod::PrimarySecondaryRGBA16F },
		{ "EVdbToVolumeMethod::Count", (int64)EVdbToVolumeMethod::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EVdbToVolumeMethod::Count" },
		{ "Disabled.DisplayName", "No Conversion" },
		{ "Disabled.Name", "EVdbToVolumeMethod::Disabled" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureComponent.h" },
		{ "PrimaryR16F.DisplayName", "Density R16F" },
		{ "PrimaryR16F.Name", "EVdbToVolumeMethod::PrimaryR16F" },
		{ "PrimaryR8.DisplayName", "Density R8" },
		{ "PrimaryR8.Name", "EVdbToVolumeMethod::PrimaryR8" },
		{ "PrimaryRGB16F.DisplayName", "Color RGB16F" },
		{ "PrimaryRGB16F.Name", "EVdbToVolumeMethod::PrimaryRGB16F" },
		{ "PrimaryRGB8.DisplayName", "Color RGB8" },
		{ "PrimaryRGB8.Name", "EVdbToVolumeMethod::PrimaryRGB8" },
		{ "PrimarySecondaryRG16F.DisplayName", "Density R16F + Temperature B16F, RG16F" },
		{ "PrimarySecondaryRG16F.Name", "EVdbToVolumeMethod::PrimarySecondaryRG16F" },
		{ "PrimarySecondaryRG8.DisplayName", "Density R8 + Temperature B8, RG8" },
		{ "PrimarySecondaryRG8.Name", "EVdbToVolumeMethod::PrimarySecondaryRG8" },
		{ "PrimarySecondaryRGBA16F.DisplayName", "Density A16F + Color RGB16F, RGBA16F" },
		{ "PrimarySecondaryRGBA16F.Name", "EVdbToVolumeMethod::PrimarySecondaryRGBA16F" },
		{ "PrimarySecondaryRGBA8.DisplayName", "Density A8 + Color RGB8, RGBA8" },
		{ "PrimarySecondaryRGBA8.Name", "EVdbToVolumeMethod::PrimarySecondaryRGBA8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		"EVdbToVolumeMethod",
		"EVdbToVolumeMethod",
		Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod()
	{
		if (!Z_Registration_Info_UEnum_EVdbToVolumeMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVdbToVolumeMethod.InnerSingleton, Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVdbToVolumeMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UVdbToVolumeTextureComponent::execSetVdbAssets)
	{
		P_GET_OBJECT(UVdbAssetComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVdbAssets(Z_Param_Comp);
		P_NATIVE_END;
	}
	void UVdbToVolumeTextureComponent::StaticRegisterNativesUVdbToVolumeTextureComponent()
	{
		UClass* Class = UVdbToVolumeTextureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetVdbAssets", &UVdbToVolumeTextureComponent::execSetVdbAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics
	{
		struct VdbToVolumeTextureComponent_eventSetVdbAssets_Parms
		{
			UVdbAssetComponent* Comp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbToVolumeTextureComponent_eventSetVdbAssets_Parms, Comp), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::NewProp_Comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "DisplayName", "Set VdbAssetComponent" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbToVolumeTextureComponent, nullptr, "SetVdbAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::VdbToVolumeTextureComponent_eventSetVdbAssets_Parms), Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbToVolumeTextureComponent);
	UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent_NoRegister()
	{
		return UVdbToVolumeTextureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VolumeRenderTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbToVolumeTextureComponent_SetVdbAssets, "SetVdbAssets" }, // 2009748427
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Dynamically convert VDBs to Volume Textures, using a Volume Render Target\n" },
		{ "HideCategories", "Activation Collision Cooking HLOD Navigation VirtualTexture" },
		{ "IncludePath", "VdbToVolumeTextureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureComponent.h" },
		{ "ToolTip", "Dynamically convert VDBs to Volume Textures, using a Volume Render Target" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_VolumeRenderTarget_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// Target Volume Texture, to be used anywhere else\n" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureComponent.h" },
		{ "ToolTip", "Target Volume Texture, to be used anywhere else" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_VolumeRenderTarget = { "VolumeRenderTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbToVolumeTextureComponent, VolumeRenderTarget), Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_VolumeRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_VolumeRenderTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// Packing method\n" },
		{ "ModuleRelativePath", "Private/VdbToVolumeTextureComponent.h" },
		{ "ToolTip", "Packing method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbToVolumeTextureComponent, Method), Z_Construct_UEnum_VolumeRuntime_EVdbToVolumeMethod, METADATA_PARAMS(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method_MetaData)) }; // 979655100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_VolumeRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::NewProp_Method,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbToVolumeTextureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::ClassParams = {
		&UVdbToVolumeTextureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbToVolumeTextureComponent()
	{
		if (!Z_Registration_Info_UClass_UVdbToVolumeTextureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbToVolumeTextureComponent.OuterSingleton, Z_Construct_UClass_UVdbToVolumeTextureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbToVolumeTextureComponent.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbToVolumeTextureComponent>()
	{
		return UVdbToVolumeTextureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbToVolumeTextureComponent);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::EnumInfo[] = {
		{ EVdbToVolumeMethod_StaticEnum, TEXT("EVdbToVolumeMethod"), &Z_Registration_Info_UEnum_EVdbToVolumeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 979655100U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbToVolumeTextureComponent, UVdbToVolumeTextureComponent::StaticClass, TEXT("UVdbToVolumeTextureComponent"), &Z_Registration_Info_UClass_UVdbToVolumeTextureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbToVolumeTextureComponent), 703947015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_2404409724(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbToVolumeTextureComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
