// Fill out your copyright notice in the Description page of Project Settings.


#include "STATE_EstadoNoche.h"
#include "STATE_ContrEstadoEscenario.h"
#include "FACTORY_Escenario.h"

// Sets default values
ASTATE_EstadoNoche::ASTATE_EstadoNoche()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/noche_paisaje_Mat.noche_paisaje_Mat'"));

}

// Called when the game starts or when spawned
void ASTATE_EstadoNoche::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTATE_EstadoNoche::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTATE_EstadoNoche::EstablecerEscenario(AFACTORY_Escenario* _Escenario)
{
    //Escenario->Destroy();
    //FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario tarde apareciendo"));
    //Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    _Escenario->EscenarioMesh->SetMaterial(0, materialEscenarioManana);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    //Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));*/

    Escenario->cambiarEstado(Escenario->getEstadoManana());

    //Estado = EstadoTarde;

}

void ASTATE_EstadoNoche::SetEscenario(ASTATE_ContrEstadoEscenario* _Escenario)
{
    Escenario = _Escenario;
}