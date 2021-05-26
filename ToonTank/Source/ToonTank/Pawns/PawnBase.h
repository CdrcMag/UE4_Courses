// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/CapsuleComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnBase.generated.h"

class UCapsuleComponent;
class AProjectileBase;
class UHealthComponent_v2;
class UMatineeCameraShake;

UCLASS()
class TOONTANK_API APawnBase : public APawn
{
	GENERATED_BODY()

private:

	//Composants
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent_v2* HealthComponent;

	//Variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile Type", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectileBase> ProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* DeathParticles;

public:
	// Sets default values for this pawn's properties
	APawnBase();

	//Access modifiers
	//https://docs.unrealengine.com/en-US/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/index.html

	//VisibleAnywhere permet de voir cette variable dans toutes les fenêtres de propriétés, mais ne peut pas être éditée. 
	//BlueprintReadOnly permet récupérer une node "get" de cette variable dans le blueprint.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DEMO")
	int VisibleAnywhere;

	//VisibleDefaultsOnly permet à cette variable d'être visible dans la fenêtre de propriétés des defaults (équivalent du prefab). Ne peut pas être édité.
	UPROPERTY(VisibleDefaultsOnly, Category = "DEMO")
	int VisibleDefaultsOnly;

	//VisibleInstanceOnly indique que cette variable est visible seulement dans la fenêtre de propriétés des instances de l'objet. Ne peut pas être édité.
	//BlueprintReadWrite permet de récupérer des nodes "get" et "set" dans le blueprint de cette classe.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "DEMO")
	int VisibleInstanceOnly;

	//EditAnywhere permet la modification de cette variable dans le defaults et dans les instances. 
	UPROPERTY(EditAnywhere, Category = "DEMO")
	int EditAnywhere;

	//EditDefaultsOnly permet la modification de cette variable seulement dans le defaults
	UPROPERTY(EditDefaultsOnly, Category = "DEMO")
	int EditDefaultsOnly;

	//EditInstanceOnly permet la modification de cette variable seulement dans les instances
	UPROPERTY(EditInstanceOnly, Category = "DEMO")
	int EditInstanceOnly;

	//Variable concernant l'exercice du cours
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	int TestVariable;

	virtual void HandleDestruction();

	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* DeathSound;

	UPROPERTY(EditAnywhere, Category = "Effects")
	TSubclassOf<UMatineeCameraShake> DeathShake;

protected:

	void RotateTurret(FVector LookAtTarget);

	void Fire();
	
	



};
