// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUILDER_ConstructorPiezas.h"
#include "BUILDER_ConstrPiezasColoridas.generated.h"

UCLASS()
class TETRIS_UE4_API ABUILDER_ConstrPiezasColoridas : public AActor, public IBUILDER_ConstructorPiezas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABUILDER_ConstrPiezasColoridas();

private:
	//The Lodging Actor
	UPROPERTY()
		class APieces* Pieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirColores() override;
	virtual void ConstruirTipoPieza() override;
	virtual class APieces* GetPiezaBase() override;
};
