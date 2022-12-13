// Fill out your copyright notice in the Description page of Project Settings.


#include "Lugar.h"
#include "Paddle.h"
#include "Components/SphereComponent.h"

ALugar::ALugar()
{
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Agujero"));
	Sphere->SetSphereRadius(30.0f);
	Sphere->SetGenerateOverlapEvents(true);
	Sphere->SetCollisionProfileName(TEXT("OverlapAllDyamic"));
	Sphere->SetHiddenInGame(false);
	RootComponent = Sphere;
}

void ALugar::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ALugar::OverlapBegin);
}

void ALugar::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APaddle* Paddle = Cast<APaddle>(OtherActor);
	if (Paddle) {
		Paddle->Destroy();
		SetNewLocationPaddle();
	}
}

void ALugar::SetNewLocationPaddle()
{
	FVector location = FVector(0.0f, 0.0f, FMath::RandRange(350, 410));
	APaddle* Paddle = GetWorld()->SpawnActor<APaddle>(APaddle::StaticClass(), location, FRotator::ZeroRotator);
	NotifyTeletransport(location);
}


