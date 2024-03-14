// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonModels.h"
#include "Http.h"
#include "EconomyAPI/EconomyModel.h"
#include "../CommonSettings.h"
#include "EconomyRequest.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyItemsResult, FGetEconomyItemsResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyBundleByIDResult, FGetEconomyBundleByIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyBundlesResult, FGetEconomyBundlesResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyContainerByIDResult, FGetEconomyContainerByIDResult, result);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyContainersResult, FGetEconomyContainersResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyItemsByIDResult, FGetEconomyItemsByIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetEconomyStoresResult, FGetEconomyStoresResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetStoreItemsByIDResult, FGetStoreItemsByIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlockContainerInstanceResult, FUnlockContainerInstanceResult, result);

/**
 *
 */
UCLASS()
class AVATARYUG_API UEconomyRequest : public UBlueprintAsyncActionBase
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
	static UEconomyRequest *EconomyRequest(FString requestjson, FString method,
										   FString endPoint);
	static UEconomyRequest *EconomyRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint);

    FOnGetEconomyBundleByIDResult GetEconomyBundleByIDResult;
    TFunction<void(FGetEconomyBundleByIDResult &)> GetEconomyBundleByIDResults;
        
	FOnGetEconomyBundlesResult GetEconomyBundlesResult;
	FOnGetEconomyContainerByIDResult GetEconomyContainerByIDResult;
	FOnGetEconomyContainersResult GetEconomyContainersResult;

	FOnGetEconomyStoresResult GetEconomyStoresResult;
    FOnGetStoreItemsByIDResult GetStoreItemsByIDResult;
    TFunction<void(FGetStoreItemsByIDResult &)> GetStoreItemsByIDResults;
        
	FOnUnlockContainerInstanceResult UnlockContainerInstanceResult;

	FOnGetEconomyItemsByIDResult GetEconomyItemsByIDResult;
	TFunction<void(FGetEconomyItemsByIDResult &)> GetEconomyItemsByIDResults;

	FOnGetEconomyItemsResult GetEconomyItemsResult;
	TFunction<void(FGetEconomyItemsResult &)> GetEconomyItemsResults;

	TFunction<void(FApiException &)> ErrorCallback;
	FOnApiException Error;

public:
	virtual void Activate() override;
	void ActivateQuerry();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
