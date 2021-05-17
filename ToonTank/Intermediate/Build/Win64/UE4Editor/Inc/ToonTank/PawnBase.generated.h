// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANK_PawnBase_generated_h
#error "PawnBase.generated.h already included, missing '#pragma once' in PawnBase.h"
#endif
#define TOONTANK_PawnBase_generated_h

#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_SPARSE_DATA
#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_RPC_WRAPPERS
#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPawnBase(); \
	friend struct Z_Construct_UClass_APawnBase_Statics; \
public: \
	DECLARE_CLASS(APawnBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(APawnBase)


#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public:


#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnBase(APawnBase&&); \
	NO_API APawnBase(const APawnBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnBase)


#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_PRIVATE_PROPERTY_OFFSET
#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_9_PROLOG
#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_SPARSE_DATA \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_RPC_WRAPPERS \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_INCLASS \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_SPARSE_DATA \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_INCLASS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Pawns_PawnBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANK_API UClass* StaticClass<class APawnBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTank_Source_ToonTank_Pawns_PawnBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
