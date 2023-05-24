// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPArray.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPArray : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPArray();
	TArray<FString> message = { TEXT("C++ Hello World!"), TEXT("?çD ê¢äE!"), TEXT("Bonjour le monde!"), TEXT("Hallo Welt!"), TEXT("Ç±ÇÒÇ…ÇøÇÕê¢äE!") };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void PrintHellow();
};
