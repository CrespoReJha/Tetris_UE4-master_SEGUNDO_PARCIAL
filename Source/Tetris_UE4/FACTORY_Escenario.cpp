// Fill out your copyright notice in the Description page of Project Settings.


#include "FACTORY_Escenario.h"

// Sets default values
AFACTORY_Escenario::AFACTORY_Escenario()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EscenarioMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscenarioMesh"));
	RootComponent = EscenarioMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EscenarioMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));

	if (EscenarioMeshAsset.Succeeded())
	{
		EscenarioMesh->SetStaticMesh(EscenarioMeshAsset.Object);

		EscenarioMesh->SetWorldScale3D(FVector(5.0f, 3.0f, 2.5f));

		UMaterialInterface* materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/tetris_Mat.tetris_Mat'"));
		EscenarioMesh->SetMaterial(0, materialEscenarioManana);
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Escenario"));
	}

	/*materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/tetris_Mat.tetris_Mat'"));
	EscenarioMesh->SetMaterial(0, materialEscenarioManana);*/

}

// Called when the game starts or when spawned
void AFACTORY_Escenario::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFACTORY_Escenario::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
