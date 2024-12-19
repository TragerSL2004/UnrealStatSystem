// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsDA.h"

void UStatsDA::AddStatToList(int NewStat)
{
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Stats, meta = (AllowPrivateAccess = "true", MakeEditWidget))
	NewStat;
}

//void UStatsDA::AddEquipmentToList(UEquipmentComponent* NewEquipment)
//{
//	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Equipment, meta = (AllowPrivateAccess = "true", MakeEditWidget))
//	NewEquipment;
//}
