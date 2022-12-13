// Fill out your copyright notice in the Description page of Project Settings.


#include "Entrada.h"
#include "Components/SphereComponent.h"
#include "Paddle.h"
// Sets default values
AEntrada::AEntrada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEntrada::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEntrada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEntrada::NotifyTeletransport(FVector location)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("El paddle se teletransporto a: %s"), *location.ToString()));
}

