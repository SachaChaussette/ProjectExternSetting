// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "GraphicsGameUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTEXTERNSETTING_API UGraphicsGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
private:

	UPROPERTY(Config)
	float gammaValue = 0.0f;
	UPROPERTY(Config)
	bool rayTracingShadows = false;

public:

	UFUNCTION(BlueprintCallable) static UGraphicsGameUserSettings* GetGraphicsGameUserSettings();

	UFUNCTION(BlueprintCallable) void SetGammaValue(const float _gammaValue);
	UFUNCTION(BlueprintPure) float GetGammaValue() const;

	UFUNCTION(BlueprintCallable) void SetRayTracingShadows(const bool _rayTracingShadows);
	UFUNCTION(BlueprintPure) bool GetRayTracingShadows() const;


};
