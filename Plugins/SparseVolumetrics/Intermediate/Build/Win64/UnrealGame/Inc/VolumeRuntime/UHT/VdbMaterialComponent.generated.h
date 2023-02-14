// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VdbMaterialComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVdbAssetComponent;
#ifdef VOLUMERUNTIME_VdbMaterialComponent_generated_h
#error "VdbMaterialComponent.generated.h already included, missing '#pragma once' in VdbMaterialComponent.h"
#endif
#define VOLUMERUNTIME_VdbMaterialComponent_generated_h

#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_SPARSE_DATA
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVdbAssets); \
	DECLARE_FUNCTION(execSetBlackbodyIntensity); \
	DECLARE_FUNCTION(execSetBlackbodyTemperature); \
	DECLARE_FUNCTION(execSetAnisotropy); \
	DECLARE_FUNCTION(execSetAmbient); \
	DECLARE_FUNCTION(execSetAlbedo); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetVolumePadding); \
	DECLARE_FUNCTION(execSetJittering); \
	DECLARE_FUNCTION(execSetShadowStepSizeMultiplier); \
	DECLARE_FUNCTION(execSetLocalStepSize);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVdbAssets); \
	DECLARE_FUNCTION(execSetBlackbodyIntensity); \
	DECLARE_FUNCTION(execSetBlackbodyTemperature); \
	DECLARE_FUNCTION(execSetAnisotropy); \
	DECLARE_FUNCTION(execSetAmbient); \
	DECLARE_FUNCTION(execSetAlbedo); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetVolumePadding); \
	DECLARE_FUNCTION(execSetJittering); \
	DECLARE_FUNCTION(execSetShadowStepSizeMultiplier); \
	DECLARE_FUNCTION(execSetLocalStepSize);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_ACCESSORS
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVdbMaterialComponent(); \
	friend struct Z_Construct_UClass_UVdbMaterialComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbMaterialComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbMaterialComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUVdbMaterialComponent(); \
	friend struct Z_Construct_UClass_UVdbMaterialComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbMaterialComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbMaterialComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbMaterialComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbMaterialComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbMaterialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbMaterialComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbMaterialComponent(UVdbMaterialComponent&&); \
	NO_API UVdbMaterialComponent(const UVdbMaterialComponent&); \
public:


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbMaterialComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbMaterialComponent(UVdbMaterialComponent&&); \
	NO_API UVdbMaterialComponent(const UVdbMaterialComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbMaterialComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbMaterialComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbMaterialComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_25_PROLOG
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_RPC_WRAPPERS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_INCLASS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VdbMaterialComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOLUMERUNTIME_API UClass* StaticClass<class UVdbMaterialComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Public_VdbMaterialComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
