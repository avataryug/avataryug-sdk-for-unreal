// Fill out your copyright notice in the Description page of Project Settings.

#include "UserItemManagementAPI/UserItemManagementRequest.h"
#include "CommonModels.h"
#include "Http.h"
#include "Json.h"
#include "CommonSettings.h"
#include "UserItemManagementAPI/UserItemManagementModels.h"
#include "JsonObjectConverter.h"

UUserItemManagementRequest *UUserItemManagementRequest::UserItemManagementRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UUserItemManagementRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

UUserItemManagementRequest *UUserItemManagementRequest::UserItemManagementRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint)
{
    auto Platform = NewObject<UUserItemManagementRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->EndPoint = endPoint;
    Platform->inputDictionary = _inputDictionary;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

void UUserItemManagementRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UUserItemManagementRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}
void UUserItemManagementRequest::ActivateQuerry()
{
    FHttpRequestRef request = FHttpModule::Get().CreateRequest();
    FString QueryString = "";
    for (auto &Elem : this->inputDictionary)
    {
        FString Key = Elem.Key;
        FString Value = Elem.Value;
        QueryString += Key + "=" + Value + "&";
    }
    QueryString.RemoveAt(QueryString.Len() - 1);
    FString urlString = UCommonSettings::BaseUrl() + this->EndPoint;
    request->SetURL(urlString + "?" + QueryString);
    request->SetVerb(this->Method);
    request->SetHeader("Content-Type", "application/json");
    request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    request->SetHeader("Authorization", AuthorizationHeader);
    request->OnProcessRequestComplete().BindUObject(this, &UUserItemManagementRequest::OnResponseReceived);
    request->ProcessRequest();
}

void UUserItemManagementRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    int32 ResponseCode = Response->GetResponseCode();
    FString ResponseString = Response->GetContentAsString();
    if (ResponseCode >= 400)
    {
        FApiException apiException;
        apiException.ErrorCode = ResponseCode;
        apiException.ErrorMessage = ResponseString;
        Error.ExecuteIfBound(apiException);
    }
    else if (ResponseCode == 0)
    {
        FApiException apiException;
        apiException.ErrorCode = ResponseCode;
        apiException.ErrorMessage = ResponseString;
        Error.ExecuteIfBound(apiException);
    }
    else if (bWasSuccessful && Response.IsValid())
    {
        if (this->EndPoint == "AddVirtualCurrencyToUser")
        {
            FAddVirtualCurrencyToUserResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            AddVirtualCurrencyToUserResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "ConsumeInstance")
        {
            FConsumeInstanceResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            ConsumeInstanceResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetUserInventory")
        {
            FGetUserInventoryResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetUserInventoryResult.ExecuteIfBound(loginResult);
            if (GetUserInventoryResults != NULL)
            {
                GetUserInventoryResults(loginResult);
            }
        }
        if (this->EndPoint == "GrantInstanceToUser")
        {
            FGrantInstanceToUserResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GrantInstanceToUserResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "PurchaseInstance")
        {
            PurchaseInstanceResult.ExecuteIfBound(ResponseString);
        }
        if (this->EndPoint == "SubtractUserVirtualCurrency")
        {
            SubtractUserVirtualCurrency.ExecuteIfBound(ResponseString);
        }
    }
    SetReadyToDestroy();
}