// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BP_ComponenteSalud.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOSMARESDENEPTUNO_API UBP_ComponenteSalud : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBP_ComponenteSalud();


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	/*void DisminuirSalud();*/
	int GetSaludMaxima();

	UPROPERTY(EditAnywhere)
	float SaludMaxima;

	UPROPERTY(EditAnywhere)
	int SaludActual;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
};
