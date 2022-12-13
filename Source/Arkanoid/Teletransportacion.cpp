// Fill out your copyright notice in the Description page of Project Settings.


#include "Teletransportacion.h"

// Sets default values
ATeletransportacion::ATeletransportacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeletransportacion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeletransportacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeletransportacion::Update(AEntrada* Entrada)
{
}

