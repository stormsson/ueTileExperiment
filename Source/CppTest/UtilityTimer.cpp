// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilityTimer.h"

UtilityTimer::UtilityTimer()
{
}

int64 UtilityTimer::unixTimeNow()
{
	FDateTime timeUtc = FDateTime::UtcNow();
	return timeUtc.ToUnixTimestamp() * 1000 + timeUtc.GetMillisecond();
}

void UtilityTimer::tick()
{
	TickTime = unixTimeNow();
}

int64 UtilityTimer::tock()
{
	TockTime = unixTimeNow();
	return TockTime - TickTime;
}

void UtilityTimer::tick(FString timerName)
{
	int64 TickTime = unixTimeNow();
	timers.Add(timerName, TickTime);
}

int64 UtilityTimer::tock(FString timerName)
{
	int64 TickTime = timers[timerName];
	int64 TockTime = unixTimeNow();
	timers.Remove(timerName);
	return TockTime - TickTime;
}