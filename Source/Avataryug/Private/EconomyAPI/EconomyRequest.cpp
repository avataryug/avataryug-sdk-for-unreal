// Fill out your copyright notice in the Description page of Project Settings.

#include "EconomyAPI/EconomyRequest.h"
#include "CommonModels.h"
#include "EconomyAPI/EconomyModel.h"
#include "CommonSettings.h"
#include "Http.h"
#include "JsonObjectConverter.h"
UEconomyRequest *UEconomyRequest::EconomyRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UEconomyRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}
UEconomyRequest *UEconomyRequest::EconomyRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint)
{
    auto Platform = NewObject<UEconomyRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->EndPoint = endPoint;
    Platform->inputDictionary = _inputDictionary;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

void UEconomyRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UEconomyRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}

void UEconomyRequest::ActivateQuerry()
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
    request->OnProcessRequestComplete().BindUObject(this, &UEconomyRequest::OnResponseReceived);
    request->ProcessRequest();
}

void UEconomyRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
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
        if (this->EndPoint == "GetEconomyBundleByID")
        {
            FGetEconomyBundleByIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyBundleByIDResult.ExecuteIfBound(loginResult);
            if (GetEconomyBundleByIDResults)
            {
              GetEconomyBundleByIDResults(loginResult);
            }
        }
        if (this->EndPoint == "GetEconomyBundles")
        {
            FGetEconomyBundlesResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyBundlesResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetEconomyContainerByID")
        {
            FGetEconomyContainerByIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyContainerByIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetEconomyContainers")
        {
            FGetEconomyContainersResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyContainersResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetEconomyItems")
        {
            FGetEconomyItemsResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyItemsResult.ExecuteIfBound(loginResult);
            if (GetEconomyItemsResults)
            {
                GetEconomyItemsResults(loginResult);
            }
        }
        if (this->EndPoint == "GetEconomyItemsByID")
        {
            FGetEconomyItemsByIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyItemsByIDResult.ExecuteIfBound(loginResult);
            if (GetEconomyItemsByIDResults)
            {
                GetEconomyItemsByIDResults(loginResult);
            }
        }
        if (this->EndPoint == "GetEconomyStores")
        {
            FGetEconomyStoresResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetEconomyStoresResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetStoreItemsByID")
        {
            FGetStoreItemsByIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetStoreItemsByIDResult.ExecuteIfBound(loginResult);
            if (GetStoreItemsByIDResults) {
              GetStoreItemsByIDResults(loginResult);
            }
        }
        if (this->EndPoint == "UnlockContainerInstance")
        {
            FUnlockContainerInstanceResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlockContainerInstanceResult.ExecuteIfBound(loginResult);
        }
    }
    SetReadyToDestroy();
}
