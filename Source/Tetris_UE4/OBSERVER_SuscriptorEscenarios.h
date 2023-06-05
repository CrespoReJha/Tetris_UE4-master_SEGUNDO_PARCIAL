// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OBSERVER_Suscriptor.h"
#include "OBSERVER_PublicadorScore.h"
#include "STATE_ContrEstadoEscenario.h"
#include "FACTORY_Escenario.h"
#include "OBSERVER_SuscriptorEscenarios.generated.h"

UCLASS()
class TETRIS_UE4_API AOBSERVER_SuscriptorEscenarios : public AActor, public IOBSERVER_Suscriptor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOBSERVER_SuscriptorEscenarios();

private:
	//The Clock Tower of this Subscriber
	UPROPERTY()
		AOBSERVER_PublicadorScore* PublicadorScore;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	//STATE
	UPROPERTY()
		ASTATE_ContrEstadoEscenario* Escenario;

	UPROPERTY()
		AFACTORY_Escenario* Escen;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Destroyed() override;

	virtual void Update(class AOBSERVER_Publicador* Publisher) override;

	void SetPublicadorScore(AOBSERVER_PublicadorScore* _PublicadorScore);
};
