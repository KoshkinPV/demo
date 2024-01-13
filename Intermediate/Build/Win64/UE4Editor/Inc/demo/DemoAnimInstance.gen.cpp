// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "demo/Public/DemoAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoAnimInstance() {}
// Cross Module References
	DEMO_API UClass* Z_Construct_UClass_UDemoAnimInstance_NoRegister();
	DEMO_API UClass* Z_Construct_UClass_UDemoAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_demo();
	DEMO_API UClass* Z_Construct_UClass_AdemoCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemoAnimInstance::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UDemoAnimInstance::StaticRegisterNativesUDemoAnimInstance()
	{
		UClass* Class = UDemoAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UDemoAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics
	{
		struct DemoAnimInstance_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemoAnimInstance_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Used to animation blueprint\n" },
		{ "ModuleRelativePath", "Public/DemoAnimInstance.h" },
		{ "ToolTip", "Used to animation blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(DemoAnimInstance_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemoAnimInstance_NoRegister()
	{
		return UDemoAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDemoAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_demoCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_demoCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_demo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemoAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemoAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2076693762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DemoAnimInstance.h" },
		{ "ModuleRelativePath", "Public/DemoAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_demoCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Create variable to have reference to demoCharacter\n" },
		{ "ModuleRelativePath", "Public/DemoAnimInstance.h" },
		{ "ToolTip", "Create variable to have reference to demoCharacter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_demoCharacter = { "demoCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoAnimInstance, demoCharacter), Z_Construct_UClass_AdemoCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_demoCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_demoCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// Speed of DemoCharacter\n" },
		{ "ModuleRelativePath", "Public/DemoAnimInstance.h" },
		{ "ToolTip", "Speed of DemoCharacter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "// True or false if player in air\n" },
		{ "ModuleRelativePath", "Public/DemoAnimInstance.h" },
		{ "ToolTip", "True or false if player in air" },
	};
#endif
	void Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UDemoAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDemoAnimInstance), &Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_demoCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoAnimInstance_Statics::NewProp_bIsInAir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoAnimInstance_Statics::ClassParams = {
		&UDemoAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDemoAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDemoAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoAnimInstance, 3807922382);
	template<> DEMO_API UClass* StaticClass<UDemoAnimInstance>()
	{
		return UDemoAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoAnimInstance(Z_Construct_UClass_UDemoAnimInstance, &UDemoAnimInstance::StaticClass, TEXT("/Script/demo"), TEXT("UDemoAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
