// Fill out your copyright notice in the Description page of Project Settings.

#include "UserAccountManagementAPI/UserAccountManagementHandler.h"
#include "CommonModels.h"
#include "UserAccountManagementAPI/UserAccountManagementAPI.h"
#include "UserAccountManagementAPI/UserAccountManagementModels.h"
#include "UserAccountManagementAPI/UserAccountManagementRequest.h"

void UUserAccountManagementHandler::AddEmailPassword(FAddEmailPasswordRequest request, FOnAddEmailPasswordResult result, FOnApiException error)
{
    UUserAccountManagementAPI::AddEmailPassword(request, result, error);
}

void UUserAccountManagementHandler::AddGenericServiceID(FAddGenericServiceIDRequest request, FOnAddGenericServiceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::AddGenericServiceID(request, result, error);
}

void UUserAccountManagementHandler::AddUserAvatar(FAddUserAvatarRequest request, FOnAddUserAvatarResult result, FOnApiException error)
{
    UUserAccountManagementAPI::AddUserAvatar(request, result, error);
}

void UUserAccountManagementHandler::DeleteUserAvatar(FDeleteUserAvatarRequest request, FOnDeleteUserAvatarResult result, FOnApiException error)
{
    UUserAccountManagementAPI::DeleteUserAvatar(request, result, error);
}

void UUserAccountManagementHandler::GetUserAccountInfo(FString userID, FOnGetUserAccountInfoResult result, FOnApiException error)
{
    UUserAccountManagementAPI::GetUserAccountInfo(userID, result, error);
}

void UUserAccountManagementHandler::GetUserAccountInfo(FString userID, TFunction<void(FGetUserAccountInfoResult &)> result, TFunction<void(FApiException &)> error)
{
    UUserAccountManagementAPI::GetUserAccountInfo(userID, result, error);
}

void UUserAccountManagementHandler::GetUserProfile(FString userID, bool showDisplayName, bool showThumbUrl, bool showAvatarUrl, FOnGetUserProfileResult result, FOnApiException error)
{
    UUserAccountManagementAPI::GetUserProfile(userID, showDisplayName, showThumbUrl, showAvatarUrl, result, error);
}

void UUserAccountManagementHandler::GetUsersAllAvatars(FString userID, FOnGetUsersAllAvatarsResult result, FOnApiException error)
{
    UUserAccountManagementAPI::GetUsersAllAvatars(userID, result, error);
}

void UUserAccountManagementHandler::GetUsersAllAvatars(FString userID, TFunction<void(FGetUsersAllAvatarsResult &)> result, TFunction<void(FApiException &)> error)
{
    UUserAccountManagementAPI::GetUsersAllAvatars(userID, result, error);
}

void UUserAccountManagementHandler::LinkAndroidDeviceID(FLinkAndroidDeviceIDRequest request, FOnLinkAndroidDeviceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkAndroidDeviceID(request, result, error);
}

void UUserAccountManagementHandler::LinkApple(FLinkAppleRequest request, FOnLinkAppleResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkApple(request, result, error);
}

void UUserAccountManagementHandler::LinkCustomID(FLinkCustomIDRequest request, FOnLinkCustomIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkCustomID(request, result, error);
}

void UUserAccountManagementHandler::LinkFacebookAccount(FLinkFacebookAccountRequest request, FOnLinkFacebookAccountResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkFacebookAccount(request, result, error);
}

void UUserAccountManagementHandler::LinkGoogleAccount(FLinkGoogleAccountRequest request, FOnLinkGoogleAccountResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkGoogleAccount(request, result, error);
}

void UUserAccountManagementHandler::LinkIOSDeviceID(FLinkIOSDeviceIDRequest request, FOnLinkIOSDeviceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::LinkIOSDeviceID(request, result, error);
}

void UUserAccountManagementHandler::RemoveGenericServiceID(FOnRemoveGenericServiceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::RemoveGenericServiceID(result, error);
}

void UUserAccountManagementHandler::UnlinkAndroidDeviceID(FOnUnlinkAndroidDeviceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkAndroidDeviceID(result, error);
}

void UUserAccountManagementHandler::UnlinkApple(FOnUnlinkAppleResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkApple(result, error);
}

void UUserAccountManagementHandler::UnlinkCustomID(FOnUnlinkCustomIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkCustomID(result, error);
}

void UUserAccountManagementHandler::UnlinkFacebookAccount(FOnUnlinkFacebookAccountResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkFacebookAccount(result, error);
}

void UUserAccountManagementHandler::UnlinkGoogleAccount(FOnUnlinkGoogleAccountResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkGoogleAccount(result, error);
}

void UUserAccountManagementHandler::UnlinkIOSDeviceID(FOnUnlinkIOSDeviceIDResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UnlinkIOSDeviceID(result, error);
}

void UUserAccountManagementHandler::UpdateAvatarUrl(FUpdateAvatarUrlRequest request, FOnUpdateAvatarUrlResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UpdateAvatarUrl(request, result, error);
}

void UUserAccountManagementHandler::UpdateImageAvatarUrl(FUpdateImageAvatarUrlRequest request, FOnUpdateImageAvatarUrlResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UpdateImageAvatarUrl(request, result, error);
}

void UUserAccountManagementHandler::UpdateUserAvatar(FUpdateUserAvatarRequest request, FOnUpdateUserAvatarResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UpdateUserAvatar(request, result, error);
}

void UUserAccountManagementHandler::UpdateUserProjectDisplayName(FUpdateUserProjectDisplayNameRequest request, FOnUpdateUserProjectDisplayNameResult result, FOnApiException error)
{
    UUserAccountManagementAPI::UpdateUserProjectDisplayName(request, result, error);
}