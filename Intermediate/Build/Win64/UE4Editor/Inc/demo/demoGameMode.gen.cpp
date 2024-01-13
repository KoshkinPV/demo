// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "demo/demoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedemoGameMode() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_AdemoGameMode_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_AdemoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_demo();
// End Cross Module References
	void AdemoGameMode::StaticRegisterNativesAdemoGameMode()
	{
	}
	UClass* Z_Construct_UClass_AdemoGameMode_NoRegister()
	{
		return AdemoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AdemoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AdemoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_demo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AdemoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "demoGameMode.h" },
		{ "ModuleRelativePath", "demoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AdemoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AdemoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AdemoGameMode_Statics::ClassParams = {
		&AdemoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AdemoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AdemoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AdemoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AdemoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AdemoGameMode, 1220972932);
	template<> DEMO_API UClass* StaticClass<AdemoGameMode>()
	{
		return AdemoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AdemoGameMode(Z_Construct_UClass_AdemoGameMode, &AdemoGameMode::StaticClass, TEXT("/Script/demo"), TEXT("AdemoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AdemoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
