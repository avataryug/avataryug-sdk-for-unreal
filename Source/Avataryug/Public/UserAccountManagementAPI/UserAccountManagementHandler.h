// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonModels.h"
#include "UserAccountManagementRequest.h"
#include "UserAccountManagementModels.h"
#include "UserAccountManagementHandler.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UUserAccountManagementHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Avataryug | AddEmailPassword")
	static void AddEmailPassword(FAddEmailPasswordRequest request, FOnAddEmailPasswordResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | AddGenericServiceID")
	static void AddGenericServiceID(FAddGenericServiceIDRequest request, FOnAddGenericServiceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | AddUserAvatar")
	static void AddUserAvatar(FAddUserAvatarRequest request, FOnAddUserAvatarResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | DeleteUserAvatar")
	static void DeleteUserAvatar(FDeleteUserAvatarRequest request, FOnDeleteUserAvatarResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | GetUserAccountInfo")
	static void GetUserAccountInfo(FString userID, FOnGetUserAccountInfoResult result, FOnApiException error);

	static void GetUserAccountInfo(FString userID, TFunction<void(FGetUserAccountInfoResult &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | GetUserProfile")
	static void GetUserProfile(FString userID, bool showDisplayName, bool showThumbUrl, bool showAvatarUrl, FOnGetUserProfileResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | GetUsersAllAvatars")
	static void GetUsersAllAvatars(FString userID, FOnGetUsersAllAvatarsResult result, FOnApiException error);

	static void GetUsersAllAvatars(FString userID, TFunction<void(FGetUsersAllAvatarsResult &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkAndroidDeviceID")
	static void LinkAndroidDeviceID(FLinkAndroidDeviceIDRequest request, FOnLinkAndroidDeviceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkApple")
	static void LinkApple(FLinkAppleRequest request, FOnLinkAppleResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkCustomID")
	static void LinkCustomID(FLinkCustomIDRequest request, FOnLinkCustomIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkFacebookAccount")
	static void LinkFacebookAccount(FLinkFacebookAccountRequest request, FOnLinkFacebookAccountResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkGoogleAccount")
	static void LinkGoogleAccount(FLinkGoogleAccountRequest request, FOnLinkGoogleAccountResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | LinkIOSDeviceID")
	static void LinkIOSDeviceID(FLinkIOSDeviceIDRequest request, FOnLinkIOSDeviceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | RemoveGenericServiceID")
	static void RemoveGenericServiceID(FOnRemoveGenericServiceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkAndroidDeviceID")
	static void UnlinkAndroidDeviceID(FOnUnlinkAndroidDeviceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkApple")
	static void UnlinkApple(FOnUnlinkAppleResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkCustomID")
	static void UnlinkCustomID(FOnUnlinkCustomIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkFacebookAccount")
	static void UnlinkFacebookAccount(FOnUnlinkFacebookAccountResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkGoogleAccount")
	static void UnlinkGoogleAccount(FOnUnlinkGoogleAccountResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UnlinkIOSDeviceID")
	static void UnlinkIOSDeviceID(FOnUnlinkIOSDeviceIDResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UpdateAvatarUrl")
	static void UpdateAvatarUrl(FUpdateAvatarUrlRequest request, FOnUpdateAvatarUrlResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UpdateImageAvatarUrl")
	static void UpdateImageAvatarUrl(FUpdateImageAvatarUrlRequest request, FOnUpdateImageAvatarUrlResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UpdateUserAvatar")
	static void UpdateUserAvatar(FUpdateUserAvatarRequest request, FOnUpdateUserAvatarResult result, FOnApiException error);

	UFUNCTION(BlueprintCallable, Category = "Avataryug | UpdateUserProjectDisplayName")
	static void UpdateUserProjectDisplayName(FUpdateUserProjectDisplayNameRequest request, FOnUpdateUserProjectDisplayNameResult result, FOnApiException error);
};
