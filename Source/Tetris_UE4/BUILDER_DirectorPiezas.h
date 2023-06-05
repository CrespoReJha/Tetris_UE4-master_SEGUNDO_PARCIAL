// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BUILDER_ConstructorPiezas.h"
#include "BUILDER_DirectorPiezas.generated.h"

UCLASS()
class TETRIS_UE4_API ABUILDER_DirectorPiezas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABUILDER_DirectorPiezas();

private:
	//The Builder Actor, that must be a ConstructorPiezas
	IBUILDER_ConstructorPiezas* ConstructorPieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Crea las Piezas
	void ConstruirPiezaBase();
	//Set the Builder Actor
	void SetConstructorPiezaBase(AActor* Constructor);

	//Get the Pieza of the Builder
	class APieces* GetPiezaBase();
};
