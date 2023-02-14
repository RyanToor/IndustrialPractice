// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/VdbPrincipledComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbPrincipledComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbPrincipledComponent();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbPrincipledComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemperature(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetBlackbodyTint)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlackbodyTint(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetBlackbodyIntensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlackbodyIntensity(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetEmissionColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmissionColor(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetEmissionStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmissionStrength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetAnisotropy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnisotropy(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetAlbedo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlbedo(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetDensityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensityMultiplier(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStepSize(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbPrincipledComponent::execSetVdbAssets)
	{
		P_GET_OBJECT(UVdbAssetComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVdbAssets(Z_Param_Comp);
		P_NATIVE_END;
	}
	void UVdbPrincipledComponent::StaticRegisterNativesUVdbPrincipledComponent()
	{
		UClass* Class = UVdbPrincipledComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAlbedo", &UVdbPrincipledComponent::execSetAlbedo },
			{ "SetAnisotropy", &UVdbPrincipledComponent::execSetAnisotropy },
			{ "SetBlackbodyIntensity", &UVdbPrincipledComponent::execSetBlackbodyIntensity },
			{ "SetBlackbodyTint", &UVdbPrincipledComponent::execSetBlackbodyTint },
			{ "SetColor", &UVdbPrincipledComponent::execSetColor },
			{ "SetDensityMultiplier", &UVdbPrincipledComponent::execSetDensityMultiplier },
			{ "SetEmissionColor", &UVdbPrincipledComponent::execSetEmissionColor },
			{ "SetEmissionStrength", &UVdbPrincipledComponent::execSetEmissionStrength },
			{ "SetStepSize", &UVdbPrincipledComponent::execSetStepSize },
			{ "SetTemperature", &UVdbPrincipledComponent::execSetTemperature },
			{ "SetVdbAssets", &UVdbPrincipledComponent::execSetVdbAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics
	{
		struct VdbPrincipledComponent_eventSetAlbedo_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetAlbedo_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetAlbedo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::VdbPrincipledComponent_eventSetAlbedo_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics
	{
		struct VdbPrincipledComponent_eventSetAnisotropy_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetAnisotropy_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetAnisotropy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::VdbPrincipledComponent_eventSetAnisotropy_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics
	{
		struct VdbPrincipledComponent_eventSetBlackbodyIntensity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetBlackbodyIntensity_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetBlackbodyIntensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::VdbPrincipledComponent_eventSetBlackbodyIntensity_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics
	{
		struct VdbPrincipledComponent_eventSetBlackbodyTint_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetBlackbodyTint_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetBlackbodyTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::VdbPrincipledComponent_eventSetBlackbodyTint_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics
	{
		struct VdbPrincipledComponent_eventSetColor_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetColor_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::VdbPrincipledComponent_eventSetColor_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics
	{
		struct VdbPrincipledComponent_eventSetDensityMultiplier_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetDensityMultiplier_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetDensityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::VdbPrincipledComponent_eventSetDensityMultiplier_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics
	{
		struct VdbPrincipledComponent_eventSetEmissionColor_Parms
		{
			FLinearColor NewValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetEmissionColor_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetEmissionColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::VdbPrincipledComponent_eventSetEmissionColor_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics
	{
		struct VdbPrincipledComponent_eventSetEmissionStrength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetEmissionStrength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetEmissionStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::VdbPrincipledComponent_eventSetEmissionStrength_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics
	{
		struct VdbPrincipledComponent_eventSetStepSize_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetStepSize_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "Comment", "//----------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetStepSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::VdbPrincipledComponent_eventSetStepSize_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics
	{
		struct VdbPrincipledComponent_eventSetTemperature_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetTemperature_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Volume" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetTemperature", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::VdbPrincipledComponent_eventSetTemperature_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics
	{
		struct VdbPrincipledComponent_eventSetVdbAssets_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbPrincipledComponent_eventSetVdbAssets_Parms, Comp), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::NewProp_Comp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "DisplayName", "Set VdbAssetComponent" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbPrincipledComponent, nullptr, "SetVdbAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::VdbPrincipledComponent_eventSetVdbAssets_Parms), Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbPrincipledComponent);
	UClass* Z_Construct_UClass_UVdbPrincipledComponent_NoRegister()
	{
		return UVdbPrincipledComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVdbPrincipledComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRayDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrilinearInterpolation_MetaData[];
#endif
		static void NewProp_TrilinearInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TrilinearInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmissionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackbodyIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlackbodyIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackbodyTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackbodyTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicallyBasedBlackbody_MetaData[];
#endif
		static void NewProp_PhysicallyBasedBlackbody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicallyBasedBlackbody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDirectionalLight_MetaData[];
#endif
		static void NewProp_UseDirectionalLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDirectionalLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEnvironmentLight_MetaData[];
#endif
		static void NewProp_UseEnvironmentLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEnvironmentLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayBounds_MetaData[];
#endif
		static void NewProp_DisplayBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisplayBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbPrincipledComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbPrincipledComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetAlbedo, "SetAlbedo" }, // 1929561381
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetAnisotropy, "SetAnisotropy" }, // 3846684916
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyIntensity, "SetBlackbodyIntensity" }, // 1096110031
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetBlackbodyTint, "SetBlackbodyTint" }, // 1571470586
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetColor, "SetColor" }, // 331368686
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetDensityMultiplier, "SetDensityMultiplier" }, // 2399592954
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionColor, "SetEmissionColor" }, // 1365645789
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetEmissionStrength, "SetEmissionStrength" }, // 2146186836
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetStepSize, "SetStepSize" }, // 416443369
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetTemperature, "SetTemperature" }, // 2434955652
		{ &Z_Construct_UFunction_UVdbPrincipledComponent_SetVdbAssets, "SetVdbAssets" }, // 3831938829
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// If you do not care about Unreal features integration, I recommend using this \"Principled\" component.\n// It allows you to experiment with OpenVDB / NanoVDB rendering, without having to worry \n// about most Unreal compatibilities. \n// \n// These NanoVDBs are rendered at the end of the graphics pipeline, just before the Post Processes. \n// \n// This cannot be used in production, this is only used for research and experimentation purposes. It will \n// probably be incompatible with a lot of other Unreal features (but we don't care).\n// Also note that this component can hack into the Unreal's path-tracer, and render high quality images.\n// We made the delibarate choice to only handle NanoVDB FogVolumes with this component, because they benefit most \n// from experimentation and path-tracers, and are still an active research area (offline and realtime).\n" },
		{ "HideCategories", "Activation Input Physics Materials Collision Lighting LOD HLOD Mobile Navigation VirtualTexture Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VdbPrincipledComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "If you do not care about Unreal features integration, I recommend using this \"Principled\" component.\nIt allows you to experiment with OpenVDB / NanoVDB rendering, without having to worry\nabout most Unreal compatibilities.\n\nThese NanoVDBs are rendered at the end of the graphics pipeline, just before the Post Processes.\n\nThis cannot be used in production, this is only used for research and experimentation purposes. It will\nprobably be incompatible with a lot of other Unreal features (but we don't care).\nAlso note that this component can hack into the Unreal's path-tracer, and render high quality images.\nWe made the delibarate choice to only handle NanoVDB FogVolumes with this component, because they benefit most\nfrom experimentation and path-tracers, and are still an active research area (offline and realtime)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_MaxRayDepth_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "1" },
		{ "Comment", "// Max number of ray bounces\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Max number of ray bounces" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_MaxRayDepth = { "MaxRayDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, MaxRayDepth), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_MaxRayDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_MaxRayDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, SamplesPerPixel), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_SamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// Volume local step size\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Volume local step size" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, StepSize), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Wether to allow colored transmittance during light scattering. More physically based but less artistic-friendly when enabled.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Wether to allow colored transmittance during light scattering. More physically based but less artistic-friendly when enabled." },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->ColoredTransmittance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance = { "ColoredTransmittance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Enable temporal noise (including sub-frame variation for movie render queue)\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Enable temporal noise (including sub-frame variation for movie render queue)" },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->TemporalNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise = { "TemporalNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation_MetaData[] = {
		{ "Category", "Volume|Attributes" },
		{ "Comment", "// Voxel interpolation when sampling VDB data. \"Trilinear\" if true (EXPENSIVE), \"Closest\" if false. Enabled by default when using Path Tracing rendering.\n" },
		{ "DisplayName", "Trilinear Interpolation (SLOW)" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Voxel interpolation when sampling VDB data. \"Trilinear\" if true (EXPENSIVE), \"Closest\" if false. Enabled by default when using Path Tracing rendering." },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->TrilinearInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation = { "TrilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "Comment", "// Volume scattering color. This acts as a multiplier on the scatter color, to texture the color of the volume.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Volume scattering color. This acts as a multiplier on the scatter color, to texture the color of the volume." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "// Density multiplier of the volume, modulating VdbPrincipal values \n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Density multiplier of the volume, modulating VdbPrincipal values" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, DensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Albedo_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Describes the probability of scattering (versus absorption) at a scattering event. Between 0 and 1.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Describes the probability of scattering (versus absorption) at a scattering event. Between 0 and 1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Albedo = { "Albedo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, Albedo), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Albedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Albedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Ambient_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "Comment", "// Ambient contribution to be added to light scattering, usually needed to cheaply boost volume radiance\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Ambient contribution to be added to light scattering, usually needed to cheaply boost volume radiance" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Ambient = { "Ambient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, Ambient), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Ambient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Ambient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Anisotropy_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Backward or forward scattering direction (aka directional bias).\n// The default value of zero gives isotropic scattering so that light is scattered evenly in all directions. \n// Positive values bias the scattering effect forwards, in the direction of the light, while negative values bias the scattering backward, toward the light. \n// This shader uses the Henyey-Greenstein phase function.\n// Note that values very close to 1.0 (above 0.95) or -1.0 (below - 0.95) will produce scattering that is so directional that it will not be very visible from most angles, so such values are not recommended.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Backward or forward scattering direction (aka directional bias).\nThe default value of zero gives isotropic scattering so that light is scattered evenly in all directions.\nPositive values bias the scattering effect forwards, in the direction of the light, while negative values bias the scattering backward, toward the light.\nThis shader uses the Henyey-Greenstein phase function.\nNote that values very close to 1.0 (above 0.95) or -1.0 (below - 0.95) will produce scattering that is so directional that it will not be very visible from most angles, so such values are not recommended." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, Anisotropy), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Anisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Anisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionStrength_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of light to emit.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Amount of light to emit." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionStrength = { "EmissionStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, EmissionStrength), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionColor_MetaData[] = {
		{ "Category", "Volume|Principled Shader" },
		{ "Comment", "// Emission color tint.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Emission color tint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionColor = { "EmissionColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, EmissionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyIntensity_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Blackbody emission for fire. Set to 1 for physically accurate intensity.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Blackbody emission for fire. Set to 1 for physically accurate intensity." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyIntensity = { "BlackbodyIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, BlackbodyIntensity), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyTint_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "Comment", "// Color tint for blackbody emission.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Color tint for blackbody emission." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyTint = { "BlackbodyTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, BlackbodyTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "Comment", "// Use physically based temperature-to-color values, or user-defined color curve.\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Use physically based temperature-to-color values, or user-defined color curve." },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->PhysicallyBasedBlackbody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody = { "PhysicallyBasedBlackbody", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "ClampMax", "6500" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Temperature in kelvin for blackbody emission, higher values emit more.\n" },
		{ "EditCondition", "PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Temperature in kelvin for blackbody emission, higher values emit more." },
		{ "UIMax", "6500" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, Temperature), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "Comment", "// Material is sampling the CurveAtlas only. Cf https://docs.unrealengine.com/5.1/en-US/curve-atlases-in-unreal-engine-materials/\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Material is sampling the CurveAtlas only. Cf https:docs.unrealengine.com/5.1/en-US/curve-atlases-in-unreal-engine-materials/" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurveAtlas = { "BlackBodyCurveAtlas", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, BlackBodyCurveAtlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurveAtlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurve_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "Comment", "// Select Curve from the Curve Atlas. If invalid or if selected curve doesn't belong to the Atlas above, material will default to physically based temperature to color.\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Select Curve from the Curve Atlas. If invalid or if selected curve doesn't belong to the Atlas above, material will default to physically based temperature to color." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurve = { "BlackBodyCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, BlackBodyCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemperatureMultiplier_MetaData[] = {
		{ "Category", "Volume|Principled Shader|Blackbody" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Temperature values should be between 0 and 1. If using color curve (aka color ramp), this can help boost Temperature values.\n" },
		{ "EditCondition", "!PhysicallyBasedBlackbody" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Temperature values should be between 0 and 1. If using color curve (aka color ramp), this can help boost Temperature values." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemperatureMultiplier = { "TemperatureMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbPrincipledComponent, TemperatureMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemperatureMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemperatureMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight_MetaData[] = {
		{ "Category", "Volume|Debug Display" },
		{ "Comment", "//----------------------------------------------------------------------------\n// Debug options (by order of priority)\n//----------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
		{ "ToolTip", "Debug options (by order of priority)" },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->UseDirectionalLight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight = { "UseDirectionalLight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight_MetaData[] = {
		{ "Category", "Volume|Debug Display" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->UseEnvironmentLight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight = { "UseEnvironmentLight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds_MetaData[] = {
		{ "Category", "Volume|Debug Display" },
		{ "ModuleRelativePath", "Private/VdbPrincipledComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds_SetBit(void* Obj)
	{
		((UVdbPrincipledComponent*)Obj)->DisplayBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds = { "DisplayBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbPrincipledComponent), &Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbPrincipledComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_MaxRayDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_ColoredTransmittance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemporalNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TrilinearInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DensityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Albedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Ambient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Anisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_EmissionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackbodyTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_PhysicallyBasedBlackbody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurveAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_BlackBodyCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_TemperatureMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseDirectionalLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_UseEnvironmentLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbPrincipledComponent_Statics::NewProp_DisplayBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbPrincipledComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbPrincipledComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbPrincipledComponent_Statics::ClassParams = {
		&UVdbPrincipledComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbPrincipledComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbPrincipledComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbPrincipledComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbPrincipledComponent()
	{
		if (!Z_Registration_Info_UClass_UVdbPrincipledComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbPrincipledComponent.OuterSingleton, Z_Construct_UClass_UVdbPrincipledComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbPrincipledComponent.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbPrincipledComponent>()
	{
		return UVdbPrincipledComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbPrincipledComponent);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbPrincipledComponent, UVdbPrincipledComponent::StaticClass, TEXT("UVdbPrincipledComponent"), &Z_Registration_Info_UClass_UVdbPrincipledComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbPrincipledComponent), 1666744250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_1789246822(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
