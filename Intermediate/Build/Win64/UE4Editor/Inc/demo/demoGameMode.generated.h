// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_demoGameMode_generated_h
#error "demoGameMode.generated.h already included, missing '#pragma once' in demoGameMode.h"
#endif
#define DEMO_demoGameMode_generated_h

#define demo_Source_demo_demoGameMode_h_12_SPARSE_DATA
#define demo_Source_demo_demoGameMode_h_12_RPC_WRAPPERS
#define demo_Source_demo_demoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define demo_Source_demo_demoGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAdemoGameMode(); \
	friend struct Z_Construct_UClass_AdemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AdemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/demo"), DEMO_API) \
	DECLARE_SERIALIZER(AdemoGameMode)


#define demo_Source_demo_demoGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAdemoGameMode(); \
	friend struct Z_Construct_UClass_AdemoGameMode_Statics; \
public: \
	DECLARE_CLASS(AdemoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/demo"), DEMO_API) \
	DECLARE_SERIALIZER(AdemoGameMode)


#define demo_Source_demo_demoGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DEMO_API AdemoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AdemoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, AdemoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdemoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API AdemoGameMode(AdemoGameMode&&); \
	DEMO_API AdemoGameMode(const AdemoGameMode&); \
public:


#define demo_Source_demo_demoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DEMO_API AdemoGameMode(AdemoGameMode&&); \
	DEMO_API AdemoGameMode(const AdemoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEMO_API, AdemoGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AdemoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AdemoGameMode)


#define demo_Source_demo_demoGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define demo_Source_demo_demoGameMode_h_9_PROLOG
#define demo_Source_demo_demoGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_demoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_demoGameMode_h_12_SPARSE_DATA \
	demo_Source_demo_demoGameMode_h_12_RPC_WRAPPERS \
	demo_Source_demo_demoGameMode_h_12_INCLASS \
	demo_Source_demo_demoGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define demo_Source_demo_demoGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	demo_Source_demo_demoGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	demo_Source_demo_demoGameMode_h_12_SPARSE_DATA \
	demo_Source_demo_demoGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	demo_Source_demo_demoGameMode_h_12_INCLASS_NO_PURE_DECLS \
	demo_Source_demo_demoGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_API UClass* StaticClass<class AdemoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID demo_Source_demo_demoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
