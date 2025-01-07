// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StatsDA.generated.h"

class USkeletalMesh;
class UUserWidget;
class UEquipmentComponent;
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
	//UFUNCTION(BlueprintCallable)
	//void AddStatToList(FString NewStat, TArray<FString> List);

	//UFUNCTION(BlueprintCallable)
	//void AddValueToStat(int NewValue, TArray<int> List, int StatIndex);

	//UFUNCTION(CPF_BlueprintCallable)
	//void AddEquipmentToList(class UEquipmentComponent* NewEquipment);

	//UFUNCTION(CPF_BlueprintCallable)
	//void EquipItem(class UEquipmentComponent* Item);

	//UFUNCTION(CPF_BlueprintCallable)
	//void UnequipItem(class UEquipmentComponent* Item);
};
