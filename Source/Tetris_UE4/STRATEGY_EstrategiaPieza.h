// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "STRATEGY_EstrategiaPieza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USTRATEGY_EstrategiaPieza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API ISTRATEGY_EstrategiaPieza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void EstablecerComponente(class APieces* Pieza) = 0;
};
