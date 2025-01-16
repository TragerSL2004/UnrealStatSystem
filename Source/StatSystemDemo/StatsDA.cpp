// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsDA.h"

void UStatsDA::EquipItem(UEquipmentDA* Item, TArray<int> ValueChanges, TArray<int> StatIndexes)
{
	for (int stat: StatIndexes)
	{
		for (int value: ValueChanges)
		{
			StatsValues[stat] += value;
		}
	}
}

void UStatsDA::UnequipItem(UEquipmentDA* Item, TArray<int> ValueChanges, TArray<int> StatIndexes)
{
	for (int stat: StatIndexes)
	{
		for (int value: ValueChanges)
		{
			StatsValues[stat] -= value;
		}
	}
}
