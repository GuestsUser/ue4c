// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPInputEvent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACPPInputEvent::ACPPInputEvent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPInputEvent::BeginPlay()
{
	SetupInput();
	Super::BeginPlay();
	
}

// Called every frame
void ACPPInputEvent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPPInputEvent::SetupInput()
{
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	InputComponent->BindKey(EKeys::H, IE_Pressed, this, &ACPPInputEvent::PushH);
	InputComponent->BindKey(EKeys::H, IE_Released, this, &ACPPInputEvent::PullH);

	InputComponent->BindAction("Jump", IE_Pressed, this, &ACPPInputEvent::PushH);
}

void ACPPInputEvent::PushH()
{
	UKismetSystemLibrary::PrintString(this, "pressed", true, true, FColor::Cyan, 2.f);

}

void ACPPInputEvent::PullH()
{
	UKismetSystemLibrary::PrintString(this, "released", true, true, FColor::Cyan, 2.f);

}

