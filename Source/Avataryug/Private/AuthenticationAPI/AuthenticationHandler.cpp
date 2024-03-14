// Fill out your copyright notice in the Description page of Project Settings.

#include "AuthenticationAPI/AuthenticationHandler.h"
#include "AuthenticationAPI/AuthenticationAPI.h"

void UAuthenticationHandler::LoginWithCustomId(FLoginWithCustomIDRequest request, TFunction<void(FLoginWithCustomIDResult &)> result, TFunction<void(FApiException &)> error)
{
    UAuthenticationAPI::LoginWithCustomId(request, result, error);
}
void UAuthenticationHandler::LoginWithCustomId(FLoginWithCustomIDRequest request, FOnLoginWithCustomIDResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithCustomId(request, result, error);
}

void UAuthenticationHandler::SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, TFunction<void(FSendAccountRecoveryEmailResponse &)> result, TFunction<void(FApiException &)> error)
{
    UAuthenticationAPI::SendAccountVerificationEmail(request, result, error);
}
void UAuthenticationHandler::SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, FOnSendAccountRecoveryEmailResponse result, FOnApiException error)
{
    UAuthenticationAPI::SendAccountVerificationEmail(request, result, error);
}

void UAuthenticationHandler::VerifyUserWithEmail(FVerifyUserWithEmailRequest request, FOnVerifyUserWithEmailResponse result, FOnApiException error)
{
    UAuthenticationAPI::VerifyUserWithEmail(request, result, error);
}

void UAuthenticationHandler::UpdateEmailPassword(FUpdateEmailPasswordRequest request, FOnUpdateEmailPasswordResponse result, FOnApiException error)
{
    UAuthenticationAPI::UpdateEmailPassword(request, result, error);
}

void UAuthenticationHandler::LoginWithIOSDeviceID(FLoginWithIOSDeviceIDRequest request, FOnLoginWithIOSDeviceIDResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithIOSDeviceID(request, result, error);
}

void UAuthenticationHandler::LoginWithGoogle(FLoginWithGoogleRequest request, FOnLoginWithGoogleResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithGoogle(request, result, error);
}

void UAuthenticationHandler::LoginWithFacebook(FLoginWithFacebookRequest request, FOnLoginWithFacebookResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithFacebook(request, result, error);
}

void UAuthenticationHandler::LoginWithEmailAddress(FLoginWithEmailAddressRequest request, FOnLoginWithEmailAddressResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithEmailAddress(request, result, error);
}
void UAuthenticationHandler::LoginWithEmailAddress(FLoginWithEmailAddressRequest request, TFunction<void(FLoginWithEmailAddressResult &)> result, TFunction<void(FApiException &)> error)
{
    UAuthenticationAPI::LoginWithEmailAddress(request, result, error);
}

void UAuthenticationHandler::LoginWithApple(FLoginWithAppleRequest request, FOnLoginWithAppleResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithApple(request, result, error);
}

void UAuthenticationHandler::LoginWithAndroidDeviceID(FLoginWithAndroidDeviceIDRequest request, FOnLoginWithAndroidDeviceIDResult result, FOnApiException error)
{
    UAuthenticationAPI::LoginWithAndroidDeviceID(request, result, error);
}

void UAuthenticationHandler::ChangePassword(FChangePasswordRequest request, FOnChangePasswordResponse result, FOnApiException error)
{
    UAuthenticationAPI::ChangePassword(request, result, error);
}