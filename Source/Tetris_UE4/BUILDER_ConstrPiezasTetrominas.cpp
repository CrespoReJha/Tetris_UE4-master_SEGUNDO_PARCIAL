// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_ConstrPiezasTetrominas.h"
#include "Pieces.h"
#include <vector>

// Sets default values
ABUILDER_ConstrPiezasTetrominas::ABUILDER_ConstrPiezasTetrominas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_ConstrPiezasTetrominas::BeginPlay()
{
	Super::BeginPlay();
	
	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass());
	//La Atacha al Constructor (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABUILDER_ConstrPiezasTetrominas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_ConstrPiezasTetrominas::ConstruirColores()
{
	Pieza->setColor(2);
}

void ABUILDER_ConstrPiezasTetrominas::ConstruirTipoPieza()
{
	// no cambia el tipo de piezas
}

APieces* ABUILDER_ConstrPiezasTetrominas::GetPiezaBase()
{

	return Pieza;
}