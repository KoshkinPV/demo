// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_demoCharacter_generated_h
#error "demoCharacter.generated.h already included, missing '#pragma once' in demoCharacter.h"
#endif
#define DEMO_demoCharacter_generated_h

#define demo_Source_demo_demoCharacter_h_12_SPARSE_DATA
#define demo_Source_demo_demoCharacter_h_12_RPC_WRAPPERS
#define demo_Source_demo_demoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define demo_Source_demo_demoCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdemoCharacter(); \
	friend struct Z_Construct_UClass_AdemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AdemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/demo"), NO_API) \
	DECLARE_SERIALIZER(AdemoCharacter)


#define demo_Source_demo_demoCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAdemoCharacter(); \
	friend struct Z_Construct_UClass_AdemoCharacter_Statics; \
public: \
	DECLARE_CLASS(AdemoCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/demo"), NO_API) \
	DECLARE_SERIALIZER(AdemoCharacter)


#define demo_Source_demo_demoCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AdemoCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AdemoCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AdemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdemoCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AdemoCharacter(AdemoCharacter&&); \
	NO_API AdemoCharacter(const AdemoCharacter&); \
public:


#define demo_Source_demo_demoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AdemoCharacter(AdemoCharacter&&); \
	NO_API AdemoCharacter(const AdemoCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AdemoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdemoCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AdemoCharacter)


#define demo_Source_demo_demoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AdemoCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AdemoCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__DyingAnimation() { return STRUCT_OFFSET(AdemoCharacter, DyingAnimation); } \
	FORCEINLINE static uint32 __PPO__AttackAnimation() { return STRUCT_OFFSET(AdemoCharacter, AttackAnimation); } \
	FORCEINLINE static uint32 __PPO__bIsPunching() { return STRUCT_OFFSET(AdemoCharacter, bIsPunching); } \
	FORCEINLINE static uint32 __PPO__bIsSprinting() { return STRUCT_OFFSET(AdemoCharacter, bIsSprinting); } \
	FORCEINLINE static uint32 __PPO__WalkSpeed() { return STRUCT_OFFSET(AdemoCharacter, WalkSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(AdemoCharacter, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__RightFistCollision() { return STRUCT_OFFSET(AdemoCharacter, RightFistCollision); }


#define demo_Source_demo_demoCharacter_h_9_PROLOG
#define demo_Source_demo_demoCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_demoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_demoCharacter_h_12_SPARSE_DATA \
	demo_Source_demo_demoCharacter_h_12_RPC_WRAPPERS \
	demo_Source_demo_demoCharacter_h_12_INCLASS \
	demo_Source_demo_demoCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define demo_Source_demo_demoCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_demoCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_demoCharacter_h_12_SPARSE_DATA \
	demo_Source_demo_demoCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	demo_Source_demo_demoCharacter_h_12_INCLASS_NO_PURE_DECLS \
	demo_Source_demo_demoCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AdemoCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID demo_Source_demo_demoCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
