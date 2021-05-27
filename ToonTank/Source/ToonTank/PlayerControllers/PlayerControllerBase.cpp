// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    //Active ou désactive la capacité du joueur à se déplacer
    if(SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
    }
    else
    {
        GetPawn()->DisableInput(this);
    }

    //Lorsque le jeu se lance, le curseur devient visible
    bShowMouseCursor = SetPlayerEnabled;
}