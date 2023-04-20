// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPHellowWorld.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACPPHellowWorld::ACPPHellowWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPHellowWorld::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "C++ Hello World!", true, true, FColor::Cyan, 2.f);
}

// Called every frame
void ACPPHellowWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

