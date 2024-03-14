// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AvataryugRuntimeSetting.generated.h"

/**
 * 
 */
UCLASS(config = Engine, defaultconfig)
class AVATARYUG_API UAvataryugRuntimeSetting : public UObject
{
	GENERATED_BODY()
	public:
    UAvataryugRuntimeSetting();

     // Game Title ID
    UPROPERTY(EditAnywhere, config, Category = Settings)
    FString ProjectID;

    // URL endpoint of the o  production environment
    UPROPERTY(EditAnywhere, config, Category = Settings)
    FString SecrectKey;

    UPROPERTY(EditAnywhere, config, Category = Settings)
    FString SecrectIV;

   
};
