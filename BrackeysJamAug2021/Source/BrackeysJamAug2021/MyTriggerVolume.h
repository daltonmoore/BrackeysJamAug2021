// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "MyCharacter.h"
#include "MyTriggerVolume.generated.h"

/**
 * 
 */
UCLASS()
class BRACKEYSJAMAUG2021_API AMyTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()
public:
	AMyTriggerVolume();

	AMyCharacter* Player;
	
protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
