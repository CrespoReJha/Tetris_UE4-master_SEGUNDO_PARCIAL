// Fill out your copyright notice in the Description page of Project Settings.


#include "STRATEGY_Estratega.h"

// Sets default values
ASTRATEGY_Estratega::ASTRATEGY_Estratega()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTRATEGY_Estratega::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTRATEGY_Estratega::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTRATEGY_Estratega::EstablecerEstrategia(AActor* _Estrategia)
{
	//Try to cast the passed Strategy and set it to the current one
	Estrategia = Cast<ISTRATEGY_EstrategiaPieza>(_Estrategia);
	//Log Error if the cast failed
	if (!Estrategia)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("AlterManeuvers(): The Actor is not a BattleShipStrategy!Are you sure that the Actor implements that interface ? "));
	}
}

void ASTRATEGY_Estratega::EstablecerComponente(APieces* Pieza)
{
	if (!Estrategia) {
		UE_LOG(LogTemp, Error, TEXT("Engage(): BattleStrategy is NULL, make sure it's initialized."));
		return;
	}

	//Execute the current Strategy Maneuver
	Estrategia->EstablecerComponente(Pieza);
}

