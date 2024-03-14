// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AvatarPresetsModel.h"
#include "Http.h"
#include "../CommonSettings.h"
#include "CommonModels.h"
#include "AvatarPresetsRequest.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetAvatarPresetsResult, FGetAvatarPresetsResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetAvatarPresetByID200, FGetAvatarPresetByID200, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGrantAvatarToUserResponse, FGrantAvatarToUserResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGrantAvatarPresetItemsToUserResponse, FGrantAvatarPresetItemsToUserResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUserAvatarAllDataResponse, FGetUserAvatarAllDataResponse, result);
/**
 *
 */
UCLASS()
class AVATARYUG_API UAvatarPresetsRequest : public UBlueprintAsyncActionBase
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
	static UAvatarPresetsRequest *AvatarPresetsRequest(FString requestjson, FString method, FString endPoint);
	static UAvatarPresetsRequest *AvatarPresetsRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint);

	FOnGetAvatarPresetsResult GetAvatarPresetsResult;
	TFunction<void(FGetAvatarPresetsResult &)> GetAvatarPresetsResults;

	FOnGetAvatarPresetByID200 GetAvatarPresetByID200;

	FOnGrantAvatarToUserResponse GrantAvatarToUserResponse;
	TFunction<void(FGrantAvatarToUserResponse &)> GrantAvatarToUserResponses;

	FOnGrantAvatarPresetItemsToUserResponse GrantAvatarPresetItemsToUserResponse;
	TFunction<void(FGrantAvatarPresetItemsToUserResponse &)> GrantAvatarPresetItemsToUserResponses;

	FOnGetUserAvatarAllDataResponse GetUserAvatarAllDataResponse;
	TFunction<void(FGetUserAvatarAllDataResponse &)> GetUserAvatarAllDataResponses;

	TFunction<void(FApiException &)> ErrorCallback;
	FOnApiException Error;

public:
	virtual void Activate() override;
	void ActivateQuerry();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
