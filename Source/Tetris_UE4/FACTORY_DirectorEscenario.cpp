// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_DirectorEscenario.h"
#include "FACTORY_Escenario.h"

// Sets default values
AFACTORY_DirectorEscenario::AFACTORY_DirectorEscenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFACTORY_DirectorEscenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFACTORY_DirectorEscenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AFACTORY_Escenario* AFACTORY_DirectorEscenario::CrearEscenario(FString Categoria)
{

	AFACTORY_Escenario* Escenario = EstablecerMaterial(Categoria);

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Devolviendo Escenario"));

	return Escenario;
}