// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DECORATOR_Interfaz.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDECORATOR_Interfaz : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRIS_UE4_API IDECORATOR_Interfaz
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SetRotacionZ(float _Z) = 0;
	virtual float GetRotacionZ() = 0;

	virtual void SetObjeto(IDECORATOR_Interfaz* _Objeto) = 0;
};
