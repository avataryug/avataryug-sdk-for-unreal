// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SessionToken.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API USessionToken : public USaveGame
{
	GENERATED_BODY()
public:
	USessionToken();
	UPROPERTY(EditAnywhere)
	FString Token;
};
