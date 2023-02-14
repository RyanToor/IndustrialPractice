// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/VdbVolumeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVdbVolumeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeBase();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeBase_NoRegister();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EQuantizationType();
	VOLUMERUNTIME_API UEnum* Z_Construct_UEnum_VolumeRuntime_EVdbClass();
// End Cross Module References
	DEFINE_FUNCTION(UVdbVolumeBase::execIsVectorGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVectorGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVdbVolumeBase::execIsSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSequence();
		P_NATIVE_END;
	}
	void UVdbVolumeBase::StaticRegisterNativesUVdbVolumeBase()
	{
		UClass* Class = UVdbVolumeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSequence", &UVdbVolumeBase::execIsSequence },
			{ "IsVectorGrid", &UVdbVolumeBase::execIsVectorGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics
	{
		struct VdbVolumeBase_eventIsSequence_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VdbVolumeBase_eventIsSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VdbVolumeBase_eventIsSequence_Parms), &Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbVolumeBase, nullptr, "IsSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::VdbVolumeBase_eventIsSequence_Parms), Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbVolumeBase_IsSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbVolumeBase_IsSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics
	{
		struct VdbVolumeBase_eventIsVectorGrid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VdbVolumeBase_eventIsVectorGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VdbVolumeBase_eventIsVectorGrid_Parms), &Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVdbVolumeBase, nullptr, "IsVectorGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::VdbVolumeBase_eventIsVectorGrid_Parms), Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVdbVolumeBase);
	UClass* Z_Construct_UClass_UVdbVolumeBase_NoRegister()
	{
		return UVdbVolumeBase::StaticClass();
	}
	struct Z_Construct_UClass_UVdbVolumeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VdbClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VdbClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VdbClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GridName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsageStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryUsageStr;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargestVolume_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LargestVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_MemoryUsage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Quantization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Quantization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVdbVolumeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVdbVolumeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVdbVolumeBase_IsSequence, "IsSequence" }, // 3821324684
		{ &Z_Construct_UFunction_UVdbVolumeBase_IsVectorGrid, "IsVectorGrid" }, // 3307998738
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base interface for NanoVDB file containers\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VdbVolumeBase.h" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
		{ "ToolTip", "Base interface for NanoVDB file containers" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass = { "VdbClass", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, VdbClass), Z_Construct_UEnum_VolumeRuntime_EVdbClass, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass_MetaData)) }; // 4284313104
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x002608080008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_GridName_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, GridName), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_GridName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_GridName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, Class), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, DataType), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_DataType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsageStr_MetaData[] = {
		{ "Category", "Properties" },
		{ "DisplayName", "Total Memory" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsageStr = { "MemoryUsageStr", nullptr, (EPropertyFlags)0x0020080800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, MemoryUsageStr), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsageStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsageStr_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_LargestVolume_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_LargestVolume = { "LargestVolume", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, LargestVolume), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_LargestVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_LargestVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, VoxelSize), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsage_MetaData[] = {
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsage = { "MemoryUsage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, MemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/VdbVolumeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization = { "Quantization", nullptr, (EPropertyFlags)0x00200c0000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVdbVolumeBase, Quantization), Z_Construct_UEnum_VolumeRuntime_EQuantizationType, METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization_MetaData)) }; // 4005535642
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVdbVolumeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VdbClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_GridName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsageStr,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_LargestVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_VoxelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_MemoryUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVdbVolumeBase_Statics::NewProp_Quantization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVdbVolumeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVdbVolumeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVdbVolumeBase_Statics::ClassParams = {
		&UVdbVolumeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVdbVolumeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVdbVolumeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVdbVolumeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVdbVolumeBase()
	{
		if (!Z_Registration_Info_UClass_UVdbVolumeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVdbVolumeBase.OuterSingleton, Z_Construct_UClass_UVdbVolumeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVdbVolumeBase.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UVdbVolumeBase>()
	{
		return UVdbVolumeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVdbVolumeBase);
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVdbVolumeBase, UVdbVolumeBase::StaticClass, TEXT("UVdbVolumeBase"), &Z_Registration_Info_UClass_UVdbVolumeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVdbVolumeBase), 3751376836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeBase_h_3683271006(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbVolumeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
