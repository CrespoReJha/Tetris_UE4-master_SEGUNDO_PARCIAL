// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FACTORY_Escenario.h"
#include "STATE_EstadoEscenario.h"
#include "STATE_ContrEstadoEscenario.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API ASTATE_ContrEstadoEscenario : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ASTATE_ContrEstadoEscenario();

private:

	ISTATE_EstadoEscenario* EstadoManana;
	ISTATE_EstadoEscenario* EstadoTarde;
	ISTATE_EstadoEscenario* EstadoNoche;
	ISTATE_EstadoEscenario* Estado; // almacena el estado

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	AFACTORY_Escenario* iniciar();
	void cambiarEscenario(AFACTORY_Escenario* _Escenario);
	void cambiarEstado(ISTATE_EstadoEscenario* _Estado);

	ISTATE_EstadoEscenario* getEstadoManana();
	ISTATE_EstadoEscenario* getEstadoTarde();
	ISTATE_EstadoEscenario* getEstadoNoche();
	ISTATE_EstadoEscenario* getEstado();
};
