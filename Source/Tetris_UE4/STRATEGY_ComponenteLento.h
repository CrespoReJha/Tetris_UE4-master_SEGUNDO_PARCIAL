// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STRATEGY_ComponenteLento.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TETRIS_UE4_API USTRATEGY_ComponenteLento : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USTRATEGY_ComponenteLento();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
		float RadioMovimiento;

	float AnchoMovimiento;
	float AltoMovimiento;
	float ProfundidadMovimiento;

	float TiempoAcumulado;
	float TiempoLimite;
	//float TiempoLimiteLimite;
	float TiempoTranscurrido = 0.0f;
	bool EjecutarAccion = true;
		
};
