// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANK_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:

	//Méthode de gestion des inputs du joueur
	void SetPlayerEnabledState(bool SetPlayerEnabled);
	
};
