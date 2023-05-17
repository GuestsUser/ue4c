// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPFunction.h"

// Sets default values
ACPPFunction::ACPPFunction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPFunction::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPPFunction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACPPFunction::Sum(int32 a, int32 b)
{
	return a + b;
}

