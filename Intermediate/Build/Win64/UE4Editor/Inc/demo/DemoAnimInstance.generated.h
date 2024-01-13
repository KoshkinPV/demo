// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_DemoAnimInstance_generated_h
#error "DemoAnimInstance.generated.h already included, missing '#pragma once' in DemoAnimInstance.h"
#endif
#define DEMO_DemoAnimInstance_generated_h

#define demo_Source_demo_Public_DemoAnimInstance_h_19_SPARSE_DATA
#define demo_Source_demo_Public_DemoAnimInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define demo_Source_demo_Public_DemoAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define demo_Source_demo_Public_DemoAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoAnimInstance(); \
	friend struct Z_Construct_UClass_UDemoAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDemoAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/demo"), NO_API) \
	DECLARE_SERIALIZER(UDemoAnimInstance)


#define demo_Source_demo_Public_DemoAnimInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDemoAnimInstance(); \
	friend struct Z_Construct_UClass_UDemoAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDemoAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/demo"), NO_API) \
	DECLARE_SERIALIZER(UDemoAnimInstance)


#define demo_Source_demo_Public_DemoAnimInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoAnimInstance(UDemoAnimInstance&&); \
	NO_API UDemoAnimInstance(const UDemoAnimInstance&); \
public:


#define demo_Source_demo_Public_DemoAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoAnimInstance(UDemoAnimInstance&&); \
	NO_API UDemoAnimInstance(const UDemoAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoAnimInstance)


#define demo_Source_demo_Public_DemoAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__demoCharacter() { return STRUCT_OFFSET(UDemoAnimInstance, demoCharacter); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UDemoAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__bIsInAir() { return STRUCT_OFFSET(UDemoAnimInstance, bIsInAir); }


#define demo_Source_demo_Public_DemoAnimInstance_h_16_PROLOG
#define demo_Source_demo_Public_DemoAnimInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_Public_DemoAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_Public_DemoAnimInstance_h_19_SPARSE_DATA \
	demo_Source_demo_Public_DemoAnimInstance_h_19_RPC_WRAPPERS \
	demo_Source_demo_Public_DemoAnimInstance_h_19_INCLASS \
	demo_Source_demo_Public_DemoAnimInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define demo_Source_demo_Public_DemoAnimInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_Public_DemoAnimInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_Public_DemoAnimInstance_h_19_SPARSE_DATA \
	demo_Source_demo_Public_DemoAnimInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	demo_Source_demo_Public_DemoAnimInstance_h_19_INCLASS_NO_PURE_DECLS \
	demo_Source_demo_Public_DemoAnimInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class UDemoAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID demo_Source_demo_Public_DemoAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
