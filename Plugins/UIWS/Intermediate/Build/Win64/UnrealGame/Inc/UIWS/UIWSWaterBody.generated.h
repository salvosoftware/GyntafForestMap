// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UIWS_UIWSWaterBody_generated_h
#error "UIWSWaterBody.generated.h already included, missing '#pragma once' in UIWSWaterBody.h"
#endif
#define UIWS_UIWSWaterBody_generated_h

#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA
#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestPriorityManual); \
	DECLARE_FUNCTION(execApplyForceAtLocation); \
	DECLARE_FUNCTION(execOnWaterOverlap); \
	DECLARE_FUNCTION(execRadialDamageSplashAtlocation); \
	DECLARE_FUNCTION(execPointDamageSplashAtlocation); \
	DECLARE_FUNCTION(execSplashAtlocation);


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_EVENT_PARMS \
	struct UIWSWaterBody_eventForceAppliedAtLocation_Parms \
	{ \
		FVector RippleLoc; \
		float Strength; \
	}; \
	struct UIWSWaterBody_eventOnPointDamageEffect_Parms \
	{ \
		FVector RippleLocation; \
		float RippleStrengthScaled; \
		float RippleSizeScaled; \
		float DamageAmount; \
	}; \
	struct UIWSWaterBody_eventOnRadialDamageEffect_Parms \
	{ \
		FVector RippleLocation; \
		float RippleStrengthScaled; \
		float RippleSizeScaled; \
		float DamageAmount; \
	}; \
	struct UIWSWaterBody_eventSplashedAtLocation_Parms \
	{ \
		FVector SplashLoc; \
		FVector SplashVelocity; \
		float Strength; \
	};


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAUIWSWaterBody(); \
	friend struct Z_Construct_UClass_AUIWSWaterBody_Statics; \
public: \
	DECLARE_CLASS(AUIWSWaterBody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UIWS"), NO_API) \
	DECLARE_SERIALIZER(AUIWSWaterBody)


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUIWSWaterBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUIWSWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public:


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUIWSWaterBody(AUIWSWaterBody&&); \
	NO_API AUIWSWaterBody(const AUIWSWaterBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUIWSWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUIWSWaterBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUIWSWaterBody)


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_24_PROLOG \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_EVENT_PARMS


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_SPARSE_DATA \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIWS_API UClass* StaticClass<class AUIWSWaterBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSWaterBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
