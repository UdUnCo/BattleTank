// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "BattleTank.h"

//if virtual the children can override / extend the methode
void ATankAIController::BeginPlay()
{
	Super::BeginPlay(); //Call parent BeginPlay first

	auto ControlledTank = GetAITank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIControler not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIControler possesing: %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankAIController::GetAITank() const
{
	return Cast<ATank>(GetPawn());
}


