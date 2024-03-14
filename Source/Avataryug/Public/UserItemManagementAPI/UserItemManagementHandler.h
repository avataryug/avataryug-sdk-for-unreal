// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonModels.h"
#include "UserItemManagementModels.h"
#include "UserItemManagementRequest.h"
#include "UserItemManagementHandler.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UUserItemManagementHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void AddVirtualCurrencyToUser(FAddVirtualCurrencyToUserRequest request, FOnAddVirtualCurrencyToUserResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void ConsumeInstance(FConsumeInstanceRequest request, FOnConsumeInstanceResult result, FOnApiException error);

	static void GetUserInventoryCall(FString userid, TFunction<void(FGetUserInventoryResult &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION(BlueprintCallable)
	static void GetUserInventory(FString userid, FOnGetUserInventoryResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable)
	static void GrantInstanceToUser(FGrantInstanceToUserRequest request, FOnGrantInstanceToUserResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void PurchaseInstance(FPurchaseInstanceRequest request, FOnPurchaseInstanceResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void SubtractUserVirtualCurrency(FSubtractUserVirtualCurrencyRequest request, FOnSubtractUserVirtualCurrency result, FOnApiException error);
};
