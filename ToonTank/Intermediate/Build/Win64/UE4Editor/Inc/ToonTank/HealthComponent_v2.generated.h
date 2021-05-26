// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef TOONTANK_HealthComponent_v2_generated_h
#error "HealthComponent_v2.generated.h already included, missing '#pragma once' in HealthComponent_v2.h"
#endif
#define TOONTANK_HealthComponent_v2_generated_h

#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_SPARSE_DATA
#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent_v2(); \
	friend struct Z_Construct_UClass_UHealthComponent_v2_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent_v2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent_v2)


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent_v2(); \
	friend struct Z_Construct_UClass_UHealthComponent_v2_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent_v2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent_v2)


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent_v2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent_v2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent_v2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent_v2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent_v2(UHealthComponent_v2&&); \
	NO_API UHealthComponent_v2(const UHealthComponent_v2&); \
public:


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent_v2(UHealthComponent_v2&&); \
	NO_API UHealthComponent_v2(const UHealthComponent_v2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent_v2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent_v2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent_v2)


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UHealthComponent_v2, DefaultHealth); }


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_12_PROLOG
#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_RPC_WRAPPERS \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_INCLASS \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_INCLASS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Components_HealthComponent_v2_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANK_API UClass* StaticClass<class UHealthComponent_v2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTank_Source_ToonTank_Components_HealthComponent_v2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
