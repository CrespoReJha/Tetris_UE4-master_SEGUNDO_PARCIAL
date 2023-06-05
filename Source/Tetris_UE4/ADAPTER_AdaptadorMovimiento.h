// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ADAPTER_ComponenteMovimiento.h"
#include "ADAPTER_MovimientoInterfaz.h"
#include "ADAPTER_AdaptadorMovimiento.generated.h"

/**
 * 
 */
UCLASS()
class TETRIS_UE4_API UADAPTER_AdaptadorMovimiento : public UADAPTER_ComponenteMovimiento, public IADAPTER_MovimientoInterfaz
{
	GENERATED_BODY()

public:

	UADAPTER_AdaptadorMovimiento();
	void SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento);

};
