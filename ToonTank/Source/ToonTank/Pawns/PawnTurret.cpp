// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

    //Lance un timer au lancement du jeu, appelle la méthode "CheckFireCondition", toutes les FireRate secondes.
    GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

    //Récupère la référence du joueur dans la scène
    PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
	
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if(!PlayerPawn || ReturnDistanceToPlayer() > turretRange)
    {
        return;
    }

    FVector target = FVector(PlayerPawn->GetActorLocation());
    RotateTurret(target);
    



}

void APawnTurret::CheckFireCondition()
{
    if(!PlayerPawn)
    {
        return;
    }

    //Si la distance entre la tourelle et le tank est inférieure à la valeur de turretRange, appel de la méthode de tir
    if(ReturnDistanceToPlayer() <= turretRange)
    {
        Fire();
    }


    
}

float APawnTurret::ReturnDistanceToPlayer()
{
    //Si le joueur n'est pas actif
    if(!PlayerPawn)
    {
        return 0.0f;
    }

    //Retourne la distance entre la tourelle et le joueur
    return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
    
}

void APawnTurret::HandleDestruction()
{
    Super::HandleDestruction();
    Destroy();
}