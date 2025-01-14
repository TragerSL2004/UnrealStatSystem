// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EquipmentDA.h"
#include "StatsDA.generated.h"

class USkeletalMesh;
class UUserWidget;
class UEquipmentDA;
/**
 * 
 */
UCLASS()
class STATSYSTEMDEMO_API UStatsDA : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	FText ObjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float MaxHealth = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	float Health = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	TArray<FString> StatsNames = {"UnassignedStat"};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	TArray<int> StatsValues = {0};

private:
	UFUNCTION()
	int AddValueToStat(int NewValue, TArray<int> List, int StatIndex);

	UFUNCTION()
	int SubtractValueFromStat(int NewValue, TArray<int> List, int StatIndex);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	int EquipItem(UEquipmentDA* Item, UStatsDA* ChangedStats);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	int UnequipItem(UEquipmentDA* Item, UStatsDA* ChangedStats);
};
