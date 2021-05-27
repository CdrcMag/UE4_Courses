// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"
#include "ToonTank/Pawns/PawnTank.h"
#include "ToonTank/Pawns/PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "ToonTank/PlayerControllers/PlayerControllerBase.h"

void ATankGameModeBase::BeginPlay() 
{
    Super::BeginPlay();

    HandleGameStart();
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
    //Si le joueur meurt
    if(DeadActor == PlayerTank)
    {
        PlayerTank->HandleDestruction();
        HandleGameOver(false);

        if(PlayerControllerRef)
        {
            PlayerControllerRef->SetPlayerEnabledState(false);
        }
    }
    //Si une tourelle est détruite
    else if(APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
    {
        DestroyedTurret->HandleDestruction();
        
        if(--TargetTurrets == 0)
        {
            HandleGameOver(true);
        }
    }
}

void ATankGameModeBase::HandleGameStart()
{
    //TargetTurrets reçoit le nombre de tourelles actives dans le niveau
    TargetTurrets = GetTargetTurretCount();

    //Reçoit la ref du joueur
    PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));

    //Reçoit la ref du playerController
    PlayerControllerRef = Cast<APlayerControllerBase>(UGameplayStatics::GetPlayerController(this, 0));

    //Lancement de la méthode dans le blueprint
    GameStart();

    if(PlayerControllerRef)
    {   
        //Désactive les inputs
        PlayerControllerRef->SetPlayerEnabledState(false);

        //Réactive les inputs lorsque le timer de début atteint zéro.
        FTimerHandle PlayerEnableHandle;
        FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef, & APlayerControllerBase::SetPlayerEnabledState, true);
        GetWorld()->GetTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, StartDelay, false);
    }
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
    GameOver(PlayerWon);
}


int32 ATankGameModeBase::GetTargetTurretCount()
{
    TArray<AActor*> TurretActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APawnTurret::StaticClass(), TurretActors);
    return TurretActors.Num();
}

