// Fill out your copyright notice in the Description page of Project Settings.


#include "DECORATOR_PiezaRotante.h"

// Sets default values
ADECORATOR_PiezaRotante::ADECORATOR_PiezaRotante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RotacionZ = 0.0;
}

// Called when the game starts or when spawned
void ADECORATOR_PiezaRotante::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, TEXT("SE CREA LA PIEZA ROTADORA"));
	
	FTransform SpawnLocation;
	Pieza = GetWorld()->SpawnActor<APieces>(APieces::StaticClass(), SpawnLocation);
	Pieza->SpawnBlocks();
	Pieza->SetActorRelativeLocation(FVector(0.0, 110.0, 195.0));
}

// Called every frame
void ADECORATOR_PiezaRotante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FRotator NewRotation = Pieza->GetActorRotation() + FRotator(0.0, 0.0, RotacionZ);
	Pieza->SetActorRelativeRotation(NewRotation);
	
}

void ADECORATOR_PiezaRotante::SetRotacionZ(float _Z)
{
	//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Blue, TEXT("La pieza rota -0.") + FString::FromInt(_Z * -100) + TEXT(" en el EJE Z"));
	RotacionZ = _Z;
}

float ADECORATOR_PiezaRotante::GetRotacionZ()
{
	return RotacionZ;
}

void ADECORATOR_PiezaRotante::SetObjeto(IDECORATOR_Interfaz* _Objeto)
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("DECORATOR_PiezaRotante no recibe objetos"));
}