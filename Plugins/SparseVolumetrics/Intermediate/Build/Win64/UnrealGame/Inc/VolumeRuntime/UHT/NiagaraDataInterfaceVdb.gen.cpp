// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/Niagara/NiagaraDataInterfaceVdb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVdb() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_VolumeRuntime();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVdb();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVdb_NoRegister();
	VOLUMERUNTIME_API UClass* Z_Construct_UClass_UVdbVolumeStatic_NoRegister();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVdbLevelSetHit();
	VOLUMERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FVdbRay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VdbRay;
class UScriptStruct* FVdbRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VdbRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VdbRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVdbRay, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("VdbRay"));
	}
	return Z_Registration_Info_UScriptStruct_VdbRay.OuterSingleton;
}
template<> VOLUMERUNTIME_API UScriptStruct* StaticStruct<FVdbRay>()
{
	return FVdbRay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVdbRay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tmin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tmin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tmax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tmax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbRay_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVdbRay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVdbRay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Ray" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbRay, Origin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmin_MetaData[] = {
		{ "Category", "Ray" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmin = { "Tmin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbRay, Tmin), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Ray" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbRay, Direction), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmax_MetaData[] = {
		{ "Category", "Ray" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmax = { "Tmax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbRay, Tmax), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVdbRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbRay_Statics::NewProp_Tmax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVdbRay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		&NewStructOps,
		"VdbRay",
		sizeof(FVdbRay),
		alignof(FVdbRay),
		Z_Construct_UScriptStruct_FVdbRay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbRay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbRay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVdbRay()
	{
		if (!Z_Registration_Info_UScriptStruct_VdbRay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VdbRay.InnerSingleton, Z_Construct_UScriptStruct_FVdbRay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VdbRay.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VdbLevelSetHit;
class UScriptStruct* FVdbLevelSetHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VdbLevelSetHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VdbLevelSetHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVdbLevelSetHit, Z_Construct_UPackage__Script_VolumeRuntime(), TEXT("VdbLevelSetHit"));
	}
	return Z_Registration_Info_UScriptStruct_VdbLevelSetHit.OuterSingleton;
}
template<> VOLUMERUNTIME_API UScriptStruct* StaticStruct<FVdbLevelSetHit>()
{
	return FVdbLevelSetHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_v0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_v0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_i_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_j_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_j;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_k_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_k;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVdbLevelSetHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_t_MetaData[] = {
		{ "Category", "LevelSetHit" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbLevelSetHit, t), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_t_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_t_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_v0_MetaData[] = {
		{ "Category", "LevelSetHit" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_v0 = { "v0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbLevelSetHit, v0), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_v0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_v0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_i_MetaData[] = {
		{ "Category", "LevelSetHit" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbLevelSetHit, i), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_i_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_i_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_j_MetaData[] = {
		{ "Category", "LevelSetHit" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbLevelSetHit, j), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_j_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_j_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_k_MetaData[] = {
		{ "Category", "LevelSetHit" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVdbLevelSetHit, k), METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_k_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_k_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_v0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_j,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewProp_k,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
		nullptr,
		&NewStructOps,
		"VdbLevelSetHit",
		sizeof(FVdbLevelSetHit),
		alignof(FVdbLevelSetHit),
		Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVdbLevelSetHit()
	{
		if (!Z_Registration_Info_UScriptStruct_VdbLevelSetHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VdbLevelSetHit.InnerSingleton, Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VdbLevelSetHit.InnerSingleton;
	}
	void UNiagaraDataInterfaceVdb::StaticRegisterNativesUNiagaraDataInterfaceVdb()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVdb);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVdb_NoRegister()
	{
		return UNiagaraDataInterfaceVdb::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VdbVolumeStatic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VdbVolumeStatic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VolumeRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::Class_MetaDataParams[] = {
		{ "Category", "SparseVolumetrics" },
		{ "DisplayName", "Volume VDB" },
		{ "IncludePath", "Niagara/NiagaraDataInterfaceVdb.h" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::NewProp_VdbVolumeStatic_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/Niagara/NiagaraDataInterfaceVdb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::NewProp_VdbVolumeStatic = { "VdbVolumeStatic", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVdb, VdbVolumeStatic), Z_Construct_UClass_UVdbVolumeStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::NewProp_VdbVolumeStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::NewProp_VdbVolumeStatic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::NewProp_VdbVolumeStatic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVdb>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::ClassParams = {
		&UNiagaraDataInterfaceVdb::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVdb()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVdb.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVdb.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVdb_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceVdb.OuterSingleton;
	}
	template<> VOLUMERUNTIME_API UClass* StaticClass<UNiagaraDataInterfaceVdb>()
	{
		return UNiagaraDataInterfaceVdb::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVdb);
	UNiagaraDataInterfaceVdb::~UNiagaraDataInterfaceVdb() {}
	struct Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ScriptStructInfo[] = {
		{ FVdbRay::StaticStruct, Z_Construct_UScriptStruct_FVdbRay_Statics::NewStructOps, TEXT("VdbRay"), &Z_Registration_Info_UScriptStruct_VdbRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVdbRay), 2590930922U) },
		{ FVdbLevelSetHit::StaticStruct, Z_Construct_UScriptStruct_FVdbLevelSetHit_Statics::NewStructOps, TEXT("VdbLevelSetHit"), &Z_Registration_Info_UScriptStruct_VdbLevelSetHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVdbLevelSetHit), 2841236444U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVdb, UNiagaraDataInterfaceVdb::StaticClass, TEXT("UNiagaraDataInterfaceVdb"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVdb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVdb), 3910671939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_1583971034(TEXT("/Script/VolumeRuntime"),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_Niagara_NiagaraDataInterfaceVdb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
