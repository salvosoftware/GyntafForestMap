// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSRiver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSRiver() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSRiver_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSRiver();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AUIWSRiver::StaticRegisterNativesAUIWSRiver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUIWSRiver);
	UClass* Z_Construct_UClass_AUIWSRiver_NoRegister()
	{
		return AUIWSRiver::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSRiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowCameraUnder_MetaData[];
#endif
		static void NewProp_AllowCameraUnder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowCameraUnder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSRiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUIWSWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Cooking Input Replication Actor Tick" },
		{ "IncludePath", "UIWSRiver.h" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData[] = {
		{ "Category", "UIWSRiver" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x001004000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSRiver, SplineComp), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData[] = {
		{ "Category", "UIWSRiver" },
		{ "ModuleRelativePath", "Public/UIWSRiver.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_SetBit(void* Obj)
	{
		((AUIWSRiver*)Obj)->AllowCameraUnder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder = { "AllowCameraUnder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSRiver), &Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSRiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSRiver_Statics::NewProp_SplineComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSRiver_Statics::NewProp_AllowCameraUnder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSRiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSRiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIWSRiver_Statics::ClassParams = {
		&AUIWSRiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSRiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSRiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSRiver()
	{
		if (!Z_Registration_Info_UClass_AUIWSRiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIWSRiver.OuterSingleton, Z_Construct_UClass_AUIWSRiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUIWSRiver.OuterSingleton;
	}
	template<> UIWS_API UClass* StaticClass<AUIWSRiver>()
	{
		return AUIWSRiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSRiver);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSRiver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSRiver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUIWSRiver, AUIWSRiver::StaticClass, TEXT("AUIWSRiver"), &Z_Registration_Info_UClass_AUIWSRiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIWSRiver), 1125605196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSRiver_h_4195885968(TEXT("/Script/UIWS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSRiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSRiver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
