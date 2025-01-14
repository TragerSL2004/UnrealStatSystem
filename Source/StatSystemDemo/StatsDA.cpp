// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsDA.h"

void UStatsDA::AddValueToStat(int NewValue, TArray<int> List, int StatIndex)
{
	List[StatIndex] += NewValue;
}

void UStatsDA::SubtractValueFromStat(int Value, TArray<int> List, int StatIndex)
{
	List[StatIndex] -= Value;
}

void UStatsDA::EquipItem(UEquipmentDA* Item)
{
	for (int i = 0; i < Item->MaxValueChanges; i++)
	{
		AddValueToStat(Item->GetValueChanges(i), StatsValues, Item->GetStatIndexes(i));
	}
}

void UStatsDA::UnequipItem(UEquipmentDA* Item)
{
	for (int i = 0; i < Item->MaxValueChanges; i++)
	{
		SubtractValueFromStat(Item->GetValueChanges(i), StatsValues, Item->GetStatIndexes(i));
	}
}
