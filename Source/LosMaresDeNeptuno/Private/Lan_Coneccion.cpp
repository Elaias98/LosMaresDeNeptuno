// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/Lan_Coneccion.h"

#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void ULan_Coneccion::NativeOnInitialize()
{
	Button_Hostear->OnClicked.AddDynamic(this,&ThisClass::OnButton_HostearClicked);
	Button_Unirse->OnClicked.AddDynamic(this,&ThisClass::OnButton_HostearClicked);

	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(true);
	
}

void ULan_Coneccion::OnButton_HostearClicked()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	UGameplayStatics::OpenLevelBySoftObjectPtr(this,Level,true,TEXT("listen"));
	
}

void ULan_Coneccion::onButton_Unirse_Clicked()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);
	const FString IP=UEditableTextBox_DireccionIP->GetText().ToString();
	UGameplayStatics::OpenLevel(this,));
}
