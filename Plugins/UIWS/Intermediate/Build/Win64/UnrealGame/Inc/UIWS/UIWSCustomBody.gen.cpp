// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIWS/Public/UIWSCustomBody.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIWSCustomBody() {}
// Cross Module References
	UIWS_API UClass* Z_Construct_UClass_AUIWSCustomBody_NoRegister();
	UIWS_API UClass* Z_Construct_UClass_AUIWSCustomBody();
	UIWS_API UClass* Z_Construct_UClass_AUIWSWaterBody();
	UPackage* Z_Construct_UPackage__Script_UIWS();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AUIWSCustomBody::StaticRegisterNativesAUIWSCustomBody()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUIWSCustomBody);
	UClass* Z_Construct_UClass_AUIWSCustomBody_NoRegister()
	{
		return AUIWSCustomBody::StaticClass();
	}
	struct Z_Construct_UClass_AUIWSCustomBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomWaterVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomWaterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowCameraUnder_MetaData[];
#endif
		static void NewProp_AllowCameraUnder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowCameraUnder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIWSCustomBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUIWSWaterBody,
		(UObject* (*)())Z_Construct_UPackage__Script_UIWS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Cooking Input Replication Actor Tick" },
		{ "IncludePath", "UIWSCustomBody.h" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh = { "CustomStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp = { "CustomMeshComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume = { "CustomWaterVolume", nullptr, (EPropertyFlags)0x00200c000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIWSCustomBody, CustomWaterVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData[] = {
		{ "Category", "UIWS Custom Body" },
		{ "ModuleRelativePath", "Public/UIWSCustomBody.h" },
	};
#endif
	void Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_SetBit(void* Obj)
	{
		((AUIWSCustomBody*)Obj)->AllowCameraUnder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder = { "AllowCameraUnder", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIWSCustomBody), &Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_CustomWaterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIWSCustomBody_Statics::NewProp_AllowCameraUnder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIWSCustomBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIWSCustomBody>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIWSCustomBody_Statics::ClassParams = {
		&AUIWSCustomBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIWSCustomBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIWSCustomBody()
	{
		if (!Z_Registration_Info_UClass_AUIWSCustomBody.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIWSCustomBody.OuterSingleton, Z_Construct_UClass_AUIWSCustomBody_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUIWSCustomBody.OuterSingleton;
	}
	template<> UIWS_API UClass* StaticClass<AUIWSCustomBody>()
	{
		return AUIWSCustomBody::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIWSCustomBody);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCustomBody_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCustomBody_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUIWSCustomBody, AUIWSCustomBody::StaticClass, TEXT("AUIWSCustomBody"), &Z_Registration_Info_UClass_AUIWSCustomBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIWSCustomBody), 3150452012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCustomBody_h_3650956447(TEXT("/Script/UIWS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCustomBody_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UIWS_Source_UIWS_Public_UIWSCustomBody_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
