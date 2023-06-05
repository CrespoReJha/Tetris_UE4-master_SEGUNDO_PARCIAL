// Fill out your copyright notice in the Description page of Project Settings.


#include "ADAPTER_AdaptadorMovimiento.h"

UADAPTER_AdaptadorMovimiento::UADAPTER_AdaptadorMovimiento() : 
	Super()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	SetLimitesMovimiento(0.0f, 0.0f, 0.0f);
}

void UADAPTER_AdaptadorMovimiento::SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento)
{
	AnchoMovimiento = _YMovimiento;
	AltoMovimiento = _ZMovimiento;
	ProfundidadMovimiento = _XMovimiento;
}