// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class CPPTEST_API UtilityTimer
{
public:
	UtilityTimer();

		int64 TickTime = 0;
		int64 TockTime = 0;

		TMap<FString, int64> timers;
	
		int64 unixTimeNow();

		void tick();
		void tick(FString timerName);

		int64 tock();
		int64 tock(FString timerName);
};
