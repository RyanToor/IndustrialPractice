// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbMaterialComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbMaterialComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbMaterialComponent();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbMaterialComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetVdbAssets)
	{
		P_GET_OBJECT(UVdbAssetComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVdbAssets(Z_Param_Comp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetBlackbodyIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlackbodyIntensity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetBlackbodyTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlackbodyTemperature(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetAnisotropy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnisotropy(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetAmbient)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAmbient(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetAlbedo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlbedo(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetDensityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensityMultiplier(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetVolumePadding)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumePadding(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetJittering)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJittering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetShadowStepSizeMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowStepSizeMultiplier(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbMaterialComponent::execSetLocalStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalStepSize(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UVdbMaterialComponent::StaticRegisterNativesUVdbMaterialComponent()
	{
		UClass* Class = UVdbMaterialComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAlbedo", &UVdbMaterialComponent::execSetAlbedo },
			{ "SetAmbient", &UVdbMaterialComponent::execSetAmbient },
			{ "SetAnisotropy", &UVdbMaterialComponent::execSetAnisotropy },
			{ "SetBlackbodyIntensity", &UVdbMaterialComponent::execSetBlackbodyIntensity },
			{ "SetBlackbodyTemperature", &UVdbMaterialComponent::execSetBlackbodyTemperature },
			{ "SetDensityMultiplier", &UVdbMaterialComponent::execSetDensityMultiplier },
			{ "SetJittering", &UVdbMaterialComponent::execSetJittering },
			{ "SetLocalStepSize", &UVdbMaterialComponent::execSetLocalStepSize },
			{ "SetShadowStepSizeMultiplier", &UVdbMaterialComponent::execSetShadowStepSizeMultiplier },
			{ "SetVdbAssets", &UVdbMaterialComponent::execSetVdbAssets },
			{ "SetVolumePadding", &UVdbMaterialComponent::execSetVolumePadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics
	{
		struct VdbMaterialComponent_eventSetAlbedo_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetAlbedo_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetAlbedo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::VdbMaterialComponent_eventSetAlbedo_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics
	{
		struct VdbMaterialComponent_eventSetAmbient_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetAmbient_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetAmbient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::VdbMaterialComponent_eventSetAmbient_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics
	{
		struct VdbMaterialComponent_eventSetAnisotropy_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetAnisotropy_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetAnisotropy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::VdbMaterialComponent_eventSetAnisotropy_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics
	{
		struct VdbMaterialComponent_eventSetBlackbodyIntensity_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetBlackbodyIntensity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetBlackbodyIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::VdbMaterialComponent_eventSetBlackbodyIntensity_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics
	{
		struct VdbMaterialComponent_eventSetBlackbodyTemperature_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetBlackbodyTemperature_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetBlackbodyTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::VdbMaterialComponent_eventSetBlackbodyTemperature_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics
	{
		struct VdbMaterialComponent_eventSetDensityMultiplier_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetDensityMultiplier_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetDensityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::VdbMaterialComponent_eventSetDensityMultiplier_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics
	{
		struct VdbMaterialComponent_eventSetJittering_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetJittering_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetJittering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::VdbMaterialComponent_eventSetJittering_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetJittering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetJittering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics
	{
		struct VdbMaterialComponent_eventSetLocalStepSize_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetLocalStepSize_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "Comment", "//-------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetLocalStepSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::VdbMaterialComponent_eventSetLocalStepSize_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics
	{
		struct VdbMaterialComponent_eventSetShadowStepSizeMultiplier_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetShadowStepSizeMultiplier_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetShadowStepSizeMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::VdbMaterialComponent_eventSetShadowStepSizeMultiplier_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics
	{
		struct VdbMaterialComponent_eventSetVdbAssets_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetVdbAssets_Parms, Comp), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::NewProp_Comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "DisplayName", "Set VdbAssetComponent" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetVdbAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::VdbMaterialComponent_eventSetVdbAssets_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics
	{
		struct VdbMaterialComponent_eventSetVolumePadding_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbMaterialComponent_eventSetVolumePadding_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbMaterialComponent, nullptr, "SetVolumePadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::VdbMaterialComponent_eventSetVolumePadding_Parms), Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbMaterialComponent);
	UClass* Z_Construct_UClass_UVdbMaterialComponent_NoRegister()
	{
		return UVdbMaterialComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVdbMaterialComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRayDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalStepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalStepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowStepSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowStepSizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jittering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Jittering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrilinearSampling_MetaData[];
#endif
		static void NewProp_TrilinearSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TrilinearSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumePadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColoredTransmittance_MetaData[];
#endif
		static void NewProp_ColoredTransmittance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ColoredTransmittance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporalNoise_MetaData[];
#endif
		static void NewProp_TemporalNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TemporalNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImprovedSkylight_MetaData[];
#endif
		static void NewProp_ImprovedSkylight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImprovedSkylight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Albedo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Albedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ambient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ambient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Anisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackbodyIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlackbodyIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicallyBasedBlackbody_MetaData[];
#endif
		static void NewProp_PhysicallyBasedBlackbody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicallyBasedBlackbody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackbodyTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlackbodyTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackBodyCurveAtlas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackBodyCurveAtlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackBodyCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackBodyCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentLevelSet_MetaData[];
#endif
		static void NewProp_TranslucentLevelSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TranslucentLevelSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbMaterialComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbMaterialComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetAlbedo, "SetAlbedo" }, // 1749492881
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetAmbient, "SetAmbient" }, // 4004986651
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetAnisotropy, "SetAnisotropy" }, // 2243162964
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyIntensity, "SetBlackbodyIntensity" }, // 3904953044
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetBlackbodyTemperature, "SetBlackbodyTemperature" }, // 999639851
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetDensityMultiplier, "SetDensityMultiplier" }, // 531768503
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetJittering, "SetJittering" }, // 2221243906
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetLocalStepSize, "SetLocalStepSize" }, // 38337160
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetShadowStepSizeMultiplier, "SetShadowStepSizeMultiplier" }, // 1003070221
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetVdbAssets, "SetVdbAssets" }, // 3663131478
		{ &Z_Construct_UFunction_UVdbMaterialComponent_SetVolumePadding, "SetVolumePadding" }, // 2038199721
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Activation Input Physics Materials Collision Lighting LOD HLOD Mobile Navigation VirtualTexture Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VdbMaterialComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "// Must be a Volume domain material.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Must be a Volume domain material." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_MaxRayDepth_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "1" },
		{ "Comment", "// Max number of ray bounces\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Max number of ray bounces" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_MaxRayDepth = { "MaxRayDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, MaxRayDepth), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_MaxRayDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_MaxRayDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, SamplesPerPixel), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_SamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_LocalStepSize_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// Raymarching step distance, in local space. The smaller the more accurate, but also the more expensive. Only use small values \n// to capture small missing features. It is recommended to keep this multiplier as high as possible for better performance.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Raymarching step distance, in local space. The smaller the more accurate, but also the more expensive. Only use small values\nto capture small missing features. It is recommended to keep this multiplier as high as possible for better performance." },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_LocalStepSize = { "LocalStepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, LocalStepSize), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_LocalStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_LocalStepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ShadowStepSizeMultiplier_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Shadow raymarching step distance multiplier. It represents a multiple of LocalStepSize.\n// It is recommended to keep this multiplier as high as possible for better performance.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Shadow raymarching step distance multiplier. It represents a multiple of LocalStepSize.\nIt is recommended to keep this multiplier as high as possible for better performance." },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ShadowStepSizeMultiplier = { "ShadowStepSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, ShadowStepSizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ShadowStepSizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ShadowStepSizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Jittering_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Amount of jittering / randomness during raymarching steps. Between 0 and 1.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Amount of jittering / randomness during raymarching steps. Between 0 and 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Jittering = { "Jittering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, Jittering), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Jittering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Jittering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Using trilinear sampling interpolation. Gives much nicer results but poor performances. \n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Using trilinear sampling interpolation. Gives much nicer results but poor performances." },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->TrilinearSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling = { "TrilinearSampling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_VolumePadding_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Add volume padding to account for additional details or displacement\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Add volume padding to account for additional details or displacement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_VolumePadding = { "VolumePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, VolumePadding), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_VolumePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_VolumePadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Wether to allow colored transmittance during light scattering. More physically based but less artistic-friendly when enabled.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Wether to allow colored transmittance during light scattering. More physically based but less artistic-friendly when enabled." },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->ColoredTransmittance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance = { "ColoredTransmittance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Enable temporal noise (including sub-frame variation for movie render queue)\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Enable temporal noise (including sub-frame variation for movie render queue)" },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->TemporalNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise = { "TemporalNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Enable better quality environment sampling (SkyLight) BUT with much slower performances. Recommended for offline rendering (MRQ)\n" },
		{ "DisplayName", "Improved Skylight sampling (SLOW)" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Enable better quality environment sampling (SkyLight) BUT with much slower performances. Recommended for offline rendering (MRQ)" },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->ImprovedSkylight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight = { "ImprovedSkylight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "Volume|Shading" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Density multiplier of the volume, modulating VdbPrincipal values \n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Density multiplier of the volume, modulating VdbPrincipal values" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, DensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_DensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Albedo_MetaData[] = {
		{ "Category", "Volume|Shading" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Describes the probability of scattering (versus absorption) at a scattering event. Between 0 and 1.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Describes the probability of scattering (versus absorption) at a scattering event. Between 0 and 1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Albedo = { "Albedo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, Albedo), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Albedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Albedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Ambient_MetaData[] = {
		{ "Category", "Volume|Shading" },
		{ "Comment", "// Ambient contribution to be added to light scattering, usually needed to cheaply boost volume radiance\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Ambient contribution to be added to light scattering, usually needed to cheaply boost volume radiance" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Ambient = { "Ambient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, Ambient), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Ambient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Ambient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Anisotropy_MetaData[] = {
		{ "Category", "Volume|Shading" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Backward or forward scattering direction (aka directional bias).\n// The default value of zero gives isotropic scattering so that light is scattered evenly in all directions. \n// Positive values bias the scattering effect forwards, in the direction of the light, while negative values bias the scattering backward, toward the light. \n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Backward or forward scattering direction (aka directional bias).\nThe default value of zero gives isotropic scattering so that light is scattered evenly in all directions.\nPositive values bias the scattering effect forwards, in the direction of the light, while negative values bias the scattering backward, toward the light." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, Anisotropy), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Anisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Anisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyIntensity_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Blackbody emission for fire. Set to 1 for physically accurate intensity.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Blackbody emission for fire. Set to 1 for physically accurate intensity." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyIntensity = { "BlackbodyIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, BlackbodyIntensity), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "Comment", "// Use physically based temperature-to-color values, or user-defined color curve.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Use physically based temperature-to-color values, or user-defined color curve." },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->PhysicallyBasedBlackbody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody = { "PhysicallyBasedBlackbody", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyTemperature_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Temperature in kelvin for blackbody emission, higher values emit more.\n" },
		{ "EditCondition", "PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Temperature in kelvin for blackbody emission, higher values emit more." },
		{ "UIMax", "6500" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyTemperature = { "BlackbodyTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, BlackbodyTemperature), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "Comment", "// Material is sampling the CurveAtlas only. Cf https://docs.unrealengine.com/5.1/en-US/curve-atlases-in-unreal-engine-materials/\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Material is sampling the CurveAtlas only. Cf https:docs.unrealengine.com/5.1/en-US/curve-atlases-in-unreal-engine-materials/" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurveAtlas = { "BlackBodyCurveAtlas", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, BlackBodyCurveAtlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurve_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "Comment", "// Select Curve from the Curve Atlas. If invalid or if selected curve doesn't belong to the Atlas above, material will default to physically based temperature to color.\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Select Curve from the Curve Atlas. If invalid or if selected curve doesn't belong to the Atlas above, material will default to physically based temperature to color." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurve = { "BlackBodyCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, BlackBodyCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemperatureMultiplier_MetaData[] = {
		{ "Category", "Volume|Shading|Blackbody" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Temperature values should be between 0 and 1. If using color curve (aka color ramp), this can help boost Temperature values.\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "Temperature values should be between 0 and 1. If using color curve (aka color ramp), this can help boost Temperature values." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemperatureMultiplier = { "TemperatureMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbMaterialComponent, TemperatureMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemperatureMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemperatureMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet_MetaData[] = {
		{ "Category", "Volume|LevelSet" },
		{ "Comment", "// LevelSet (aka Surface VDB) are usually meant to be opaque. But we can treat them as translucent with this option.\n// The interior of the LevelSets have fixed constant density.\n" },
		{ "ModuleRelativePath", "Public/VdbMaterialComponent.h" },
		{ "ToolTip", "LevelSet (aka Surface VDB) are usually meant to be opaque. But we can treat them as translucent with this option.\nThe interior of the LevelSets have fixed constant density." },
	};
#endif
	void Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet_SetBit(void* Obj)
	{
		((UVdbMaterialComponent*)Obj)->TranslucentLevelSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet = { "TranslucentLevelSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbMaterialComponent), &Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbMaterialComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_MaxRayDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_LocalStepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ShadowStepSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Jittering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TrilinearSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_VolumePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ColoredTransmittance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemporalNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_ImprovedSkylight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_DensityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Albedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Ambient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_Anisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_PhysicallyBasedBlackbody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackbodyTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurveAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_BlackBodyCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TemperatureMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbMaterialComponent_Statics::NewProp_TranslucentLevelSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbMaterialComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbMaterialComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbMaterialComponent_Statics::ClassParams = {
		&UVdbMaterialComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbMaterialComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbMaterialComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbMaterialComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbMaterialComponent()
	{
		if (!Z_Registration_Info_UClass_UVdbMaterialComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbMaterialComponent.OuterSingleton, Z_Construct_UClass_UVdbMaterialComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbMaterialComponent.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbMaterialComponent>()
	{
		return UVdbMaterialComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbMaterialComponent);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbMaterialComponent, UVdbMaterialComponent::StaticClass, TEXT("UVdbMaterialComponent"), &Z_Registration_Info_UClass_UVdbMaterialComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbMaterialComponent), 3008862264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_609895166(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
