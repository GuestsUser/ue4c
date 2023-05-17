// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Components/ArrowComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
ACPPComponent::ACPPComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	defaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("name"));
	RootComponent = defaultSceneRoot;

	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("smc"));
	staticMesh->SetStaticMesh(LoadObject<UStaticMesh>(NULL, TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"), NULL, LOAD_None, NULL));
	staticMesh->SetupAttachment(RootComponent);

	arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("arrowCmp"));
	arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));
	arrow->SetupAttachment(RootComponent);

	light = CreateDefaultSubobject<UPointLightComponent>(TEXT("lightCmp"));
	light->SetRelativeLocation(FVector(130.0f, 0.0f, 0.0f));
	light->SetupAttachment(RootComponent);

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

