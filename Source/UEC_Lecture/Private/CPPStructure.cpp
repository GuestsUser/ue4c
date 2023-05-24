// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPStructure.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "CPPFunction.h"
#include "CPPCalcInfo.h"

// Sets default values
ACPPStructure::ACPPStructure()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPPStructure::BeginPlay()
{
	Super::BeginPlay();
	PrintCaluc(FCPPCalcInfo{ ECPPCalcType::mul,3,4 }, 2.0);
}

// Called every frame
void ACPPStructure::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPPStructure::PrintCaluc(const FCPPCalcInfo& info, const float duration) {
	switch (info.type)
	{
	case ECPPCalcType::add:
	{
		// Add(‘«‚µŽZ)‚Ìˆ—
		// ’l“n‚µ
		int32 ResultAdd = ACPPFunction::Sum(info.numA, info.numB);
		FString StrResultAdd = FString::Printf(TEXT("%d"), ResultAdd);
		UKismetSystemLibrary::PrintString(this, StrResultAdd, true, true, FColor::Red, duration);
		break;
	}
	case ECPPCalcType::sub:
	{
		// Subtract(ˆø‚«ŽZ)‚Ìˆ—
		int32 ResultSubtract = info.numA - info.numB;
		FString StrResultSubtract = FString::Printf(TEXT("%d"), ResultSubtract);
		UKismetSystemLibrary::PrintString(this, StrResultSubtract, true, true, FColor::Yellow, duration);

		break;
	}
	case ECPPCalcType::mul:
	{
		// Multiply(Š|‚¯ŽZ)‚Ìˆ—
		int32 ResultMultiply = info.numA * info.numB;
		FString StrResultMultiply = FString::Printf(TEXT("%d"), ResultMultiply);
		UKismetSystemLibrary::PrintString(this, StrResultMultiply, true, true, FColor::Green, duration);

		break;
	}
	case ECPPCalcType::div:
	{
		// Divide(Š„‚èŽZ)‚Ìˆ—(int > float)
		int32 ResultDivide = info.numA / info.numB;
		FString StrResultDivide = FString::Printf(TEXT("%f"), ResultDivide);
		UKismetSystemLibrary::PrintString(this, StrResultDivide, true, true, FColor::Blue, duration);

		break;
	}
	}
}
