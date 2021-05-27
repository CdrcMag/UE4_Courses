// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTank.generated.h"

class USpringArmComponent;
class UCameraComponent;


UCLASS()
class TOONTANK_API APawnTank : public APawnBase
{
	GENERATED_BODY()

private:

	//COMPONENTS
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	//VARIABLES
	FVector MoveDirection;
	FQuat   RotationDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement settings", meta = (AllowPrivateAccess = "true"))
	float MoveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement settings", meta = (AllowPrivateAccess = "true"))
	float RotationSpeed = 100.0f;

	APlayerController* PlayerControllerRef;
	bool bIsPlayerAlive = true;

	//FUNCTIONS
	void CalculateMoveInput(float value);
	void CalculateRotationInput(float value);

	void Move();
	void Rotate();

public:

	APawnTank();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void HandleDestruction() override;

	bool GetIsPlayerAlive();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

};
