// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VdbPrincipledComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVdbAssetComponent;
struct FLinearColor;
#ifdef VOLUMERUNTIME_VdbPrincipledComponent_generated_h
#error "VdbPrincipledComponent.generated.h already included, missing '#pragma once' in VdbPrincipledComponent.h"
#endif
#define VOLUMERUNTIME_VdbPrincipledComponent_generated_h

#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_SPARSE_DATA
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetBlackbodyTint); \
	DECLARE_FUNCTION(execSetBlackbodyIntensity); \
	DECLARE_FUNCTION(execSetEmissionColor); \
	DECLARE_FUNCTION(execSetEmissionStrength); \
	DECLARE_FUNCTION(execSetAnisotropy); \
	DECLARE_FUNCTION(execSetAlbedo); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetVdbAssets);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetBlackbodyTint); \
	DECLARE_FUNCTION(execSetBlackbodyIntensity); \
	DECLARE_FUNCTION(execSetEmissionColor); \
	DECLARE_FUNCTION(execSetEmissionStrength); \
	DECLARE_FUNCTION(execSetAnisotropy); \
	DECLARE_FUNCTION(execSetAlbedo); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetVdbAssets);


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_ACCESSORS
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVdbPrincipledComponent(); \
	friend struct Z_Construct_UClass_UVdbPrincipledComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbPrincipledComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbPrincipledComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUVdbPrincipledComponent(); \
	friend struct Z_Construct_UClass_UVdbPrincipledComponent_Statics; \
public: \
	DECLARE_CLASS(UVdbPrincipledComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VolumeRuntime"), NO_API) \
	DECLARE_SERIALIZER(UVdbPrincipledComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbPrincipledComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbPrincipledComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbPrincipledComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbPrincipledComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbPrincipledComponent(UVdbPrincipledComponent&&); \
	NO_API UVdbPrincipledComponent(const UVdbPrincipledComponent&); \
public:


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVdbPrincipledComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVdbPrincipledComponent(UVdbPrincipledComponent&&); \
	NO_API UVdbPrincipledComponent(const UVdbPrincipledComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVdbPrincipledComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVdbPrincipledComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVdbPrincipledComponent)


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_36_PROLOG
#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_RPC_WRAPPERS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_INCLASS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_SPARSE_DATA \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_ACCESSORS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VdbPrincipledComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOLUMERUNTIME_API UClass* StaticClass<class UVdbPrincipledComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Proj_Packages_SparseVolumetrics_ue5_1_1_0_6_5_SparseVolumetrics_HostProject_Plugins_SparseVolumetrics_Source_Runtime_Private_VdbPrincipledComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
