// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/Pawn.h"
#include "Tank.generated.h" //put new lines above here



UCLASS()
class TANKGAME_API ATank : public APawn
{
	GENERATED_BODY()

//public:

	//UFUNCTION(BlueprintCallable, Category = Setup)
	//void SetBarrelRefernce(UTankBarrel* BarrelToSet);

	//UFUNCTION(BlueprintCallable, Category = Setup)
	//void SetTurretRefernce(UTankTurret* TurretToSet);



//private:

	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;
	

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;


	
};
