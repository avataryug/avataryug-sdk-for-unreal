// Fill out your copyright notice in the Description page of Project Settings.

#include "AuthenticationAPI/AuthenticationAPI.h"
#include "AuthenticationAPI/AuthenticationModels.h"
#include "AuthenticationAPI/AuthenticationRequest.h"
#include "JsonObjectConverter.h"

void UAuthenticationAPI::LoginWithCustomId(FLoginWithCustomIDRequest request, TFunction<void(FLoginWithCustomIDResult &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithCustomID");
    MyAsyncAction->LoginWithCustomIDResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithCustomId(FLoginWithCustomIDRequest request, FOnLoginWithCustomIDResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithCustomID");
    MyAsyncAction->LoginWithCustomIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, FOnSendAccountRecoveryEmailResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "SendAccountVerificationEmail");
    MyAsyncAction->SendAccountRecoveryEmailResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, TFunction<void(FSendAccountRecoveryEmailResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "SendAccountVerificationEmail");
    MyAsyncAction->SendAccountRecoveryEmailResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}
void UAuthenticationAPI::VerifyUserWithEmail(FVerifyUserWithEmailRequest request, FOnVerifyUserWithEmailResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "VerifyUserWithEmail");
    MyAsyncAction->VerifyUserWithEmailResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::UpdateEmailPassword(FUpdateEmailPasswordRequest request, FOnUpdateEmailPasswordResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "UpdateEmailPassword");
    MyAsyncAction->UpdateEmailPasswordResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithIOSDeviceID(FLoginWithIOSDeviceIDRequest request, FOnLoginWithIOSDeviceIDResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithIOSDeviceID");
    MyAsyncAction->LoginWithIOSDeviceIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithGoogle(FLoginWithGoogleRequest request, FOnLoginWithGoogleResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithGoogle");
    MyAsyncAction->LoginWithGoogleResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithFacebook(FLoginWithFacebookRequest request, FOnLoginWithFacebookResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithFacebook");
    MyAsyncAction->LoginWithFacebookResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithEmailAddress(FLoginWithEmailAddressRequest request, TFunction<void(FLoginWithEmailAddressResult &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithEmailAddress");
    MyAsyncAction->LoginWithEmailAddressResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithEmailAddress(FLoginWithEmailAddressRequest request, FOnLoginWithEmailAddressResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithEmailAddress");
    MyAsyncAction->LoginWithEmailAddressResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithApple(FLoginWithAppleRequest request, FOnLoginWithAppleResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithApple");
    MyAsyncAction->LoginWithAppleResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::LoginWithAndroidDeviceID(FLoginWithAndroidDeviceIDRequest request, FOnLoginWithAndroidDeviceIDResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "LoginWithAndroidDeviceID");
    MyAsyncAction->LoginWithAndroidDeviceIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAuthenticationAPI::ChangePassword(FChangePasswordRequest request, FOnChangePasswordResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAuthenticationRequest *MyAsyncAction = UAuthenticationRequest::AuthenticationRequest(JsonString, "POST", "ChangePassword");
    MyAsyncAction->ChangePasswordResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
