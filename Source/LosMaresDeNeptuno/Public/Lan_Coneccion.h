// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../UE_5.6/Engine/Source/Developer/CQTest/Public/ObjectBuilder.h"
#include "../../../../../UE_5.6/Engine/Source/Runtime/CoreUObject/Public/UObject/ObjectPtr.h"

#include "Lan_Coneccion.generated.h"

class UButton;
class UTextBlock;
{
public:
	
};
/**
 * 
 */
UCLASS()
class LOSMARESDENEPTUNO_API ULan_Coneccion : public UUserWidget
{
	GENERATED_BODY()



public:
	virtual void NativeOnInitialize() override;

private:
 UPROPERTY(meta=(BindWidget))
 TObjectPtr<UButton>Button_Hostear;
 
 UPROPERTY(meta=(BindWidget))
	TObjectPtr<UButton>Button_Unirse;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UEditableTextBox>UEditableTextBox_DireccionIP;

	UPROPERTY(EditInstanceOnly)
	TSoftObjectPtr<UWorld>Level;
	UFUNCTION()
	void OnButton_HostearClicked();
	UFUNCTION()
	void onButton_Unirse_Clicked();
	
};
