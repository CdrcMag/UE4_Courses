// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTank/Pawns/PawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnBase() {}
// Cross Module References
	TOONTANK_API UClass* Z_Construct_UClass_APawnBase_NoRegister();
	TOONTANK_API UClass* Z_Construct_UClass_APawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ToonTank();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APawnBase::StaticRegisterNativesAPawnBase()
	{
	}
	UClass* Z_Construct_UClass_APawnBase_NoRegister()
	{
		return APawnBase::StaticClass();
	}
	struct Z_Construct_UClass_APawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleAnywhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditAnywhere_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDefaultsOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EditDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditInstanceOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EditInstanceOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/PawnBase.h" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_CapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_CapsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_TurretMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_TurretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_TurretMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleAnywhere_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleAnywhere = { "VisibleAnywhere", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, VisibleAnywhere), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleDefaultsOnly_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleDefaultsOnly = { "VisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, VisibleDefaultsOnly), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleInstanceOnly_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleInstanceOnly = { "VisibleInstanceOnly", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, VisibleInstanceOnly), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_EditAnywhere_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_EditAnywhere = { "EditAnywhere", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, EditAnywhere), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_EditAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_EditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_EditDefaultsOnly_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_EditDefaultsOnly = { "EditDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, EditDefaultsOnly), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_EditDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_EditDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawnBase_Statics::NewProp_EditInstanceOnly_MetaData[] = {
		{ "Category", "DEMO" },
		{ "ModuleRelativePath", "Pawns/PawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APawnBase_Statics::NewProp_EditInstanceOnly = { "EditInstanceOnly", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APawnBase, EditInstanceOnly), METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::NewProp_EditInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::NewProp_EditInstanceOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_CapsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_TurretMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_ProjectileSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_VisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_EditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_EditDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawnBase_Statics::NewProp_EditInstanceOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawnBase_Statics::ClassParams = {
		&APawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnBase, 3285850732);
	template<> TOONTANK_API UClass* StaticClass<APawnBase>()
	{
		return APawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnBase(Z_Construct_UClass_APawnBase, &APawnBase::StaticClass, TEXT("/Script/ToonTank"), TEXT("APawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
