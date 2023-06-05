// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FACTORY_DirectorEscenario.h"
#include "FACTORY_DirecEscenarioMaterial.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API AFACTORY_DirecEscenarioMaterial : public AFACTORY_DirectorEscenario
{
	GENERATED_BODY()
	
public:

	virtual AFACTORY_Escenario* EstablecerMaterial(FString Categoria) override;
	
};
