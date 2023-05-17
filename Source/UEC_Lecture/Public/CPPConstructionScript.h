// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPConstructionScript.generated.h"
class UPointLightComponent;
class UArrowComponent;
UCLASS()
class UEC_LECTURE_API ACPPConstructionScript : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ACPPConstructionScript();

	UPROPERTY(EditAnywhere) USceneComponent* defaultSceneRoot;
	UPROPERTY(EditAnywhere) UStaticMeshComponent* staticMesh;
	UPROPERTY(VisibleAnywhere) UArrowComponent* arrow;
	UPROPERTY(EditAnywhere) UPointLightComponent* light;


	UPROPERTY(EditAnywhere, Category = "PointLight") bool bIsVisible = false;
	UPROPERTY(EditAnywhere, Category = "PointLight") float Intensity = 500.0f;
	UPROPERTY(EditAnywhere, Category = "PointLight") FLinearColor color = FLinearColor::White;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
