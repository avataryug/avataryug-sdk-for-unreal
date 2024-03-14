// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UserItemManagementModels.h"
#include "CommonModels.h"
#include "Http.h"
#include "UserItemManagementRequest.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddVirtualCurrencyToUserResult, FAddVirtualCurrencyToUserResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnConsumeInstanceResult, FConsumeInstanceResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUserInventoryResult, FGetUserInventoryResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGrantInstanceToUserResult, FGrantInstanceToUserResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPurchaseInstanceResult, FString, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSubtractUserVirtualCurrency, FString, result);
/**
 *
 */
UCLASS()
class AVATARYUG_API UUserItemManagementRequest : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	FHttpModule *Http;
	FString Method;
	FString Url;
	FString Token;
	FString JsonRequest;
	FString EndPoint;
	TMap<FString, FString> inputDictionary;
	static UUserItemManagementRequest *UserItemManagementRequest(FString requestjson, FString method, FString endPoint);
	static UUserItemManagementRequest *UserItemManagementRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint);
	FOnAddVirtualCurrencyToUserResult AddVirtualCurrencyToUserResult;
	FOnConsumeInstanceResult ConsumeInstanceResult;

	FOnGrantInstanceToUserResult GrantInstanceToUserResult;
	FOnPurchaseInstanceResult PurchaseInstanceResult;
	FOnSubtractUserVirtualCurrency SubtractUserVirtualCurrency;

	FOnGetUserInventoryResult GetUserInventoryResult;
	TFunction<void(FGetUserInventoryResult &)> GetUserInventoryResults;

	TFunction<void(FApiException &)> ErrorCallback;

	FOnApiException Error;

public:
	virtual void Activate() override;
	void ActivateQuerry();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
