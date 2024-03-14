// Fill out your copyright notice in the Description page of Project Settings.

#include "AuthenticationAPI/AuthenticationRequest.h"
#include "AuthenticationAPI/AuthenticationModels.h"
#include "CommonModels.h"
#include "CommonSettings.h"
#include "Http.h"
#include "JsonObjectConverter.h"
#include "GameFramework/SaveGame.h"

UAuthenticationRequest *UAuthenticationRequest::AuthenticationRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UAuthenticationRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

void UAuthenticationRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UAuthenticationRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    UE_LOG(LogTemp, Display, TEXT("OnResponseReceived-->>%s"), *this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    // FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    // Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}

void UAuthenticationRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    int32 ResponseCode = Response->GetResponseCode();
    FString ResponseString = Response->GetContentAsString();
    UE_LOG(LogTemp, Display, TEXT("OnResponseReceived----->>%s"), *ResponseString);
    if (ResponseCode >= 400)
    {
        FApiException apiException;
        apiException.ErrorCode = ResponseCode;
        apiException.ErrorMessage = ResponseString;
        if (ErrorCallback)
        {
            ErrorCallback(apiException);
        }

        Error.ExecuteIfBound(apiException);
    }
    else if (ResponseCode == 0)
    {
        FApiException apiException;
        apiException.ErrorCode = ResponseCode;
        apiException.ErrorMessage = ResponseString;
        if (ErrorCallback)
        {
            ErrorCallback(apiException);
        }
        Error.ExecuteIfBound(apiException);
    }
    else if (bWasSuccessful && Response.IsValid())
    {
        if (this->EndPoint == "LoginWithCustomID")
        {
            FLoginWithCustomIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithCustomIDResult.ExecuteIfBound(loginResult);

            if (LoginWithCustomIDResults != NULL)
            {
                LoginWithCustomIDResults(loginResult);
            }
        }
        if (this->EndPoint == "SendAccountVerificationEmail")
        {
            FSendAccountRecoveryEmailResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            SendAccountRecoveryEmailResponse.ExecuteIfBound(loginResult);
            if(SendAccountRecoveryEmailResponses != NULL)
            {
                SendAccountRecoveryEmailResponses(loginResult);
            }
        }
        if (this->EndPoint == "VerifyUserWithEmail")
        {
            FVerifyUserWithEmailResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            VerifyUserWithEmailResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateEmailPassword")
        {
            FUpdateEmailPasswordResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateEmailPasswordResponse.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LoginWithIOSDeviceID")
        {
            FLoginWithIOSDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithIOSDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LoginWithGoogle")
        {
            FLoginWithGoogleResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithGoogleResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LoginWithFacebook")
        {
            FLoginWithFacebookResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithFacebookResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LoginWithEmailAddress")
        {
            FLoginWithEmailAddressResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LoginWithEmailAddressResult.ExecuteIfBound(loginResult);
            if(LoginWithEmailAddressResults != NULL)
            {
                LoginWithEmailAddressResults(loginResult);
            }
            
        }
        if (this->EndPoint == "LoginWithApple")
        {
            FLoginWithAppleResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithAppleResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LoginWithAndroidDeviceID")
        {
            FLoginWithAndroidDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UCommonSettings::SetToken(loginResult.Data.AccessToken);
            LoginWithAndroidDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "ChangePassword")
        {
            FChangePasswordResponse loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            ChangePasswordResponse.ExecuteIfBound(loginResult);
        }
    }
    SetReadyToDestroy();
}