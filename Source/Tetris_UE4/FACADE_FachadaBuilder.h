// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pieces.h"
#include "FACADE_FachadaBuilder.generated.h"

UCLASS()
class TETRIS_UE4_API AFACADE_FachadaBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFACADE_FachadaBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	APieces* ObtenerPiezaBuilder();

	int ObtenerTipoPieza();

private:

	APieces* PiezaBuilder;
	int TipoPieza;

    //BUILDER
    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasColoridas* ConstructorPiezaColorida;

    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasGrandes* ConstructorPiezaGrande;

    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasMetalicas* ConstructorPiezaMetalica;

    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasTetrominas* ConstructorPiezaTetromino;

    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasHuecas* ConstructorPiezasHuecas;

    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_ConstrPiezasPequenas* ConstructorPiezasPequenas;

    //Director BUILDER
    UPROPERTY(VisibleAnywhere, Category = "Main")
        class ABUILDER_DirectorPiezas* DirectorPieza;
};
