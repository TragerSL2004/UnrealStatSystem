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
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true"))
	TArray<FString> StatsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	USkeletalMesh* Model;

private:
	UFUNCTION(BlueprintCallable)
	void AddStatToList(int NewStat);

	//UFUNCTION(CPF_BlueprintCallable)
	//void AddEquipmentToList(class UEquipmentComponent* NewEquipment);

	//UFUNCTION(CPF_BlueprintCallable)
	//void EquipItem(class UEquipmentComponent* Item);

	//UFUNCTION(CPF_BlueprintCallable)
	//void UnequipItem(class UEquipmentComponent* Item);
};
