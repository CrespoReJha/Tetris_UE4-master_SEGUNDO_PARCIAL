// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_ConstrPiezasColoridas.h"
#include "Pieces.h"
#include <vector>

// Sets default values
ABUILDER_ConstrPiezasColoridas::ABUILDER_ConstrPiezasColoridas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_ConstrPiezasColoridas::BeginPlay()
{
	Super::BeginPlay();
	
	//Spawnea los actores de Pieza
	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass());
	//La Atacha al Constructor (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABUILDER_ConstrPiezasColoridas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_ConstrPiezasColoridas::ConstruirColores()
{
	Pieza->setColor(1); // establece el tipo 1 para que sea colorido
}

void ABUILDER_ConstrPiezasColoridas::ConstruirTipoPieza()
{
	//No cambia nada
}

APieces* ABUILDER_ConstrPiezasColoridas::GetPiezaBase()
{
	//Retorna la Pieza al Contructor (this)
	return Pieza;
}