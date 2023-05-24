// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPPCalcType.h"
#include "CPPCalcInfo.generated.h"

/**
 * 
 */
USTRUCT(BluePrintType)
struct FCPPCalcInfo
{
	GENERATED_BODY()

	ECPPCalcType type = ECPPCalcType::add;
	int32 numA = 2;
	int32 numB = 7;
};
