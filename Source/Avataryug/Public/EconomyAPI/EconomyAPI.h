// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonModels.h"
#include "EconomyAPI/EconomyModel.h"
#include "EconomyRequest.h"
#include "EconomyAPI.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UEconomyAPI : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
    static void GetEconomyBundleByID(FString bundleID,FOnGetEconomyBundleByIDResult result,FOnApiException error);
    static void GetEconomyBundleByID( FString bundleID,TFunction<void(FGetEconomyBundleByIDResult &)> result,TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GetEconomyBundles(int status, FOnGetEconomyBundlesResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetEconomyContainerByID(FString containerID, FOnGetEconomyContainerByIDResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetEconomyContainers(int status, FOnGetEconomyContainersResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetEconomyItems(FString request, int status, int gender, int offset, int limit, FOnGetEconomyItemsResult result, FOnApiException error);
	static void GetEconomyItems(FString request, int status, int gender, int offset, int limit, TFunction<void(FGetEconomyItemsResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GetEconomyItemsByID(FString itemID, FOnGetEconomyItemsByIDResult result, FOnApiException error);
	static void GetEconomyItemsByID(FString itemID, TFunction<void(FGetEconomyItemsByIDResult &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION(BlueprintCallable)
	static void GetEconomyStores(int status, FOnGetEconomyStoresResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetStoreItemsByID(FString storeID,FOnGetStoreItemsByIDResult result,FOnApiException error);
        
    static void GetStoreItemsByID(FString storeID, TFunction<void(FGetStoreItemsByIDResult &)> result,TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void UnlockContainerInstance(FString ContainerInstanceID, FString KeyInstanceID, FOnUnlockContainerInstanceResult result, FOnApiException error);
};
