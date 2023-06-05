// Fill out your copyright notice in the Description page of Project Settings.


#include "STRATEGY_EstrategiaLoca.h"
#include "ADAPTER_AdaptadorMovimiento.h"
#include "Pieces.h"

// Sets default values
ASTRATEGY_EstrategiaLoca::ASTRATEGY_EstrategiaLoca()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTRATEGY_EstrategiaLoca::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTRATEGY_EstrategiaLoca::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTRATEGY_EstrategiaLoca::EstablecerComponente(APieces* Pieza)
{
	//ADAPTER
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA LOCA"));
	Componente = NewObject<UADAPTER_AdaptadorMovimiento>(Pieza);
	Componente->SetLimitesMovimiento(0.0f, 10.0f, 10.0f);
	Componente->RegisterComponent();
}

