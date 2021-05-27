// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

class UProjectileMovementComponent;
class UMatineeCameraShake;

UCLASS()
class TOONTANK_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
private:

	//COMPONENTS
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TSubclassOf<UDamageType> DamageType;


	//VARIABLES
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MovementSpeed = 1300;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage", meta = (AllowPrivateAccess = "true"))
	float Damage = 50;


	//FUNCTIONS
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	//EFFECTS
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* HitParticles;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UParticleSystemComponent* ParticleTrail;

	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* HitSound;

	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* LaunchSound;

	UPROPERTY(EditAnywhere, Category = "Effects")
	TSubclassOf<UMatineeCameraShake> HitShake;

public:	
	// Sets default values for this actor's properties
	AProjectileBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
