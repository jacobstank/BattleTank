// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankBarrel.h"



void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//move the barrel the right amount this frame

	UE_LOG(LogTemp, Warning, TEXT("Barrel Elevate() called as speed: %f"), DegreesPerSecond);
	//Given a max elevation speed, and the frame time

}
