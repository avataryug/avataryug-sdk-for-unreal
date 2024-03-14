// Fill out your copyright notice in the Description page of Project Settings.

#include "EconomyAPI/EconomyHandler.h"
#include "EconomyAPI/EconomyAPI.h"
#include "CommonModels.h"
#include "EconomyAPI/EconomyModel.h"
#include "EconomyAPI/EconomyRequest.h"

void UEconomyHandler::GetEconomyBundleByID(FString bundleID, FOnGetEconomyBundleByIDResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyBundleByID(bundleID, result, error);
}
   
void UEconomyHandler::GetEconomyBundleByID(FString bundleID, TFunction<void(FGetEconomyBundleByIDResult &)> result, TFunction<void(FApiException &)> error)
{
  UEconomyAPI::GetEconomyBundleByID(bundleID, result, error);
}

void UEconomyHandler::GetEconomyBundles(int status, FOnGetEconomyBundlesResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyBundles(status, result, error);
}

void UEconomyHandler::GetEconomyContainerByID(FString containerID, FOnGetEconomyContainerByIDResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyContainerByID(containerID, result, error);
}

void UEconomyHandler::GetEconomyContainers(int status, FOnGetEconomyContainersResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyContainers(status, result, error);
}
void UEconomyHandler::GetEconomyItems(FString request, int status, int gender, int offset, int limit, FOnGetEconomyItemsResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyItems(request, status, gender, offset, limit, result, error);
}
void UEconomyHandler::GetEconomyItems(FString request, int status, int gender, int offset, int limit, TFunction<void(FGetEconomyItemsResult &)> result, TFunction<void(FApiException &)> error)
{
  UEconomyAPI::GetEconomyItems(request, status, gender, offset, limit, result, error);
}
void UEconomyHandler::GetEconomyItemsByID(FString itemID, FOnGetEconomyItemsByIDResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyItemsByID(itemID, result, error);
}
void UEconomyHandler::GetEconomyItemsByID(FString itemID, TFunction<void(FGetEconomyItemsByIDResult &)> result, TFunction<void(FApiException &)> error)
{
  UEconomyAPI::GetEconomyItemsByID(itemID, result, error);
}
void UEconomyHandler::GetEconomyStores(int status, FOnGetEconomyStoresResult result, FOnApiException error)
{
  UEconomyAPI::GetEconomyStores(status, result, error);
}
void UEconomyHandler::GetStoreItemsByID(FString storeID, FOnGetStoreItemsByIDResult result, FOnApiException error)
{
  UEconomyAPI::GetStoreItemsByID(storeID, result, error);
}

void UEconomyHandler::GetStoreItemsByID(FString storeID, TFunction<void(FGetStoreItemsByIDResult &)> result,    TFunction<void(FApiException &)> error)
{
  UEconomyAPI::GetStoreItemsByID(storeID, result, error);
}
void UEconomyHandler::UnlockContainerInstance(
    FString ContainerInstanceID, FString KeyInstanceID,
    FOnUnlockContainerInstanceResult result, FOnApiException error)
{
  UEconomyAPI::UnlockContainerInstance(ContainerInstanceID, KeyInstanceID, result, error);
}
