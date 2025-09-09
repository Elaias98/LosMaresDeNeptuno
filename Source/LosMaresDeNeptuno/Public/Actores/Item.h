// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class LOSMARESDENEPTUNO_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
	virtual void Tick(float DeltaTime) override;

	int salud;

	UFUNCTION()
	void MostrarMensaje();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

 
