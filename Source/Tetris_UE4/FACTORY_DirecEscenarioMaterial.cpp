// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_DirecEscenarioMaterial.h"
#include "FACTORY_EscenarioRocas.h"
#include "FACTORY_EscenarioColorido.h"
#include "FACTORY_EscenarioSelva.h"

AFACTORY_Escenario* AFACTORY_DirecEscenarioMaterial::EstablecerMaterial(FString Categoria)
{
    if (Categoria == "Material0")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Devolviendo Escenario EscenarioRocas"));

        FTransform SpawnLocation;

        return GetWorld()->SpawnActor<AFACTORY_EscenarioRocas>(AFACTORY_EscenarioRocas::StaticClass(), SpawnLocation);
    }
    else if (Categoria == "Material1")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Devolviendo Escenario EscenarioColorido"));
      
        FTransform SpawnLocation;

        return GetWorld()->SpawnActor<AFACTORY_EscenarioColorido>(AFACTORY_EscenarioColorido::StaticClass(), SpawnLocation);
    }
    else if (Categoria == "Material2")
    {
        GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Devolviendo Escenario EscenarioSelva"));
  
        FTransform SpawnLocation;

        return GetWorld()->SpawnActor<AFACTORY_EscenarioSelva>(AFACTORY_EscenarioSelva::StaticClass(), SpawnLocation);
    }
    return nullptr;
}