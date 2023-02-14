// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbAssetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbAssetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeBase_NoRegister();
	VOLUMERUNTIME_API UFunction* Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics
	{
		struct _Script_VolumeRuntime_eventOnVdbChanged_Parms
		{
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VolumeRuntime_eventOnVdbChanged_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VolumeRuntime, nullptr, "OnVdbChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::_Script_VolumeRuntime_eventOnVdbChanged_Parms), Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVdbAssetComponent::execGetVolumeUvScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector3f*)Z_Param__Result=P_THIS->GetVolumeUvScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbAssetComponent::execGetVolumeOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector3f*)Z_Param__Result=P_THIS->GetVolumeOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbAssetComponent::execGetVolumeSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector3f*)Z_Param__Result=P_THIS->GetVolumeSize();
		P_NATIVE_END;
	}
	void UVdbAssetComponent::StaticRegisterNativesUVdbAssetComponent()
	{
		UClass* Class = UVdbAssetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVolumeOffset", &UVdbAssetComponent::execGetVolumeOffset },
			{ "GetVolumeSize", &UVdbAssetComponent::execGetVolumeSize },
			{ "GetVolumeUvScale", &UVdbAssetComponent::execGetVolumeUvScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics
	{
		struct VdbAssetComponent_eventGetVolumeOffset_Parms
		{
			FVector3f ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbAssetComponent_eventGetVolumeOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbAssetComponent, nullptr, "GetVolumeOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::VdbAssetComponent_eventGetVolumeOffset_Parms), Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics
	{
		struct VdbAssetComponent_eventGetVolumeSize_Parms
		{
			FVector3f ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbAssetComponent_eventGetVolumeSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbAssetComponent, nullptr, "GetVolumeSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::VdbAssetComponent_eventGetVolumeSize_Parms), Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics
	{
		struct VdbAssetComponent_eventGetVolumeUvScale_Parms
		{
			FVector3f ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbAssetComponent_eventGetVolumeUvScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbAssetComponent, nullptr, "GetVolumeUvScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::VdbAssetComponent_eventGetVolumeUvScale_Parms), Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbAssetComponent);
	UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister()
	{
		return UVdbAssetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVdbAssetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DensityVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemperatureVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVdbChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVdbChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbAssetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbAssetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbAssetComponent_GetVolumeOffset, "GetVolumeOffset" }, // 3653790512
		{ &Z_Construct_UFunction_UVdbAssetComponent_GetVolumeSize, "GetVolumeSize" }, // 4166120256
		{ &Z_Construct_UFunction_UVdbAssetComponent_GetVolumeUvScale, "GetVolumeUvScale" }, // 33032146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbAssetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Can contain several grids of the same OpenVDB/NanoVDB file\n" },
		{ "HideCategories", "Activation Collision Cooking HLOD Navigation VirtualTexture" },
		{ "IncludePath", "VdbAssetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
		{ "ToolTip", "Can contain several grids of the same OpenVDB/NanoVDB file" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_DensityVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume" },
		{ "Comment", "// Principal mandatory volume (VDB float grid). If FogVolume, Density values. If LevelSet, narrow-band level set values.\n" },
		{ "DisplayName", "Density (float)" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
		{ "ToolTip", "Principal mandatory volume (VDB float grid). If FogVolume, Density values. If LevelSet, narrow-band level set values." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_DensityVolume = { "DensityVolume", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbAssetComponent, DensityVolume), Z_Construct_UClass_UVdbVolumeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_DensityVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_DensityVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_TemperatureVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume" },
		{ "Comment", "// Optional second volume (VDB float grid). If FogVolume, Temperature values. If LevelSet, unused.\n" },
		{ "DisplayName", "Temperature (float)" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
		{ "ToolTip", "Optional second volume (VDB float grid). If FogVolume, Temperature values. If LevelSet, unused." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_TemperatureVolume = { "TemperatureVolume", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbAssetComponent, TemperatureVolume), Z_Construct_UClass_UVdbVolumeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_TemperatureVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_TemperatureVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_ColorVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume" },
		{ "Comment", "// Optional third volume (VDB vector grid). If FogVolume, Color values. If LevelSet, unused.\n" },
		{ "DisplayName", "Color (vector)" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
		{ "ToolTip", "Optional third volume (VDB vector grid). If FogVolume, Color values. If LevelSet, unused." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_ColorVolume = { "ColorVolume", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbAssetComponent, ColorVolume), Z_Construct_UClass_UVdbVolumeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_ColorVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_ColorVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_OnVdbChanged_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbAssetComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_OnVdbChanged = { "OnVdbChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbAssetComponent, OnVdbChanged), Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_OnVdbChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_OnVdbChanged_MetaData)) }; // 726947147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbAssetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_DensityVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_TemperatureVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_ColorVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbAssetComponent_Statics::NewProp_OnVdbChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbAssetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbAssetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbAssetComponent_Statics::ClassParams = {
		&UVdbAssetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbAssetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbAssetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbAssetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbAssetComponent()
	{
		if (!Z_Registration_Info_UClass_UVdbAssetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbAssetComponent.OuterSingleton, Z_Construct_UClass_UVdbAssetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbAssetComponent.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbAssetComponent>()
	{
		return UVdbAssetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbAssetComponent);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbAssetComponent, UVdbAssetComponent::StaticClass, TEXT("UVdbAssetComponent"), &Z_Registration_Info_UClass_UVdbAssetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbAssetComponent), 3821514414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_323530750(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
