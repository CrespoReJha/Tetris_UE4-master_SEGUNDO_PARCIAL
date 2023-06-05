// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_EscenarioRocas.h"

AFACTORY_EscenarioRocas::AFACTORY_EscenarioRocas() : AFACTORY_Escenario()
{
	UMaterialInterface* materialEsfera = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/Rocas_Mat.Rocas_Mat'"));
	EscenarioMesh->SetMaterial(0, materialEsfera);
}
