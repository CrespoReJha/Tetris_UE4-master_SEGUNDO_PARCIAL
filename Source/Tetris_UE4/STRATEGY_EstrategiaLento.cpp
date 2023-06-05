// Fill out your copyright notice in the Description page of Project Settings.


#include "STRATEGY_EstrategiaLento.h"
#include "STRATEGY_ComponenteLento.h"
#include "Pieces.h"

// Sets default values
ASTRATEGY_EstrategiaLento::ASTRATEGY_EstrategiaLento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTRATEGY_EstrategiaLento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTRATEGY_EstrategiaLento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTRATEGY_EstrategiaLento::EstablecerComponente(APieces* Pieza)
{

	Componente = NewObject<USTRATEGY_ComponenteLento>(Pieza);
	Componente->RegisterComponent();
}

