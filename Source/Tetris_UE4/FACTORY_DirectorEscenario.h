// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FACTORY_Escenario.h"
#include "FACTORY_DirectorEscenario.generated.h"

UCLASS()
class TETRIS_UE4_API AFACTORY_DirectorEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFACTORY_DirectorEscenario();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual AFACTORY_Escenario* EstablecerMaterial(FString Categoria) PURE_VIRTUAL(AFACTORY_DirectorEscenario::EstablecerMaterial, return nullptr;)

	AFACTORY_Escenario* CrearEscenario(FString Categoria);
};
