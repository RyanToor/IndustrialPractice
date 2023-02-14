// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VdbAssetComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOLUMERUNTIME_VdbAssetComponent_generated_h
#error "VdbAssetComponent.generated.h already included, missing '#pragma once' in VdbAssetComponent.h"
#endif
#define VOLUMERUNTIME_VdbAssetComponent_generated_h

#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_27_DELEGATE \
struct _Script_VolumeRuntime_eventOnVdbChanged_Parms \
{ \
	int32 FrameIndex; \
}; \
static inline void FOnVdbChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVdbChanged, int32 FrameIndex) \
{ \
	_Script_VolumeRuntime_eventOnVdbChanged_Parms Parms; \
	Parms.FrameIndex=FrameIndex; \
	OnVdbChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_SPARSE_DATA
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVolumeUvScale); \
	DECLARE_FUNCTION(execGetVolumeOffset); \
	DECLARE_FUNCTION(execGetVolumeSize);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVolumeUvScale); \
	DECLARE_FUNCTION(execGetVolumeOffset); \
	DECLARE_FUNCTION(execGetVolumeSize);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_ACCESSORS
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVdbAssetComponent(); \
	friend struct Z_Construct_UClass_UVdbAssetComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbAssetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbAssetComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUVdbAssetComponent(); \
	friend struct Z_Construct_UClass_UVdbAssetComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbAssetComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbAssetComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbAssetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbAssetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbAssetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbAssetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbAssetComponent(UVdbAssetComponent&&); \
	NO_API UVdbAssetComponent(const UVdbAssetComponent&); \
public:


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbAssetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbAssetComponent(UVdbAssetComponent&&); \
	NO_API UVdbAssetComponent(const UVdbAssetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbAssetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbAssetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbAssetComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_30_PROLOG
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_RPC_WRAPPERS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_INCLASS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VdbAssetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOLUMERUNTIME_API UClass* StaticClass<class UVdbAssetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbAssetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
