// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPArray.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACPPArray::ACPPArray()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACPPArray::PrintHellow() {
	int sub = FMath::RandRange(0, message.Num());
	UKismetSystemLibrary::PrintString(this, message[sub], true, true, FColor::Cyan, 2.f);
}


// Called when the game starts or when spawned
void ACPPArray::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPPArray::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

