// Fill out your copyright notice in the Description page of Project Settings.

#include "EconomyAPI/EconomyAPI.h"
#include "CommonModels.h"
#include "EconomyAPI/EconomyModel.h"
#include "CommonSettings.h"
#include "EconomyAPI/EconomyRequest.h"
#include "JsonObjectConverter.h"
void UEconomyAPI::GetEconomyBundleByID(FString bundleID, FOnGetEconomyBundleByIDResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("BundleID", bundleID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyBundleByID");
    MyAsyncAction->GetEconomyBundleByIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyBundleByID( FString bundleID,TFunction<void(FGetEconomyBundleByIDResult &)> result,TFunction<void(FApiException &)> error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("BundleID", bundleID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyBundleByID");
    MyAsyncAction->GetEconomyBundleByIDResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyBundles(int status, FOnGetEconomyBundlesResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Status", FString::FromInt(status));
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyBundles");
    MyAsyncAction->GetEconomyBundlesResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyContainerByID(FString containerID, FOnGetEconomyContainerByIDResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("ContainerID", containerID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyContainerByID");
    MyAsyncAction->GetEconomyContainerByIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyContainers(int status, FOnGetEconomyContainersResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Status", FString::FromInt(status));
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyContainers");
    MyAsyncAction->GetEconomyContainersResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyItems(FString request, int status, int gender, int offset, int limit, FOnGetEconomyItemsResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Category", request);
    _inputDictionary.Add("Status", FString::FromInt(status));
    _inputDictionary.Add("Gender", FString::FromInt(gender));
    _inputDictionary.Add("Offset", FString::FromInt(offset));
    _inputDictionary.Add("Limit", FString::FromInt(limit));
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyItems");
    MyAsyncAction->GetEconomyItemsResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyItems(FString request, int status, int gender, int offset, int limit, TFunction<void(FGetEconomyItemsResult &)> result, TFunction<void(FApiException &)> error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Category", request);
    _inputDictionary.Add("Status", FString::FromInt(status));
    _inputDictionary.Add("Gender", FString::FromInt(gender));
    _inputDictionary.Add("Offset", FString::FromInt(offset));
    _inputDictionary.Add("Limit", FString::FromInt(limit));
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyItems");
    MyAsyncAction->GetEconomyItemsResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}

void UEconomyAPI::GetEconomyItemsByID(FString itemID, FOnGetEconomyItemsByIDResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("ItemID", itemID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyItemsByID");
    MyAsyncAction->GetEconomyItemsByIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::GetEconomyItemsByID(FString itemID, TFunction<void(FGetEconomyItemsByIDResult &)> result, TFunction<void(FApiException &)> error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("ItemID", itemID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyItemsByID");
    MyAsyncAction->GetEconomyItemsByIDResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}

void UEconomyAPI::GetEconomyStores(int status, FOnGetEconomyStoresResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Status", FString::FromInt(status));
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetEconomyStores");
    MyAsyncAction->GetEconomyStoresResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UEconomyAPI::GetStoreItemsByID(FString storeID, FOnGetStoreItemsByIDResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("StoreID", storeID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetStoreItemsByID");
    MyAsyncAction->GetStoreItemsByIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}

void UEconomyAPI::GetStoreItemsByID(FString storeID, TFunction<void(FGetStoreItemsByIDResult &)> result,    TFunction<void(FApiException &)> error)
{
     TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("StoreID", storeID);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(_inputDictionary, "GET", "GetStoreItemsByID");
    MyAsyncAction->GetStoreItemsByIDResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}
void UEconomyAPI::UnlockContainerInstance(FString ContainerInstanceID, FString KeyInstanceID, FOnUnlockContainerInstanceResult result, FOnApiException error)
{
    FUnlockContainerInstanceRequest request;
    request.ContainerInstanceID = ContainerInstanceID;
    request.KeyInstanceID = KeyInstanceID;

    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UEconomyRequest *MyAsyncAction = UEconomyRequest::EconomyRequest(JsonString, "POST", "UnlockContainerInstance");
    MyAsyncAction->UnlockContainerInstanceResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}