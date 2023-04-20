// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
ACPPComponent::ACPPComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("name"));
	RootComponent = defaultSceneRoot;

	staticMesh->SetStaticMesh(LoadObject<UStaticMesh>(NULL, TEXT("/Game/CPP_BP/Meshes/SM_SampleCube"), NULL, LOAD_None, NULL));
	staticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACPPComponent::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_FloatToString(duration), true, true, color, duration);

}

// Called every frame
void ACPPComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

