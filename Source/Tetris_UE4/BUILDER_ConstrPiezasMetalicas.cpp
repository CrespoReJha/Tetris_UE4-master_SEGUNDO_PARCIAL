// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_ConstrPiezasMetalicas.h"
#include "Pieces.h"

// Sets default values
ABUILDER_ConstrPiezasMetalicas::ABUILDER_ConstrPiezasMetalicas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_ConstrPiezasMetalicas::BeginPlay()
{
	Super::BeginPlay();


	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass());
	//La Atacha al Constructor (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABUILDER_ConstrPiezasMetalicas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_ConstrPiezasMetalicas::ConstruirColores()
{
	Pieza->setColor(3); //color metalico
}

void ABUILDER_ConstrPiezasMetalicas::ConstruirTipoPieza()
{
	//no manda nada, no cambia la el tipo de piezas
}

APieces* ABUILDER_ConstrPiezasMetalicas::GetPiezaBase()
{
	
	return Pieza;
}