// Fill out your copyright notice in the Description page of Project Settings.


#include "DirtyObject.h"

// Sets default values for this component's properties
UDirtyObject::UDirtyObject()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDirtyObject::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Player = (AMyPlayerController*)GetWorld()->GetFirstPlayerController();
	//PressurePlate->.OnActorEndOverlap..__Internal_AddDynamic(this, &UDirtyObject::OnOverlapEnd);
}


// Called every frame
void UDirtyObject::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (PressurePlate->IsOverlappingActor(Player->GetPawn()))
	{
		//UE_LOG(LogTemp, Warning, TEXT("Can interact with dirty object"));
		Player->InRangeOfDirtyObject = true;
	}
}

void UDirtyObject::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Player->InRangeOfDirtyObject = false;
}

