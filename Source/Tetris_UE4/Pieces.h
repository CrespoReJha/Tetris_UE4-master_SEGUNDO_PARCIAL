// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.h"
#include "BUILDER_PiezaInterfaz.h"
#include <vector>
#include <functional>
#include "Pieces.generated.h"

UCLASS()
class TETRIS_UE4_API APieces : public AActor, public IBUILDER_PiezaInterfaz
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieces();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY()
    class USceneComponent* SceneComponent;
    
    UPROPERTY()
    class USoundCue* RotateSoundCue;
    
    UPROPERTY()
    class USoundCue* MoveLeftRightSoundCue;
    
    UPROPERTY()
    TArray<class UMaterial*> Colors;
    
    void DrawDebugLines();
    
    virtual void TestRotate() override;
    virtual void MoveLeft() override;
    virtual void MoveRight() override;
    virtual bool MoveDown(bool PlaySound=true) override;
    virtual void Dismiss() override;
    virtual bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck) override;
    virtual void SpawnBlocks() override;
private:
    TArray<ABlock*> Blocks;
    
    //BUILDER
    int Index;
    int tipoColor;
    std::vector<std::vector<std::pair<float, float>>> tipoPieza =
    {

        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
        {{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        {{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        //{{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
    };

public:
    //BUILDER
    int GetIndex() const { return Index; } //para obtener el index
    void setColor(int _color) {
        tipoColor = _color; //para asignar el tipo de color
    }
    int getTipoColor() {
        return tipoColor; //para obtener el tipo de color
    }
    void SetTipoPieza(std::vector<std::vector<std::pair<float, float>>> _tipoPieza) {
        tipoPieza = _tipoPieza; //para asignar el tipo de pieza
    }
};
