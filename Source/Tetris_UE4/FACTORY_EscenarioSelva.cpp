// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_EscenarioSelva.h"

AFACTORY_EscenarioSelva::AFACTORY_EscenarioSelva() : AFACTORY_Escenario()
{
	UMaterialInterface* materialEsfera = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/Paisaje_verde_Mat.Paisaje_verde_Mat'"));
	EscenarioMesh->SetMaterial(0, materialEsfera);
}
