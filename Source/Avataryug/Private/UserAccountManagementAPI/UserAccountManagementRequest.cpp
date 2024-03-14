// Fill out your copyright notice in the Description page of Project Settings.

#include "UserAccountManagementAPI/UserAccountManagementRequest.h"
#include "CommonModels.h"
#include "Http.h"
#include "CommonSettings.h"
#include "Containers/UnrealString.h"
#include "JsonObjectConverter.h"
#include "UserAccountManagementAPI/UserAccountManagementModels.h"


UUserAccountManagementRequest *UUserAccountManagementRequest::UserAccountManagementRequest(FString requestjson, FString method, FString endPoint)
{
    auto Platform = NewObject<UUserAccountManagementRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->JsonRequest = requestjson;
    Platform->EndPoint = endPoint;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}
UUserAccountManagementRequest *UUserAccountManagementRequest::UserAccountManagementRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint)
{
    auto Platform = NewObject<UUserAccountManagementRequest>();
    Platform->AddToRoot();
    Platform->Http = &FHttpModule::Get();
    Platform->Method = method;
    Platform->EndPoint = endPoint;
    Platform->inputDictionary = _inputDictionary;
    Platform->Url = UCommonSettings::BaseUrl() + endPoint;
    return Platform;
}

void UUserAccountManagementRequest::Activate()
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &UUserAccountManagementRequest::OnResponseReceived);
    Request->SetURL(this->Url);
    Request->SetVerb(this->Method);
    Request->SetContentAsString(this->JsonRequest);
    Request->SetHeader("Content-Type", TEXT("application/json"));
    Request->SetHeader("X-Forwarded-Host", UCommonSettings::ProjectID());
    FString AuthorizationHeader = "Bearer " + UCommonSettings::GetToken();
    Request->SetHeader("Authorization", AuthorizationHeader);
    Request->ProcessRequest();
}
void UUserAccountManagementRequest::ActivateQuerry()
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
    request->OnProcessRequestComplete().BindUObject(this, &UUserAccountManagementRequest::OnResponseReceived);
    request->ProcessRequest();
}
void UUserAccountManagementRequest::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
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

        if (this->EndPoint == "AddEmailPassword")
        {
            FAddEmailPasswordResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            AddEmailPasswordResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "AddGenericServiceID")
        {
            FAddGenericServiceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            AddGenericServiceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GrantInstanceToUser")
        {
            FAddUserAvatarResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            AddUserAvatarResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "DeleteUserAvatar")
        {
            FDeleteUserAvatarResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            DeleteUserAvatarResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetUserAccountInfo")
        {
            FGetUserAccountInfoResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetUserAccountInfoResult.ExecuteIfBound(loginResult);

            if (GetUserAccountInfoResults)
            {
                GetUserAccountInfoResults(loginResult);
            }
        }
        if (this->EndPoint == "GetUserProfile")
        {
            FGetUserProfileResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetUserProfileResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "GetUsersAllAvatars")
        {
            FGetUsersAllAvatarsResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            GetUsersAllAvatarsResult.ExecuteIfBound(loginResult);
            if (GetUsersAllAvatarsResults)
            {
                GetUsersAllAvatarsResults(loginResult);
            }
        }
        if (this->EndPoint == "LinkAndroidDeviceID")
        {
            FLinkAndroidDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkAndroidDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LinkApple")
        {
            FLinkAppleResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkAppleResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LinkCustomID")
        {
            FLinkCustomIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkCustomIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LinkFacebookAccount")
        {
            FLinkFacebookAccountResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkFacebookAccountResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LinkGoogleAccount")
        {
            FLinkGoogleAccountResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkGoogleAccountResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "LinkIOSDeviceIDResult")
        {
            FLinkIOSDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            LinkIOSDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "RemoveGenericServiceID")
        {
            FRemoveGenericServiceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            RemoveGenericServiceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkAndroidDeviceID")
        {
            FUnlinkAndroidDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkAndroidDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkCustomID")
        {
            FUnlinkCustomIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkCustomIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkFacebookAccount")
        {
            FUnlinkFacebookAccountResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkFacebookAccountResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkGoogleAccount")
        {
            FUnlinkGoogleAccountResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkGoogleAccountResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateAvatarUrl")
        {
            FUpdateAvatarUrlResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateAvatarUrlResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateImageAvatarUrl")
        {
            FUpdateImageAvatarUrlResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateImageAvatarUrlResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateUserAvatar")
        {
            FUpdateUserAvatarResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateUserAvatarResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UpdateUserProjectDisplayName")
        {
            FUpdateUserProjectDisplayNameResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UpdateUserProjectDisplayNameResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkIOSDeviceID")
        {
            FUnlinkIOSDeviceIDResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkIOSDeviceIDResult.ExecuteIfBound(loginResult);
        }
        if (this->EndPoint == "UnlinkApple")
        {
            FUnlinkAppleResult loginResult;
            FJsonObjectConverter::JsonObjectStringToUStruct(ResponseString, &loginResult,0,0);
            UnlinkAppleResult.ExecuteIfBound(loginResult);
        }
    }
    SetReadyToDestroy();
}