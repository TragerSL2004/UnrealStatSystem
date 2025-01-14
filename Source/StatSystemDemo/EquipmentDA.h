// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EquipmentDA.generated.h"

/**
 * 
 */
UCLASS()
class STATSYSTEMDEMO_API UEquipmentDA : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FText EquipmentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StatsChanges, meta = (AllowPrivateAccess = "true"))
	TArray<int> StatIndexes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = StatsChanges, meta = (AllowPrivateAccess = "true"))
	TArray<int> ValueChanges;


public:
	UPROPERTY()
	int MaxValueChanges = ValueChanges.Max();

	UPROPERTY()
	int MaxStatIndexes = StatIndexes.Max();
	
	UFUNCTION()
	int GetStatIndexes(int Index) { return StatIndexes[Index]; };

	UFUNCTION()
	int GetValueChanges(int Index) { return ValueChanges[Index]; };
};
