// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANK_PlayerControllerBase_generated_h
#error "PlayerControllerBase.generated.h already included, missing '#pragma once' in PlayerControllerBase.h"
#endif
#define TOONTANK_PlayerControllerBase_generated_h

#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_SPARSE_DATA
#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_RPC_WRAPPERS
#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public:


#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerControllerBase(APlayerControllerBase&&); \
	NO_API APlayerControllerBase(const APlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase)


#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET
#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_12_PROLOG
#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_RPC_WRAPPERS \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_INCLASS \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANK_API UClass* StaticClass<class APlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTank_Source_ToonTank_PlayerControllers_PlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
