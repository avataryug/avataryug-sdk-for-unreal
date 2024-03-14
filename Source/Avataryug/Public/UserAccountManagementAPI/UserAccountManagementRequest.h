// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonModels.h"
#include "../CommonSettings.h"
#include "Http.h"
#include "UserAccountManagementModels.h"

#include "UserAccountManagementRequest.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UUserAccountManagementRequest : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	FHttpModule *Http;
	FString Method;
	FString Url;
	FString Token;
	FString JsonRequest;
	FString EndPoint;
	TMap<FString, FString> inputDictionary;
	static UUserAccountManagementRequest *UserAccountManagementRequest(FString requestjson, FString method, FString endPoint);
	static UUserAccountManagementRequest *UserAccountManagementRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint);
	FOnAddEmailPasswordResult AddEmailPasswordResult;
	FOnAddGenericServiceIDResult AddGenericServiceIDResult;
	FOnAddUserAvatarResult AddUserAvatarResult;
	FOnDeleteUserAvatarResult DeleteUserAvatarResult;

	FOnGetUserProfileResult GetUserProfileResult;

	FOnLinkAndroidDeviceIDResult LinkAndroidDeviceIDResult;
	FOnLinkAppleResult LinkAppleResult;
	FOnLinkCustomIDResult LinkCustomIDResult;
	FOnLinkFacebookAccountResult LinkFacebookAccountResult;
	FOnLinkGoogleAccountResult LinkGoogleAccountResult;
	FOnLinkIOSDeviceIDResult LinkIOSDeviceIDResult;
	FOnRemoveGenericServiceIDResult RemoveGenericServiceIDResult;
	FOnUnlinkAndroidDeviceIDResult UnlinkAndroidDeviceIDResult;
	FOnUnlinkCustomIDResult UnlinkCustomIDResult;
	FOnUnlinkFacebookAccountResult UnlinkFacebookAccountResult;
	FOnUnlinkGoogleAccountResult UnlinkGoogleAccountResult;
	FOnUpdateAvatarUrlResult UpdateAvatarUrlResult;
	FOnUpdateImageAvatarUrlResult UpdateImageAvatarUrlResult;
	FOnUpdateUserAvatarResult UpdateUserAvatarResult;
	FOnUpdateUserProjectDisplayNameResult UpdateUserProjectDisplayNameResult;
	FOnUnlinkIOSDeviceIDResult UnlinkIOSDeviceIDResult;
	FOnUnlinkAppleResult UnlinkAppleResult;

	FOnGetUserAccountInfoResult GetUserAccountInfoResult;
	TFunction<void(FGetUserAccountInfoResult &)> GetUserAccountInfoResults;

	FOnGetUsersAllAvatarsResult GetUsersAllAvatarsResult;
	TFunction<void(FGetUsersAllAvatarsResult &)> GetUsersAllAvatarsResults;

	FOnApiException Error;
	TFunction<void(FApiException &)> ErrorCallback;

	FOnReceiveCallback infocallback;

public:
	virtual void Activate() override;
	void ActivateQuerry();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
