// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANK_TankGameModebase_generated_h
#error "TankGameModebase.generated.h already included, missing '#pragma once' in TankGameModebase.h"
#endif
#define TOONTANK_TankGameModebase_generated_h

#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_SPARSE_DATA
#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_RPC_WRAPPERS
#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_EVENT_PARMS \
	struct TankGameModeBase_eventGameOver_Parms \
	{ \
		bool PlayerWon; \
	};


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_CALLBACK_WRAPPERS
#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATankGameModeBase(); \
	friend struct Z_Construct_UClass_ATankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(ATankGameModeBase)


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public:


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankGameModeBase(ATankGameModeBase&&); \
	NO_API ATankGameModeBase(const ATankGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankGameModeBase)


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartDelay() { return STRUCT_OFFSET(ATankGameModeBase, StartDelay); }


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_16_PROLOG \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_EVENT_PARMS


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_SPARSE_DATA \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_RPC_WRAPPERS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_CALLBACK_WRAPPERS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_INCLASS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_SPARSE_DATA \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_CALLBACK_WRAPPERS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_INCLASS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_GameModes_TankGameModebase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANK_API UClass* StaticClass<class ATankGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTank_Source_ToonTank_GameModes_TankGameModebase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
