// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent_v2.h"
#include "ToonTank/GameModes/TankGameModeBase.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UHealthComponent_v2::UHealthComponent_v2()
{
	PrimaryComponentTick.bCanEverTick = false;

}


// Called when the game starts
void UHealthComponent_v2::BeginPlay()
{
	Super::BeginPlay();

	//Assigne à la vie actuelle la valeur par défaut (max)
	Health = DefaultHealth;	

	//Récupère la référence du game mode
	GameModeRef = Cast<ATankGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	//Assigne la méthode TakeDamage lorsque l'event OnTakeAnyDamage est triggered
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent_v2::TakeDamage);
	
}


void UHealthComponent_v2::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) 
{
	if(Damage == 0 || Health <= 0)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);
	//UE_LOG(LogTemp, Warning, TEXT("HEALTH : %f"), Health);


	if(Health <= 0)
	{
		if(GameModeRef)
		{
			GameModeRef->ActorDied(GetOwner());
		}		
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Health Component has no reference to the GameMode"));
		}
	}
}
