// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AgujeroDeGusano.h"
#include "Teletransportacion.generated.h"
UCLASS()
class ARKANOID_API ATeletransportacion : public AActor, public IAgujeroDeGusano
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeletransportacion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Update(class AEntrada* Entrada) override;

};
