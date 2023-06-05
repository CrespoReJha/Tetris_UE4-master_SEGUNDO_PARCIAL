// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_ConstrPiezasGrandes.h"
#include "Pieces.h"
#include <vector>

// Sets default values
ABUILDER_ConstrPiezasGrandes::ABUILDER_ConstrPiezasGrandes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_ConstrPiezasGrandes::BeginPlay()
{
	Super::BeginPlay();
	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ABUILDER_ConstrPiezasGrandes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_ConstrPiezasGrandes::ConstruirColores()
{
	Pieza->setColor(2); // establece el tipo 2 para que no cambie los colores predeterminados
}

void ABUILDER_ConstrPiezasGrandes::ConstruirTipoPieza()
{
	std::vector<std::vector<std::pair<float, float>>> Shapes =
	{
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {30.0, 0.0}},
		{{-10.0, 0.0}, {-20.0, 10.0}, {-10.0, 10.0}, {0.0, 10.0}, {-10.0, 20.0}},
		{{-10.0, 0.0}, {0.0, 10.0}, {0.0, 20.0}, {10.0, 10.0}, {10.0, 20.0}},
		{{0.0, -10.0}, {0.0, 0.0}, {0.0, 10.0}, {0.0, 20.0}, {10.0, 10.0}, {-10.0, 10.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {10.0, 10.0}, {10.0, 20.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {-10.0, 10.0}, {20.0, 10.0}},
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}, {0.0, 10.0}, {20.0, 10.0}},
	};
	Pieza->SetTipoPieza(Shapes); // establece el tipo de pieza
}

APieces* ABUILDER_ConstrPiezasGrandes::GetPiezaBase()
{
	//Retorna la Pieza al Constructor (this)
	return Pieza;
}