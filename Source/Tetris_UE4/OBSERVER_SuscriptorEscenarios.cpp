// Fill out your copyright notice in the Description page of Project Settings.


#include "OBSERVER_SuscriptorEscenarios.h"

// Sets default values
AOBSERVER_SuscriptorEscenarios::AOBSERVER_SuscriptorEscenarios()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOBSERVER_SuscriptorEscenarios::BeginPlay()
{
	Super::BeginPlay();

	Escenario = GetWorld()->SpawnActor<ASTATE_ContrEstadoEscenario>(ASTATE_ContrEstadoEscenario::StaticClass());
	Escen = Escenario->iniciar();
	
}

// Called every frame
void AOBSERVER_SuscriptorEscenarios::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOBSERVER_SuscriptorEscenarios::Destroyed()
{
	if (!PublicadorScore) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): ClockTower is NULL, make sure it's initialized."));
		return;
	}
	//Unsubscribe from the Clock Tower if it's destroyed
	PublicadorScore->UnSubscribe(this);
}

void AOBSERVER_SuscriptorEscenarios::Update(AOBSERVER_Publicador* Publisher)
{
	//Accion
	//STATE
	Escenario->cambiarEscenario(Escen);
}

void AOBSERVER_SuscriptorEscenarios::SetPublicadorScore(AOBSERVER_PublicadorScore* _PublicadorScore)
{
	if (!_PublicadorScore) {
		UE_LOG(LogTemp, Error, TEXT("SetClockTower(): myClockTower is NULL, make sure it's initialized."));
		return;
	}
	//Set the Clock Tower and Subscribe to that
	PublicadorScore = _PublicadorScore;
	PublicadorScore->Subscribe(this);
}

