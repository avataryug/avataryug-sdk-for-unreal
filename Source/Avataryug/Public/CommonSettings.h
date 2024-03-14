// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SessionToken.h"
#include "CommonSettings.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UCommonSettings : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static FString GetToken();
	static void SetToken(FString token);
	static FString BaseUrl();
	static FString ProjectID();
};
