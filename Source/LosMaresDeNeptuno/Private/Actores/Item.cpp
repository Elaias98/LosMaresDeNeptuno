// Fill out your copyright notice in the Description page of Project Settings.


#include "Actores/Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	MostrarMensaje();
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::MostrarMensaje()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(
			-1,
			5.f,
			FColor::Blue,
			FString::Printf(TEXT("Hola"))
		);
	}
}

