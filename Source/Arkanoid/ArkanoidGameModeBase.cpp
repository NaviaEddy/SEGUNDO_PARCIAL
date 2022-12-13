// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"
#include "Lugar.h"

void AArkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawn del agujero de gusano
	FVector spawn(0.0f, 0.0f, 190.0f);
	ALugar* Teletransport = GetWorld()->SpawnActor<ALugar>(ALugar::StaticClass(), spawn, FRotator::ZeroRotator);
}
