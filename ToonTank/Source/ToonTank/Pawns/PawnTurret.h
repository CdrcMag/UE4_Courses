// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

class APawnTank;


UCLASS()
class TOONTANK_API APawnTurret : public APawnBase
{
	GENERATED_BODY()


private:

	//Cadence de tir de la tourelle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.0f;

	//Distance à laquelle la tourelle détecte le joueur
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float turretRange = 500.0f;

	//Fonction qui est appelée pour vérifier si la tourelle doit tirer
	void CheckFireCondition();

	//Utilisation d'un timer
	FTimerHandle FireRateTimerHandle;

	//Référence du joueur dans la scène
	APawnTank* PlayerPawn;

	float ReturnDistanceToPlayer();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:

	// Called when the game starts of when spawned
	virtual void BeginPlay() override;

	virtual void HandleDestruction() override;
	
};
