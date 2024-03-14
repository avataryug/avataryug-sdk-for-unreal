// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonModels.h"
#include "Http.h"
#include "DefaultModels.h"
#include "DefaultRequest.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateUserDemographicsResponse, FUpdateUserDemographicsResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRecordAdsActivityResponse, FRecordAdsActivityResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetAllBucketVerticesResult, FGetAllBucketVerticesResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGrantAdsRewardResponse, FGrantAdsRewardResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteUserResponse, FDeleteUserResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRegisterUserResponse, FRegisterUserResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSendAccountVerificationEmailResponse, FSendAccountVerificationEmailResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetAdsPlacementResponse, FGetAdsPlacementResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRenderAvatarImageResponse, FRenderAvatarImageResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGenerateAvatarMeshResponse, FGenerateAvatarMeshResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSyncAvatarsResponse, FString, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateDefaultAvatarIDResult, FUpdateDefaultAvatarIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetExpressionsResponse, FGetExpressionsResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetClipsResponse, FGetClipsResponse, result);

/**
 *
 */
UCLASS()
class AVATARYUG_API UDefaultRequest : public UBlueprintAsyncActionBase
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
	static UDefaultRequest *DefaultRequest(FString requestjson, FString method, FString endPoint);
	static UDefaultRequest *DefaultRequest(TMap<FString, FString> _inputDictionary, FString method, FString endPoint);

	FOnRecordAdsActivityResponse RecordAdsActivityResponse;
	FOnGetAllBucketVerticesResult GetAllBucketVerticesResult;
	FOnGrantAdsRewardResponse GrantAdsRewardResponse;
	FOnDeleteUserResponse DeleteUserResponse;
	FOnRegisterUserResponse RegisterUserResponse;
	FOnSendAccountVerificationEmailResponse SendAccountVerificationEmailResponse;
	FOnGetAdsPlacementResponse GetAdsPlacementResponse;

	FOnGenerateAvatarMeshResponse GenerateAvatarMeshResponse;
	TFunction<void(FGenerateAvatarMeshResponse &)> GenerateAvatarMeshResponses;

	FOnSyncAvatarsResponse SyncAvatarsResponse;
	TFunction<void(FString &)> SyncAvatarsResponses;

	FOnGetExpressionsResponse GetExpressionsResponse;
	FOnGetClipsResponse GetClipsResponse;

	FOnUpdateDefaultAvatarIDResult UpdateDefaultAvatarIDResult;
	TFunction<void(FUpdateDefaultAvatarIDResult &)> UpdateDefaultAvatarIDs;

	FOnRenderAvatarImageResponse RenderAvatarImageResponse;
	TFunction<void(FRenderAvatarImageResponse &)> RenderAvatarImageResponses;

	FOnUpdateUserDemographicsResponse UpdateUserDemographicsResponse;
	TFunction<void(FUpdateUserDemographicsResponse &)> UpdateUserDemographicsResponses;

	TFunction<void(FApiException &)> ErrorCallback;
	FOnApiException Error;

public:
	virtual void Activate() override;
	void ActivateQuerry();

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
