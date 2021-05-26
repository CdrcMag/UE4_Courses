// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealthComponent.generated.h"

class ATankGameModeBase;

UCLASS()
class TOONTANK_API AHealthComponent : public AActor
{
	GENERATED_BODY()
	
private:

	UPROPERTY(EditAnywhere)
	float DefaultHealth = 100.0;
	float Health = 0.0f;

	ATankGameModeBase* GameModeRef;

public:	
	// Sets default values for this actor's properties
	AHealthComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

};
