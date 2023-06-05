// Fill out your copyright notice in the Description page of Project Settings.


#include "STRATEGY_ComponenteRapido.h"

// Sets default values for this component's properties
USTRATEGY_ComponenteRapido::USTRATEGY_ComponenteRapido()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	RadioMovimiento = 10.0f;
	AnchoMovimiento = 10.0f;
	AltoMovimiento = 10.0f;
	ProfundidadMovimiento = 0.0f;

	TiempoAcumulado = 0.0;
	TiempoLimite = 0.2;
}


// Called when the game starts
void USTRATEGY_ComponenteRapido::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USTRATEGY_ComponenteRapido::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TiempoTranscurrido += DeltaTime;

	if (EjecutarAccion && TiempoTranscurrido >= 0.25f)
	{
		TiempoAcumulado = TiempoAcumulado + TiempoTranscurrido;

		AActor* Padre = GetOwner();
		if (Padre)
		{
			// Find a new position for the object to go to 
			auto NuevaPosicion = Padre->GetActorLocation() + FVector(0.0, 0.0f, -10.0f);
			Padre->SetActorLocation(NuevaPosicion);
		}

		TiempoTranscurrido = 0.0f;
	}

	if (TiempoAcumulado >= 1.5f)
	{
		EjecutarAccion = false;
	}
}

