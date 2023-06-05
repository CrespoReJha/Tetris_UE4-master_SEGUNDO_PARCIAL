// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DECORATOR_Interfaz.h"
#include "DECORATOR_Decorador.generated.h"

UCLASS()
class TETRIS_UE4_API ADECORATOR_Decorador : public AActor , public IDECORATOR_Interfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADECORATOR_Decorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	IDECORATOR_Interfaz* Objeto;

	virtual void SetRotacionZ(float _Z) override;
	virtual float GetRotacionZ() override;

	virtual void SetObjeto(IDECORATOR_Interfaz* _Objeto) override;
};
