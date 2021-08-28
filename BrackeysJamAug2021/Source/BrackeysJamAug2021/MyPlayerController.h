// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BRACKEYSJAMAUG2021_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	void BeginPlay() override;
	void OnPossess(APawn* InPawn) override;
	void PlayerTick(float DeltaTime) override;
public:
	bool InRangeOfDirtyObject;
};
