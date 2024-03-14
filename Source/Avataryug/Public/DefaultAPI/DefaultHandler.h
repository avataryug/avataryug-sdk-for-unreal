// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonModels.h"
#include "DefaultModels.h"
#include "DefaultRequest.h"
#include "DefaultHandler.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UDefaultHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void UpdateUserDemographics(FUpdateUserDemographicsRequest request, FOnUpdateUserDemographicsResponse result, FOnApiException error);

	static void UpdateUserDemographics(FUpdateUserDemographicsRequest request, TFunction<void(FUpdateUserDemographicsResponse &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void RecordAdsActivity(FRecordAdsActivityRequest request, FOnRecordAdsActivityResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetAllBucketVertices(FString platform, FOnGetAllBucketVerticesResult result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GrantAdsReward(FGrantAdsRewardRequest request, FOnGrantAdsRewardResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void DeleteUser(FDeleteUserRequest request, FOnDeleteUserResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void RegisterUser(FRegisterUserRequest request, FOnRegisterUserResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void SendAccountRecoveryEmail(FSendAccountRecoveryEmailRequset request, FOnSendAccountVerificationEmailResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetAdsPlacement(FString appid, FOnGetAdsPlacementResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void RenderAvatarImage(FRenderAvatarImageRequest request, FOnRenderAvatarImageResponse result, FOnApiException error);
	static void RenderAvatarImage(FRenderAvatarImageRequest request, TFunction<void(FRenderAvatarImageResponse &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GenerateAvatarMesh(FGenerateAvatarMeshRequest request, FOnGenerateAvatarMeshResponse result, FOnApiException error);
	static void GenerateAvatarMesh(FGenerateAvatarMeshRequest request, TFunction<void(FGenerateAvatarMeshResponse &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void SyncAvatar(FSyncAvatarsRequest request, FOnSyncAvatarsResponse result, FOnApiException error);

	static void SyncAvatar(FSyncAvatarsRequest request, TFunction<void(FString &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION(BlueprintCallable)
	static void UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, FOnUpdateDefaultAvatarIDResult result, FOnApiException error);

	static void UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, TFunction<void(FUpdateDefaultAvatarIDResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GetClips(int Status, FOnGetClipsResponse result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GetExpressions(int Status, FOnGetExpressionsResponse result, FOnApiException error);
};