// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbSequenceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbSequenceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbAssetComponent_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister();
	VOLUMESTREAMER_API UEnum* Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode();
// End Cross Module References
	DEFINE_FUNCTION(UVdbSequenceComponent::execTickAtThisTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bInIsRunning);
		P_GET_UBOOL(Z_Param_bInBackwards);
		P_GET_UBOOL(Z_Param_bInIsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAtThisTime(Z_Param_Time,Z_Param_bInIsRunning,Z_Param_bInBackwards,Z_Param_bInIsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbSequenceComponent::execStopAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbSequenceComponent::execPauseAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbSequenceComponent::execPlayAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbSequenceComponent::execSetVdbAssets)
	{
		P_GET_OBJECT(UVdbAssetComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVdbAssets(Z_Param_Component);
		P_NATIVE_END;
	}
	void UVdbSequenceComponent::StaticRegisterNativesUVdbSequenceComponent()
	{
		UClass* Class = UVdbSequenceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseAnimation", &UVdbSequenceComponent::execPauseAnimation },
			{ "PlayAnimation", &UVdbSequenceComponent::execPlayAnimation },
			{ "SetVdbAssets", &UVdbSequenceComponent::execSetVdbAssets },
			{ "StopAnimation", &UVdbSequenceComponent::execStopAnimation },
			{ "TickAtThisTime", &UVdbSequenceComponent::execTickAtThisTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|VdbSequence" },
		{ "Comment", "/** Start playback of animation */" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Start playback of animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbSequenceComponent, nullptr, "PauseAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|VdbSequence" },
		{ "Comment", "/** Start playback of animation */" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Start playback of animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbSequenceComponent, nullptr, "PlayAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics
	{
		struct VdbSequenceComponent_eventSetVdbAssets_Parms
		{
			UVdbAssetComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbSequenceComponent_eventSetVdbAssets_Parms, Component), Z_Construct_UClass_UVdbAssetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|VdbSequence" },
		{ "DisplayName", "Set VdbAssetComponent" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbSequenceComponent, nullptr, "SetVdbAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::VdbSequenceComponent_eventSetVdbAssets_Parms), Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|VdbSequence" },
		{ "Comment", "/** Stop playback of animation */" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Stop playback of animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbSequenceComponent, nullptr, "StopAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics
	{
		struct VdbSequenceComponent_eventTickAtThisTime_Parms
		{
			float Time;
			bool bInIsRunning;
			bool bInBackwards;
			bool bInIsLooping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bInIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRunning;
		static void NewProp_bInBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBackwards;
		static void NewProp_bInIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VdbSequenceComponent_eventTickAtThisTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_Time_MetaData)) };
	void Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit(void* Obj)
	{
		((VdbSequenceComponent_eventTickAtThisTime_Parms*)Obj)->bInIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsRunning = { "bInIsRunning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VdbSequenceComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit(void* Obj)
	{
		((VdbSequenceComponent_eventTickAtThisTime_Parms*)Obj)->bInBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInBackwards = { "bInBackwards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VdbSequenceComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit(void* Obj)
	{
		((VdbSequenceComponent_eventTickAtThisTime_Parms*)Obj)->bInIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsLooping = { "bInIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VdbSequenceComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::NewProp_bInIsLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|VdbSequence" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbSequenceComponent, nullptr, "TickAtThisTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::VdbSequenceComponent_eventTickAtThisTime_Parms), Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbSequenceComponent);
	UClass* Z_Construct_UClass_UVdbSequenceComponent_NoRegister()
	{
		return UVdbSequenceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVdbSequenceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Autoplay_MetaData[];
#endif
		static void NewProp_Autoplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Autoplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Looping_MetaData[];
#endif
		static void NewProp_Looping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Looping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRelative_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetRelative;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPlayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbSequenceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbSequenceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbSequenceComponent_PauseAnimation, "PauseAnimation" }, // 2389199724
		{ &Z_Construct_UFunction_UVdbSequenceComponent_PlayAnimation, "PlayAnimation" }, // 3641790526
		{ &Z_Construct_UFunction_UVdbSequenceComponent_SetVdbAssets, "SetVdbAssets" }, // 3872122524
		{ &Z_Construct_UFunction_UVdbSequenceComponent_StopAnimation, "StopAnimation" }, // 3823134259
		{ &Z_Construct_UFunction_UVdbSequenceComponent_TickAtThisTime, "TickAtThisTime" }, // 392263229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// Handles frame by frame animation of NanoVDB assets of the linked VdbAssetComponent\n" },
		{ "HideCategories", "Activation Collision Cooking HLOD Navigation Mobility Object Physics VirtualTexture" },
		{ "IncludePath", "VdbSequenceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Handles frame by frame animation of NanoVDB assets of the linked VdbAssetComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "Comment", "// Play Sequence / Animation in game. If not, let Sequencer control this animation.\n" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Play Sequence / Animation in game. If not, let Sequencer control this animation." },
	};
#endif
	void Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay_SetBit(void* Obj)
	{
		((UVdbSequenceComponent*)Obj)->Autoplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay = { "Autoplay", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbSequenceComponent), &Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "Comment", "// Is animation looping.\n" },
		{ "EditCondition", "Autoplay" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Is animation looping." },
	};
#endif
	void Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((UVdbSequenceComponent*)Obj)->Looping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVdbSequenceComponent), &Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "ClampMin", "0.000100" },
		{ "Comment", "// Speed at which the animation is playing\n" },
		{ "EditCondition", "Autoplay" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Speed at which the animation is playing" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbSequenceComponent, PlaybackSpeed), METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_PlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "Comment", "// Duration of the sequence\n" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Duration of the sequence" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbSequenceComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_OffsetRelative_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Sequence start offset, in relative range [0, 1] where 0 represents the start and 1 the end of the sequence.\n" },
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
		{ "ToolTip", "Sequence start offset, in relative range [0, 1] where 0 represents the start and 1 the end of the sequence." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_OffsetRelative = { "OffsetRelative", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbSequenceComponent, OffsetRelative), METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_OffsetRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_OffsetRelative_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode = { "CurrentPlayMode", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbSequenceComponent, CurrentPlayMode), Z_Construct_UEnum_VolumeStreamer_EVolumePlayMode, METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode_MetaData)) }; // 3370391597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volume|Playback" },
		{ "ModuleRelativePath", "Public/VdbSequenceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbSequenceComponent, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_ElapsedTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbSequenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Autoplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Looping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_OffsetRelative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_CurrentPlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbSequenceComponent_Statics::NewProp_ElapsedTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbSequenceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbSequenceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbSequenceComponent_Statics::ClassParams = {
		&UVdbSequenceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbSequenceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbSequenceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbSequenceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbSequenceComponent()
	{
		if (!Z_Registration_Info_UClass_UVdbSequenceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbSequenceComponent.OuterSingleton, Z_Construct_UClass_UVdbSequenceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbSequenceComponent.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbSequenceComponent>()
	{
		return UVdbSequenceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbSequenceComponent);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbSequenceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbSequenceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbSequenceComponent, UVdbSequenceComponent::StaticClass, TEXT("UVdbSequenceComponent"), &Z_Registration_Info_UClass_UVdbSequenceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbSequenceComponent), 2090996350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbSequenceComponent_h_45718489(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbSequenceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbSequenceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
