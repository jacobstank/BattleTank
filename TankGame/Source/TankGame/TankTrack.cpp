// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankTrack.h"




void UTankTrack::SetThrottle(float throttle)
{
	//auto Time = GetWorld()->GetTimeSeconds();
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s throttle: %f"), *Name, throttle);
}
