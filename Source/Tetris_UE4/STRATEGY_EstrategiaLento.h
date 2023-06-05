// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STRATEGY_EstrategiaPieza.h"
#include "STRATEGY_ComponenteLento.h"
#include "STRATEGY_EstrategiaLento.generated.h"

UCLASS()
class TETRIS_UE4_API ASTRATEGY_EstrategiaLento : public AActor, public ISTRATEGY_EstrategiaPieza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTRATEGY_EstrategiaLento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		USTRATEGY_ComponenteLento* Componente;

	virtual void EstablecerComponente(class APieces* Pieza) override;
};
