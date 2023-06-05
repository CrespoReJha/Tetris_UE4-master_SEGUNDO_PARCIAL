// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_EscenarioColorido.h"

AFACTORY_EscenarioColorido::AFACTORY_EscenarioColorido() : AFACTORY_Escenario()
{
	UMaterialInterface* materialEsfera = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/Paisaje_Colores_Mat.Paisaje_Colores_Mat'"));
	EscenarioMesh->SetMaterial(0, materialEsfera);
}
