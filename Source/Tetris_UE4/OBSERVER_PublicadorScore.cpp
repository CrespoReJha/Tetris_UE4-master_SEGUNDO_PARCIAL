// Fill out your copyright notice in the Description page of Project Settings.


#include "OBSERVER_PublicadorScore.h"

void AOBSERVER_PublicadorScore::ScoreAlcanzado()
{
	NotifySubscribers();
}
