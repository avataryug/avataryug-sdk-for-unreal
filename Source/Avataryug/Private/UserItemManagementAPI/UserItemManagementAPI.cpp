// Fill out your copyright notice in the Description page of Project Settings.

#include "UserItemManagementAPI/UserItemManagementAPI.h"
#include "CommonModels.h"
#include "UserItemManagementAPI/UserItemManagementRequest.h"
#include "UserItemManagementAPI/UserItemManagementModels.h"
#include "JsonObjectConverter.h"
void UUserItemManagementAPI::AddVirtualCurrencyToUser(FAddVirtualCurrencyToUserRequest request, FOnAddVirtualCurrencyToUserResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(JsonString, "POST", "AddVirtualCurrencyToUser");
    MyAsyncAction->AddVirtualCurrencyToUserResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UUserItemManagementAPI::ConsumeInstance(FConsumeInstanceRequest request, FOnConsumeInstanceResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(JsonString, "POST", "ConsumeInstance");
    MyAsyncAction->ConsumeInstanceResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UUserItemManagementAPI::GetUserInventory(FString userid, FOnGetUserInventoryResult result, FOnApiException error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("UserID", userid);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(inputDictionary, "GET", "GetUserInventory");
    MyAsyncAction->GetUserInventoryResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}

void UUserItemManagementAPI::GetUserInventory(FString userid, TFunction<void(FGetUserInventoryResult &)> result, TFunction<void(FApiException &)> error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("UserID", userid);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(inputDictionary, "GET", "GetUserInventory");
    MyAsyncAction->GetUserInventoryResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}

void UUserItemManagementAPI::GrantInstanceToUser(FGrantInstanceToUserRequest request, FOnGrantInstanceToUserResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(JsonString, "POST", "GrantInstanceToUser");
    MyAsyncAction->GrantInstanceToUserResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UUserItemManagementAPI::PurchaseInstance(FPurchaseInstanceRequest request, FOnPurchaseInstanceResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UE_LOG(LogTemp, Display, TEXT("PurchaseInstance --->>%s"), *JsonString);

    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(JsonString, "POST", "PurchaseInstance");
    MyAsyncAction->PurchaseInstanceResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UUserItemManagementAPI::SubtractUserVirtualCurrency(FSubtractUserVirtualCurrencyRequest request, FOnSubtractUserVirtualCurrency result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UUserItemManagementRequest *MyAsyncAction = UUserItemManagementRequest::UserItemManagementRequest(JsonString, "POST", "SubtractUserVirtualCurrency");
    MyAsyncAction->SubtractUserVirtualCurrency = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}