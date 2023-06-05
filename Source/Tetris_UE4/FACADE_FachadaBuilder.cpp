// Fill out your copyright notice in the Description page of Project Settings.


#include "FACADE_FachadaBuilder.h"
#include "BUILDER_ConstrPiezasColoridas.h"
#include "BUILDER_ConstrPiezasGrandes.h"
#include "BUILDER_ConstrPiezasMetalicas.h"
#include "BUILDER_ConstrPiezasTetrominas.h"
#include "BUILDER_ConstrPiezasHuecas.h"
#include "BUILDER_ConstrPiezasPequenas.h"
#include "BUILDER_DirectorPiezas.h"

// Sets default values
AFACADE_FachadaBuilder::AFACADE_FachadaBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFACADE_FachadaBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFACADE_FachadaBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APieces* AFACADE_FachadaBuilder::ObtenerPiezaBuilder()
{
    //BUILDER
    DirectorPieza = GetWorld()->SpawnActor<ABUILDER_DirectorPiezas>(ABUILDER_DirectorPiezas::StaticClass());

    int Random = FMath::RandRange(0, 5);
    TipoPieza = Random;
    switch (TipoPieza)
    {
    case 0:
        ConstructorPiezaColorida = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasColoridas>(ABUILDER_ConstrPiezasColoridas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaColorida);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA COLORIDA "));
        break;
    case 1:
        ConstructorPiezaGrande = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasGrandes>(ABUILDER_ConstrPiezasGrandes::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaGrande);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA GRANDE "));
        break;
    case 2:
        ConstructorPiezaMetalica = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasMetalicas>(ABUILDER_ConstrPiezasMetalicas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaMetalica);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA METALICA "));
        break;
    case 3:
        ConstructorPiezaTetromino = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasTetrominas>(ABUILDER_ConstrPiezasTetrominas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezaTetromino);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA TETROMINO "));
        break;
    case 4:
        ConstructorPiezasHuecas = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasHuecas>(ABUILDER_ConstrPiezasHuecas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezasHuecas);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA HUECAS "));
        break;
    case 5:
        ConstructorPiezasPequenas = GetWorld()->SpawnActor<ABUILDER_ConstrPiezasPequenas>(ABUILDER_ConstrPiezasPequenas::StaticClass());
        DirectorPieza->SetConstructorPiezaBase(ConstructorPiezasPequenas);
        GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Green, TEXT("Se genero una PIEZA PEQUENAS "));
        break;
    }

    DirectorPieza->ConstruirPiezaBase();

    APieces* PiezaBase = DirectorPieza->GetPiezaBase();

	return PiezaBase;
}

int AFACADE_FachadaBuilder::ObtenerTipoPieza()
{
	return TipoPieza;
}

