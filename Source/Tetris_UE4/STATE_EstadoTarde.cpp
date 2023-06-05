// Fill out your copyright notice in the Description page of Project Settings.


#include "STATE_EstadoTarde.h"
#include "STATE_ContrEstadoEscenario.h"
#include "FACTORY_Escenario.h"

// Sets default values
ASTATE_EstadoTarde::ASTATE_EstadoTarde()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/atardecer_paisaje_Mat.atardecer_paisaje_Mat'"));
}

// Called when the game starts or when spawned
void ASTATE_EstadoTarde::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTATE_EstadoTarde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTATE_EstadoTarde::EstablecerEscenario(AFACTORY_Escenario* _Escenario)
{
    //Escenario->Destroy();
    //FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario tarde apareciendo"));
   
    _Escenario->EscenarioMesh->SetMaterial(0, materialEscenarioManana);

    Escenario->cambiarEstado(Escenario->getEstadoNoche());

}

void ASTATE_EstadoTarde::SetEscenario(ASTATE_ContrEstadoEscenario* _Escenario)
{
    Escenario = _Escenario;
}