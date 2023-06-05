// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STRATEGY_EstrategiaPieza.h"
#include "STRATEGY_Estratega.generated.h"

UCLASS()
class TETRIS_UE4_API ASTRATEGY_Estratega : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTRATEGY_Estratega();

private:

	ISTRATEGY_EstrategiaPieza* Estrategia;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerEstrategia(AActor* _Estrategia);

	void EstablecerComponente(class APieces* Pieza);
};
