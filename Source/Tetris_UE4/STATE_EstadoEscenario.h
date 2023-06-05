// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "STATE_EstadoEscenario.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USTATE_EstadoEscenario : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API ISTATE_EstadoEscenario
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerEscenario(class AFACTORY_Escenario* _Escenario) = 0; //el objeto que estamos spawneando
	virtual void SetEscenario(class ASTATE_ContrEstadoEscenario* Escenario) = 0;
};
