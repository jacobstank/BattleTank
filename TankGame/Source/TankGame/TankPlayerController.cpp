// Fill out your copyright notice in the Description page of Project Settings.

#include "TankGame.h"
#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay() 
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController is Possessing %s"), *ControlledTank->GetName());
	}
}


//tick
void ATankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("Player Controller Ticking!")); // checks to make sure that this method is ticking or running every frame
	AimTowardsCrossHair();

}

void ATankPlayerController::AimTowardsCrossHair()
{
	if (!GetControlledTank()) { return; }
	
	//get world location if linetrace through crosshair
	//if hits the landscape
		//tell controlled tank to aim at this point

}




ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


