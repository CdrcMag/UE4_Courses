// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/CapsuleComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnBase.generated.h"

class UCapsuleComponent;

UCLASS()
class TOONTANK_API APawnBase : public APawn
{
	GENERATED_BODY()

private:

	UPROPERTY()
	UCapsuleComponent* CapsuleComp;
	UPROPERTY()
	UStaticMeshComponent* BaseMesh;
	UPROPERTY()
	UStaticMeshComponent* TurretMesh;
	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;

public:
	// Sets default values for this pawn's properties
	APawnBase();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "DEMO")
	int VisibleAnywhere;
	UPROPERTY(VisibleDefaultsOnly, Category = "DEMO")
	int VisibleDefaultsOnly;
	UPROPERTY(VisibleInstanceOnly, Category = "DEMO")
	int VisibleInstanceOnly;
	UPROPERTY(EditAnywhere, Category = "DEMO")
	int EditAnywhere;
	UPROPERTY(EditDefaultsOnly, Category = "DEMO")
	int EditDefaultsOnly;
	UPROPERTY(EditInstanceOnly, Category = "DEMO")
	int EditInstanceOnly;





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
