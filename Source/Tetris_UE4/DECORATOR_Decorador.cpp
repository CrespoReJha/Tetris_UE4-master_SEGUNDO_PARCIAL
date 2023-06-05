// Fill out your copyright notice in the Description page of Project Settings.


#include "DECORATOR_Decorador.h"

// Sets default values
ADECORATOR_Decorador::ADECORATOR_Decorador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADECORATOR_Decorador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADECORATOR_Decorador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADECORATOR_Decorador::SetRotacionZ(float _Z)
{
	//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Blue, TEXT("La pieza rota -0.") + FString::FromInt((Objeto->GetRotacionZ() + _Z) * -10) + TEXT(" en el EJE Z"));
	Objeto->SetRotacionZ(Objeto->GetRotacionZ() + _Z);
}

float ADECORATOR_Decorador::GetRotacionZ()
{
	return Objeto->GetRotacionZ();
}

void ADECORATOR_Decorador::SetObjeto(IDECORATOR_Interfaz* _Objeto)
{
	Objeto = _Objeto;
}