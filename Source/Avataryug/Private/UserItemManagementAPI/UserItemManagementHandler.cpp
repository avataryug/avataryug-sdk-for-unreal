// Fill out your copyright notice in the Description page of Project Settings.

#include "UserItemManagementAPI/UserItemManagementHandler.h"
#include "CommonModels.h"
#include "UserItemManagementAPI/UserItemManagementRequest.h"
#include "UserItemManagementAPI/UserItemManagementAPI.h"
#include "UserItemManagementAPI/UserItemManagementModels.h"

void UUserItemManagementHandler::AddVirtualCurrencyToUser(FAddVirtualCurrencyToUserRequest request, FOnAddVirtualCurrencyToUserResult result, FOnApiException error)
{
    UUserItemManagementAPI::AddVirtualCurrencyToUser(request, result, error);
}

void UUserItemManagementHandler::ConsumeInstance(FConsumeInstanceRequest request, FOnConsumeInstanceResult result, FOnApiException error)
{
    UUserItemManagementAPI::ConsumeInstance(request, result, error);
}

void UUserItemManagementHandler::GetUserInventoryCall(FString userid, TFunction<void(FGetUserInventoryResult &)> result, TFunction<void(FApiException &)> error)
{
    UUserItemManagementAPI::GetUserInventory(userid, result, error);
}

void UUserItemManagementHandler::GetUserInventory(FString userid, FOnGetUserInventoryResult result, FOnApiException error)
{
    UUserItemManagementAPI::GetUserInventory(userid, result, error);
}

void UUserItemManagementHandler::GrantInstanceToUser(FGrantInstanceToUserRequest request, FOnGrantInstanceToUserResult result, FOnApiException error)
{
    UUserItemManagementAPI::GrantInstanceToUser(request, result, error);
}

void UUserItemManagementHandler::PurchaseInstance(FPurchaseInstanceRequest request, FOnPurchaseInstanceResult result, FOnApiException error)
{
    UUserItemManagementAPI::PurchaseInstance(request, result, error);
}

void UUserItemManagementHandler::SubtractUserVirtualCurrency(FSubtractUserVirtualCurrencyRequest request, FOnSubtractUserVirtualCurrency result, FOnApiException error)
{
    UUserItemManagementAPI::SubtractUserVirtualCurrency(request, result, error);
}
