// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::BeginPlay() 
{
	
}

void AMyPlayerController::OnPossess(APawn* InPawn)
{
	FString name = InPawn->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Possessed Pawn %s"), *name);
}

void AMyPlayerController::PlayerTick(float DeltaTime)
{
	if (WasInputKeyJustPressed(EKeys::F) && InRangeOfDirtyObject)
	{

	}
}
