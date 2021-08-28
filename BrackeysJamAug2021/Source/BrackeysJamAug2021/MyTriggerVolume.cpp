// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"

#define PrintString(String) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, String) 

AMyTriggerVolume::AMyTriggerVolume()
{
	//PrintString("Attached things");
	OnActorBeginOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapEnd);
}

void AMyTriggerVolume::BeginPlay()
{
	Player = (AMyCharacter*)GetWorld()->GetFirstPlayerController()->GetPawn();
}

void AMyTriggerVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == Player)
	{
		PrintString("You can now clean the item");
		Player->bInRangeOfObject = true;
		Player->DirtyObject = DirtyObject;
	}
	PrintString("Overlap Begin");
}

void AMyTriggerVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor == Player)
	{
		Player->bInRangeOfObject = false;
	}
	PrintString("Overlap End");
}
