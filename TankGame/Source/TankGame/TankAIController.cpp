// Fill out your copyright notice in the Description page of Project Settings.



#include "TankGame.h"
#include "TankAIController.h"




void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledAITank = GetControlledAITank();
	if (!ControlledAITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController %s"), *ControlledAITank->GetName());
	}
}

ATank* ATankAIController::GetControlledAITank() const
{
	return Cast<ATank>(GetPawn());
}