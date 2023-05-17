// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPFlowControlSwitchEnum.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "CPPCalcType.h"
#include "CPPFunction.h"

// Sets default values
ACPPFlowControlSwitchEnum::ACPPFlowControlSwitchEnum()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPFlowControlSwitchEnum::BeginPlay()
{
	ECPPCalcType process = ECPPCalcType::div;
	float a = 6;
	float b = 12;
	float ans = 0;

	switch (process)
	{
	case ECPPCalcType::add:
		ans = ACPPFunction::Sum(a, b);
		break;
	case ECPPCalcType::sub:
		ans = a - b;
		break;
	case ECPPCalcType::mul:
		ans = a * b;
		break;
	case ECPPCalcType::div:
		ans = a / b;
		break;
	}
	UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_FloatToString(ans), true, true, FColor::Cyan, 2.f);

	Super::BeginPlay();
	
}

// Called every frame
void ACPPFlowControlSwitchEnum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

