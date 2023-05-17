// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPComponent.generated.h"
class UPointLightComponent;
class UArrowComponent;
UCLASS()
class UEC_LECTURE_API ACPPComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPComponent();

	UPROPERTY(EditAnywhere) USceneComponent* defaultSceneRoot;
	UPROPERTY(EditAnywhere) UStaticMeshComponent* staticMesh;
	UPROPERTY(VisibleAnywhere) UArrowComponent* arrow;
	UPROPERTY(EditAnywhere) UPointLightComponent* light;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float duration = 10;
	FLinearColor color = FLinearColor(0.0, 0.66, 1);

};
