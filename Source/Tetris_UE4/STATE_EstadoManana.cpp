// Fill out your copyright notice in the Description page of Project Settings.


#include "STATE_EstadoManana.h"
#include "STATE_ContrEstadoEscenario.h"
#include "FACTORY_Escenario.h"

// Sets default values
ASTATE_EstadoManana::ASTATE_EstadoManana()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/paisaje_de_dia_Mat.paisaje_de_dia_Mat'"));
}

// Called when the game starts or when spawned
void ASTATE_EstadoManana::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTATE_EstadoManana::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTATE_EstadoManana::EstablecerEscenario(AFACTORY_Escenario* _Escenario)
{

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario manana apareciendo"));

    _Escenario->EscenarioMesh->SetMaterial(0, materialEscenarioManana);

    Escenario->cambiarEstado(Escenario->getEstadoTarde());

}

void ASTATE_EstadoManana::SetEscenario(ASTATE_ContrEstadoEscenario* _Escenario)
{
    Escenario = _Escenario;
}