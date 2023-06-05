// Fill out your copyright notice in the Description page of Project Settings.


#include "Tetris_UE4GameModeBase.h"
#include "Board.h"
#include "DECORATOR_PiezaRotante.h"
#include "DECORATOR_Interfaz.h"
#include "DECORATOR_Decorador.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"

ATetris_UE4GameModeBase::ATetris_UE4GameModeBase()
{
    DefaultPawnClass = ABoard::StaticClass();
}

void ATetris_UE4GameModeBase::BeginPlay()
{
    Super::BeginPlay();

    IDECORATOR_Interfaz* PiezaRotante = GetWorld()->SpawnActor<ADECORATOR_PiezaRotante>(ADECORATOR_PiezaRotante::StaticClass());
    IDECORATOR_Interfaz* Decorador = GetWorld()->SpawnActor<ADECORATOR_Decorador>(ADECORATOR_Decorador::StaticClass());
    PiezaRotante->SetRotacionZ(-0.5);
    Decorador->SetObjeto(PiezaRotante);
    Decorador->SetRotacionZ(-0.95);

    //CAMERA
    for(TActorIterator<ACameraActor> it(GetWorld()); it; ++it)
    {
        //UE_LOG(LogTemp, Warning, TEXT("Find camera: %s"), *(it->GetFName().ToString()));
        if(it->GetFName() == TEXT("BoardCamera"))
        {
            APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
            PC->SetViewTargetWithBlend(*it, 0.5);
            break;
        }
    }
}
