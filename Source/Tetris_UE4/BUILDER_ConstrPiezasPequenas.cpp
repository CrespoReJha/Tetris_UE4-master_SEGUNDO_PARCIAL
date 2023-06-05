// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_ConstrPiezasPequenas.h"
#include "Pieces.h"
#include <vector>

// Sets default values
ABUILDER_ConstrPiezasPequenas::ABUILDER_ConstrPiezasPequenas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_ConstrPiezasPequenas::BeginPlay()
{
	Super::BeginPlay();
	
	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass());
	//La Atacha al Constructor (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABUILDER_ConstrPiezasPequenas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_ConstrPiezasPequenas::ConstruirColores()
{
	Pieza->setColor(2);
}

void ABUILDER_ConstrPiezasPequenas::ConstruirTipoPieza()
{
	std::vector<std::vector<std::pair<float, float>>> Shapes =
	{

		{{-10.0, 0.0}, {0.0, 0.0}},
		{{0.0, 0.0}},
		{{10.0, 0.0}, {0.0, 0.0}},
		
	};
	Pieza->SetTipoPieza(Shapes);
}

APieces* ABUILDER_ConstrPiezasPequenas::GetPiezaBase()
{

	return Pieza;
}