// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OBSERVER_Publicador.h"
#include "OBSERVER_PublicadorScore.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API AOBSERVER_PublicadorScore : public AOBSERVER_Publicador
{
	GENERATED_BODY()
	
public:
	void ScoreAlcanzado();
};
