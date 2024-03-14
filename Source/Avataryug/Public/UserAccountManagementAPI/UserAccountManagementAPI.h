// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonModels.h"
#include "UserAccountManagementModels.h"
#include "UserAccountManagementRequest.h"
#include "UserAccountManagementAPI.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UUserAccountManagementAPI : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	static void AddEmailPassword(FAddEmailPasswordRequest request, FOnAddEmailPasswordResult result, FOnApiException error);
	UFUNCTION()
	static void AddGenericServiceID(FAddGenericServiceIDRequest request, FOnAddGenericServiceIDResult result, FOnApiException error);
	UFUNCTION()
	static void AddUserAvatar(FAddUserAvatarRequest request, FOnAddUserAvatarResult result, FOnApiException error);
	UFUNCTION()
	static void DeleteUserAvatar(FDeleteUserAvatarRequest request, FOnDeleteUserAvatarResult result, FOnApiException error);
	UFUNCTION()
	static void GetUserAccountInfo(FString userID, FOnGetUserAccountInfoResult result, FOnApiException error);
	static void GetUserAccountInfo(FString userID, TFunction<void(FGetUserAccountInfoResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION()
	static void GetUserProfile(FString userID, bool showDisplayName, bool showThumbUrl, bool showAvatarUrl, FOnGetUserProfileResult result, FOnApiException error);
	UFUNCTION()
	static void GetUsersAllAvatars(FString userID, FOnGetUsersAllAvatarsResult result, FOnApiException error);
	static void GetUsersAllAvatars(FString userID, TFunction<void(FGetUsersAllAvatarsResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION()
	static void LinkAndroidDeviceID(FLinkAndroidDeviceIDRequest request, FOnLinkAndroidDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void LinkApple(FLinkAppleRequest request, FOnLinkAppleResult result, FOnApiException error);
	UFUNCTION()
	static void LinkCustomID(FLinkCustomIDRequest request, FOnLinkCustomIDResult result, FOnApiException error);
	UFUNCTION()
	static void LinkFacebookAccount(FLinkFacebookAccountRequest request, FOnLinkFacebookAccountResult result, FOnApiException error);
	UFUNCTION()
	static void LinkGoogleAccount(FLinkGoogleAccountRequest request, FOnLinkGoogleAccountResult result, FOnApiException error);
	UFUNCTION()
	static void LinkIOSDeviceID(FLinkIOSDeviceIDRequest request, FOnLinkIOSDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void RemoveGenericServiceID(FOnRemoveGenericServiceIDResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkAndroidDeviceID(FOnUnlinkAndroidDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkApple(FOnUnlinkAppleResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkCustomID(FOnUnlinkCustomIDResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkFacebookAccount(FOnUnlinkFacebookAccountResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkGoogleAccount(FOnUnlinkGoogleAccountResult result, FOnApiException error);
	UFUNCTION()
	static void UnlinkIOSDeviceID(FOnUnlinkIOSDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void UpdateAvatarUrl(FUpdateAvatarUrlRequest request, FOnUpdateAvatarUrlResult result, FOnApiException error);
	UFUNCTION()
	static void UpdateImageAvatarUrl(FUpdateImageAvatarUrlRequest request, FOnUpdateImageAvatarUrlResult result, FOnApiException error);
	UFUNCTION()
	static void UpdateUserAvatar(FUpdateUserAvatarRequest request, FOnUpdateUserAvatarResult result, FOnApiException error);
	UFUNCTION()
	static void UpdateUserProjectDisplayName(FUpdateUserProjectDisplayNameRequest request, FOnUpdateUserProjectDisplayNameResult result, FOnApiException error);
};
