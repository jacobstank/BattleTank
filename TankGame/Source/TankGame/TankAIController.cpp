// Fill out your copyright notice in the Description page of Project Settings.



#include "TankGame.h"
#include "Tank.h"
#include "TankAIController.h"




void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	
	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController can not find a Player tank"));
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("AIController found player: %s"), *PlayerTank->GetName());
	}


}

ATank* ATankAIController::GetControlledAITank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr; }
	return Cast<ATank>(PlayerPawn);
	//return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn()); //wrong code
}

//called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetPlayerTank())
	{
		// TODO move towards player
		
		//aim towards the player
		GetControlledAITank()->AimAt(GetPlayerTank()->GetActorLocation());


		//Fire if ready
	}

}