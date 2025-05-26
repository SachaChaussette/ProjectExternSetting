// Fill out your copyright notice in the Description page of Project Settings.


#include "GraphicsGameUserSettings.h"
#include "Kismet/KismetTextLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UGraphicsGameUserSettings* UGraphicsGameUserSettings::GetGraphicsGameUserSettings()
{
	return Cast<UGraphicsGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UGraphicsGameUserSettings::SetGammaValue(const float _gammaValue)
{
	gammaValue = _gammaValue;
	const FString& _result = "gamma " + FString::SanitizeFloat(gammaValue);
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), *_result);
}

float UGraphicsGameUserSettings::GetGammaValue() const
{
	return gammaValue;
}

void UGraphicsGameUserSettings::SetRayTracingShadows(const bool _rayTracingShadows)
{
	rayTracingShadows = _rayTracingShadows;
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("r.RayTracing.Shadow " + rayTracingShadows));
}

bool UGraphicsGameUserSettings::GetRayTracingShadows() const
{
	return rayTracingShadows;
}

