// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DefaultModels.h"
#include "CommonModels.h"
#include "DefaultModels.h"
#include "DefaultRequest.h"

#include "DefaultAPI.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UDefaultAPI : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()
public:
    static void UpdateUserDemographics(FUpdateUserDemographicsRequest request, FOnUpdateUserDemographicsResponse result, FOnApiException error);
    static void UpdateUserDemographics(FUpdateUserDemographicsRequest request, TFunction<void(FUpdateUserDemographicsResponse &)> result, TFunction<void(FApiException &)> error);
    static void RecordAdsActivity(FRecordAdsActivityRequest request, FOnRecordAdsActivityResponse result, FOnApiException error);
    static void GetAllBucketVertices(FString platform, FOnGetAllBucketVerticesResult result, FOnApiException error);
    static void GrantAdsReward(FGrantAdsRewardRequest request, FOnGrantAdsRewardResponse result, FOnApiException error);
    static void DeleteUser(FDeleteUserRequest request, FOnDeleteUserResponse result, FOnApiException error);
    static void RegisterUser(FRegisterUserRequest request, FOnRegisterUserResponse result, FOnApiException error);
    static void SendAccountRecoveryEmail(FSendAccountRecoveryEmailRequset request, FOnSendAccountVerificationEmailResponse result, FOnApiException error);
    static void GetAdsPlacement(FString appid, FOnGetAdsPlacementResponse result, FOnApiException error);
    static void RenderAvatarImage(FRenderAvatarImageRequest request, FOnRenderAvatarImageResponse result, FOnApiException error);
    static void RenderAvatarImage(FRenderAvatarImageRequest request, TFunction<void(FRenderAvatarImageResponse &)> result, TFunction<void(FApiException &)> error);
    static void GenerateAvatarMesh(FGenerateAvatarMeshRequest request, FOnGenerateAvatarMeshResponse result, FOnApiException error);
    static void GenerateAvatarMesh(FGenerateAvatarMeshRequest request, TFunction<void(FGenerateAvatarMeshResponse &)> result, TFunction<void(FApiException &)> error);
    static void SyncAvatar(FSyncAvatarsRequest request, FOnSyncAvatarsResponse result, FOnApiException error);
    static void SyncAvatar(FSyncAvatarsRequest request, TFunction<void(FString &)> result, TFunction<void(FApiException &)> error);
    static void UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, FOnUpdateDefaultAvatarIDResult result, FOnApiException error);
    static void UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, TFunction<void(FUpdateDefaultAvatarIDResult &)> result, TFunction<void(FApiException &)> error);
    static void GetClips(int Status, FOnGetClipsResponse result, FOnApiException error);
    static void GetExpressions(int Status, FOnGetExpressionsResponse result, FOnApiException error);
};
