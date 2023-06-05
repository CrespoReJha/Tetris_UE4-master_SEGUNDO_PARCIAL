// Fill out your copyright notice in the Description page of Project Settings.


#include "STATE_ContrEstadoEscenario.h"
#include "STATE_EstadoEscenario.h"
#include "STATE_EstadoManana.h"
#include "STATE_EstadoTarde.h"
#include "STATE_EstadoNoche.h"
#include "FACTORY_DirectorEscenario.h"
#include "FACTORY_DirecEscenarioMaterial.h"
#include "FACTORY_Escenario.h"

ASTATE_ContrEstadoEscenario::ASTATE_ContrEstadoEscenario()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

void ASTATE_ContrEstadoEscenario::BeginPlay()
{
    Super::BeginPlay();
}

void ASTATE_ContrEstadoEscenario::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

AFACTORY_Escenario* ASTATE_ContrEstadoEscenario::iniciar()
{
    EstadoManana = GetWorld()->SpawnActor<ASTATE_EstadoManana>(ASTATE_EstadoManana::StaticClass());
    EstadoManana->SetEscenario(this);

    //Spanw the No Coin State and set this Slot Machine to it
    EstadoTarde = GetWorld()->SpawnActor<ASTATE_EstadoTarde>(ASTATE_EstadoTarde::StaticClass());
    EstadoTarde->SetEscenario(this);

    //Spanw the Coin Inserted State and set this Slot Machine to it
    EstadoNoche = GetWorld()->SpawnActor<ASTATE_EstadoNoche>(ASTATE_EstadoNoche::StaticClass());
    EstadoNoche->SetEscenario(this);

    //Estado = EstadoManana;

    /*FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario manana apareciendo"));
    AFACTORY_Escenario* Escenario = GetWorld()->SpawnActor<AFACTORY_Escenario>(AFACTORY_Escenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    //Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));*/
    //FACTORY
    AFACTORY_DirectorEscenario* CreadorEscenarioMaterial = GetWorld()->SpawnActor<AFACTORY_DirecEscenarioMaterial>(AFACTORY_DirecEscenarioMaterial::StaticClass());
    AFACTORY_Escenario* Escenario = nullptr;

    int NumeroAleatorio = FMath::RandRange(0, 2);
    if (NumeroAleatorio == 0) {
        Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material0"));
    }
    else if (NumeroAleatorio == 1) {
        Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material1"));
    }
    else if (NumeroAleatorio == 2) {
        Escenario = CreadorEscenarioMaterial->CrearEscenario(TEXT("Material2"));
    }

    Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));
    //

    Estado = EstadoManana;
    return Escenario;
}

void ASTATE_ContrEstadoEscenario::cambiarEscenario(AFACTORY_Escenario* _Escenario)
{
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo escenario"));
    Estado->EstablecerEscenario(_Escenario);
}

void ASTATE_ContrEstadoEscenario::cambiarEstado(ISTATE_EstadoEscenario* _Estado)
{
    Estado = _Estado;
}

ISTATE_EstadoEscenario* ASTATE_ContrEstadoEscenario::getEstadoManana()
{
    return EstadoManana;
}

ISTATE_EstadoEscenario* ASTATE_ContrEstadoEscenario::getEstadoTarde()
{
    return EstadoTarde;
}

ISTATE_EstadoEscenario* ASTATE_ContrEstadoEscenario::getEstadoNoche()
{
    return EstadoNoche;
}

ISTATE_EstadoEscenario* ASTATE_ContrEstadoEscenario::getEstado()
{
    return Estado;
}