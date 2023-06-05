// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STATE_EstadoEscenario.h"
#include "STATE_EstadoTarde.generated.h"

UCLASS()
class TETRIS_UE4_API ASTATE_EstadoTarde : public AActor , public ISTATE_EstadoEscenario
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTATE_EstadoTarde();

private:

	UPROPERTY()
		class ASTATE_ContrEstadoEscenario* Escenario;

	UMaterialInterface* materialEscenarioManana;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void EstablecerEscenario(class AFACTORY_Escenario* _Escenario) override;
	virtual void SetEscenario(class ASTATE_ContrEstadoEscenario* _Escenario) override;

};
