// Fill out your copyright notice in the Description page of Project Settings.


#include "Componentes/BP_ComponenteSalud.h"


// Sets default values for this component's properties
UBP_ComponenteSalud::UBP_ComponenteSalud()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBP_ComponenteSalud::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBP_ComponenteSalud::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UBP_ComponenteSalud::GetSaludMaxima()
{
	return SaludMaxima;
}

//void UBP_ComponenteSalud::DisminuirSalud()
//{
//	
//}

