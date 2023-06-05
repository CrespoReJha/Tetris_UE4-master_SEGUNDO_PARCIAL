// Fill out your copyright notice in the Description page of Project Settings.


#include "STRATEGY_EstrategiaRapido.h"
#include "STRATEGY_ComponenteRapido.h"
#include "Pieces.h"

// Sets default values
ASTRATEGY_EstrategiaRapido::ASTRATEGY_EstrategiaRapido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTRATEGY_EstrategiaRapido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTRATEGY_EstrategiaRapido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTRATEGY_EstrategiaRapido::EstablecerComponente(APieces* Pieza)
{
	Componente = NewObject<USTRATEGY_ComponenteRapido>(Pieza);
	Componente->RegisterComponent();
}

