// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Entrada.h"
#include "Lugar.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ALugar : public AEntrada
{
	GENERATED_BODY()

public:

	ALugar();

private:
		//La caja overlap
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* Sphere;

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
		void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
public:

	//Establece la nueva locacion del paddle
	void SetNewLocationPaddle();

};
