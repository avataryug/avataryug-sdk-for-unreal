// Fill out your copyright notice in the Description page of Project Settings.

#include "AvatarPresetsAPI/AvatarPresetsRequest.h"
#include "JsonObjectConverter.h"
UAvatarPresetsRequest *UAvatarPresetsRequest::AvatarPresetsRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UAvatarPresetsRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

UAvatarPresetsRequest *UAvatarPresetsRequest::AvatarPresetsRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint)
{
    auto Platform = NewObject<UAvatarPresetsRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->EndPoint = endPoint;
    Platform->inputDictionary = _inputDictionary;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

void UAvatarPresetsRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UAvatarPresetsRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}
void UAvatarPresetsRequest::ActivateQuerry()
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
    request->SetHeader("Content-Type", TEXT("application/json"));
    request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    request->SetHeader("Authorization", AuthorizationHeader);
    request->OnProcessRequestComplete().BindUObject(this, &UAvatarPresetsRequest::OnResponseReceived);
    request->ProcessRequest();
}

void UAvatarPresetsRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
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
        if (this->EndPoint == "GetAvatarPresets")
        {
            FGetAvatarPresetsResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetAvatarPresetsResult.ExecuteIfBound(loginResult);
            if (GetAvatarPresetsResults)
            {
                GetAvatarPresetsResults(loginResult);
            }
        }
        if (this->EndPoint == "GetAvatarPresetsByID")
        {
            FGetAvatarPresetByID200 loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetAvatarPresetByID200.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GrantAvatarPresetToUser")
        {
            FGrantAvatarToUserResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GrantAvatarToUserResponse.ExecuteIfBound(loginResult);
            if (GrantAvatarToUserResponses)
            {
                GrantAvatarToUserResponses(loginResult);
            }
        }

        if (this->EndPoint == "GrantAvatarPresetItemsToUser")
        {
            FGrantAvatarPresetItemsToUserResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GrantAvatarPresetItemsToUserResponse.ExecuteIfBound(loginResult);
            if (GrantAvatarPresetItemsToUserResponses)
            {
                GrantAvatarPresetItemsToUserResponses(loginResult);
            }
        }
        if (this->EndPoint == "GetUserAvatarAllData")
        {
            FGetUserAvatarAllDataResponse result;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &result,0,0);
            GetUserAvatarAllDataResponse.ExecuteIfBound(result);
            if (GetUserAvatarAllDataResponses)
            {
                GetUserAvatarAllDataResponses(result);
            }
        }
    }
    SetReadyToDestroy();
}