// Fill out your copyright notice in the Description page of Project Settings.


#include "BUILDER_DirectorPiezas.h"

// Sets default values
ABUILDER_DirectorPiezas::ABUILDER_DirectorPiezas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABUILDER_DirectorPiezas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABUILDER_DirectorPiezas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABUILDER_DirectorPiezas::SetConstructorPiezaBase(AActor* Constructor)
{
	//Cast the passed Actor and set the Builder
	ConstructorPieza = Cast<IBUILDER_ConstructorPiezas>(Constructor);
	if (!ConstructorPieza) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetConstructorPiezaBase(): The Actor is not a ConstructorPieza! Are you sure that the Actor implements that interface ? "));
	}
}

APieces* ABUILDER_DirectorPiezas::GetPiezaBase()
{
	if (ConstructorPieza)
	{
		//Returns Pieza of the Builder
		return ConstructorPieza->GetPiezaBase();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetPiezaBase(): Return nullptr"));
	return nullptr;
}

void ABUILDER_DirectorPiezas::ConstruirPiezaBase()
{
	//Log if the Builder is NULL
	if (!ConstructorPieza) {
		UE_LOG(LogTemp, Error, TEXT("ConstruirPiezaBase(): ConstructorPieza is NULL, make sure it's initialized."));
		return;
	}
	//Creates las piezas
	ConstructorPieza->ConstruirColores();
	ConstructorPieza->ConstruirTipoPieza();

}