// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TOONTANK_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define TOONTANK_ProjectileBase_generated_h

#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_SPARSE_DATA
#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTank"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectileBase, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectileBase, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AProjectileBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AProjectileBase, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AProjectileBase, Damage); } \
	FORCEINLINE static uint32 __PPO__HitParticles() { return STRUCT_OFFSET(AProjectileBase, HitParticles); } \
	FORCEINLINE static uint32 __PPO__ParticleTrail() { return STRUCT_OFFSET(AProjectileBase, ParticleTrail); } \
	FORCEINLINE static uint32 __PPO__HitSound() { return STRUCT_OFFSET(AProjectileBase, HitSound); } \
	FORCEINLINE static uint32 __PPO__LaunchSound() { return STRUCT_OFFSET(AProjectileBase, LaunchSound); } \
	FORCEINLINE static uint32 __PPO__HitShake() { return STRUCT_OFFSET(AProjectileBase, HitShake); }


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_12_PROLOG
#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_RPC_WRAPPERS \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_INCLASS \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_SPARSE_DATA \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_INCLASS_NO_PURE_DECLS \
	ToonTank_Source_ToonTank_Actors_ProjectileBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANK_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTank_Source_ToonTank_Actors_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
