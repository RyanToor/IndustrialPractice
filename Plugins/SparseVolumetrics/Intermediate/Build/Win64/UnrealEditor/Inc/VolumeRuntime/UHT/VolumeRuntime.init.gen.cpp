// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeRuntime_init() {}
	VOLUMERUNTIME_API UFunction* Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VolumeRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VolumeRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_VolumeRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VolumeRuntime_OnVdbChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VolumeRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDA6686FF,
				0xFF8AF1B9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VolumeRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VolumeRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VolumeRuntime(Z_Construct_UPackage__Script_VolumeRuntime, TEXT("/Script/VolumeRuntime"), Z_Registration_Info_UPackage__Script_VolumeRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDA6686FF, 0xFF8AF1B9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
