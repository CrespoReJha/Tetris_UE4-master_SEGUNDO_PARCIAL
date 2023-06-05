// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OBSERVER_Suscriptor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UOBSERVER_Suscriptor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IOBSERVER_Suscriptor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Update(class AOBSERVER_Publicador* Publisher) = 0;
};
