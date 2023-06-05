// Fill out your copyright notice in the Description page of Project Settings.


#include "OBSERVER_Publicador.h"

// Sets default values
AOBSERVER_Publicador::AOBSERVER_Publicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOBSERVER_Publicador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOBSERVER_Publicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOBSERVER_Publicador::Subscribe(AActor* Subscriber)
{
	//Add the passed Subscriber
	Subscribers.Add(Subscriber);
}
void AOBSERVER_Publicador::UnSubscribe(AActor* SubscriberToRemove)
{
	//Remove the passed Subscriber
	Subscribers.Remove(SubscriberToRemove);
}
void AOBSERVER_Publicador::NotifySubscribers()
{
	//Loop for each Subscriber
	for (AActor* Actor : Subscribers)
	{
		//Cast each of them to a concrete Subscriber
		IOBSERVER_Suscriptor* Sub = Cast<IOBSERVER_Suscriptor>(Actor);
		if (Sub)
		{
			//Notify each of them that something has changed, so they can execute their own routine
			Sub->Update(this);
		}
	}
}