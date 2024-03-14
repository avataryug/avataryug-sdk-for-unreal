// Fill out your copyright notice in the Description page of Project Settings.

#include "DefaultAPI/DefaultRequest.h"
#include "CommonModels.h"
#include "Http.h"
#include "DefaultAPI/DefaultModels.h"
#include "CommonSettings.h"
#include "JsonObjectConverter.h"
UDefaultRequest *UDefaultRequest::DefaultRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UDefaultRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}
UDefaultRequest *UDefaultRequest::DefaultRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint)
{
    auto Platform = NewObject<UDefaultRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->inputDictionary = _inputDictionary;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}
void UDefaultRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UDefaultRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}
void UDefaultRequest::ActivateQuerry()
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
    request->OnProcessRequestComplete().BindUObject(this, &UDefaultRequest::OnResponseReceived);
    request->ProcessRequest();
}
void UDefaultRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    int32 ResponseCode = Response->GetResponseCode();
    FString ResponseString = Response->GetContentAsString();
    // UE_LOG(LogTemp, Display, TEXT("API--OnResponseReceived------->%s"),*ResponseString);
    UE_LOG(LogTemp, Display, TEXT("API--this->EndPoint------->%s"), *this->EndPoint);
    UE_LOG(LogTemp, Warning, TEXT("My bWasSuccessful value is: %s"), bWasSuccessful ? TEXT("True") : TEXT("False"));
    UE_LOG(LogTemp, Warning, TEXT("My IsValid value is: %s"), Response.IsValid() ? TEXT("True") : TEXT("False"));
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
        UE_LOG(LogTemp, Display, TEXT("API--bWasSuccessful------->"));
        if (this->EndPoint == "DeleteUser")
        {
            FDeleteUserResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            DeleteUserResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GenerateAvatar")
        {
            // FSendAccountRecoveryEmailResponse loginResult;
            // FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult);
            // SendAccountRecoveryEmailResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GenerateAvatarMesh")
        {
            FGenerateAvatarMeshResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GenerateAvatarMeshResponse.ExecuteIfBound(loginResult);
            if (GenerateAvatarMeshResponses)
            {
                GenerateAvatarMeshResponses(loginResult);
            }
        }
        if (this->EndPoint == "GetAllBucketVertices")
        {
            FGetAllBucketVerticesResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetAllBucketVerticesResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetAdPlacementByID")
        {
            FGetAdsPlacementResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetAdsPlacementResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "RecordAdsActivity")
        {
            FRecordAdsActivityResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            RecordAdsActivityResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GrantAdsReward")
        {
            FGrantAdsRewardResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GrantAdsRewardResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateUserDemographics")
        {
            FUpdateUserDemographicsResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateUserDemographicsResponse.ExecuteIfBound(loginResult);
            if (UpdateUserDemographicsResponses)
            {
                UpdateUserDemographicsResponses(loginResult);
            }
        }
        if (this->EndPoint == "RegisterUser")
        {

            FRegisterUserResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            RegisterUserResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "SendAccountRecoveryEmail")
        {
            FSendAccountVerificationEmailResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            SendAccountVerificationEmailResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "RenderAvatarImage")
        {
             UE_LOG(LogTemp, Display, TEXT("-------------------------  %s"), *ResponseString);
            FRenderAvatarImageResponse renderResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &renderResult,0,0);
            RenderAvatarImageResponse.ExecuteIfBound(renderResult);
              UE_LOG(LogTemp, Display, TEXT("-------------------------  %d %s"), renderResult.Code, *renderResult.Data.ImageURL);
            if (RenderAvatarImageResponses)
            {
                RenderAvatarImageResponses(renderResult);
            }
        }
        if (this->EndPoint == "SyncAvatars")
        {
            SyncAvatarsResponse.ExecuteIfBound(ResponseString);
            if (SyncAvatarsResponses)
            {
                SyncAvatarsResponses(ResponseString);
            }
        }
        if (this->EndPoint == "UpdateDefaultAvatarID")
        {

            FUpdateDefaultAvatarIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UE_LOG(LogTemp, Display, TEXT("API--IF SAME------->%s"), *loginResult.Message);
            UpdateDefaultAvatarIDResult.ExecuteIfBound(loginResult);
            if (UpdateDefaultAvatarIDs)
            {
                UpdateDefaultAvatarIDs(loginResult);
            }
        }
        if (this->EndPoint == "GetExpressions")
        {
            FGetExpressionsResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetExpressionsResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetClips")
        {
            FGetClipsResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetClipsResponse.ExecuteIfBound(loginResult);
        }
    }
    SetReadyToDestroy();
}
