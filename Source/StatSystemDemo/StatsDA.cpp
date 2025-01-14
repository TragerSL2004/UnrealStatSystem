// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsDA.h"

int UStatsDA::AddValueToStat(int NewValue, TArray<int> List, int StatIndex)
{
	int result = List[StatIndex] + NewValue;
	return result;
}

int UStatsDA::SubtractValueFromStat(int Value, TArray<int> List, int StatIndex)
{
	int result = List[StatIndex] - Value;
	return result;
}

int UStatsDA::EquipItem(UEquipmentDA* Item, UStatsDA* ChangedStats)
{
	int result;
		for (int i = 0; i < Item->MaxStatIndexes - 1; i++)
		{
			result = ChangedStats->StatsValues[Item->GetStatIndexes(i)] += Item->GetValueChanges(i);
		}
	return result;
}

int UStatsDA::UnequipItem(UEquipmentDA* Item, UStatsDA* ChangedStats)
{
	int result;
		for (int i = 0; i < Item->MaxStatIndexes - 1; i++)
		{
			ChangedStats->StatsValues[Item->GetStatIndexes(i)] -= Item->GetValueChanges(i);
			result = ChangedStats->StatsValues[i];
		}
	return result;
}
