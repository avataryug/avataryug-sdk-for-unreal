// Fill out your copyright notice in the Description page of Project Settings.

#include "DefaultAPI/DefaultHandler.h"
#include "CommonModels.h"
#include "DefaultAPI/DefaultModels.h"
#include "DefaultAPI/DefaultAPI.h"
#include "DefaultAPI/DefaultRequest.h"

void UDefaultHandler::UpdateUserDemographics(FUpdateUserDemographicsRequest request, FOnUpdateUserDemographicsResponse result, FOnApiException error)
{
    UDefaultAPI::UpdateUserDemographics(request, result, error);
}
void UDefaultHandler::UpdateUserDemographics(FUpdateUserDemographicsRequest request, TFunction<void(FUpdateUserDemographicsResponse &)> result, TFunction<void(FApiException &)> error)
{
    UDefaultAPI::UpdateUserDemographics(request, result, error);
}
void UDefaultHandler::RecordAdsActivity(FRecordAdsActivityRequest request, FOnRecordAdsActivityResponse result, FOnApiException error)
{
    UDefaultAPI::RecordAdsActivity(request, result, error);
}
void UDefaultHandler::GetAllBucketVertices(FString platform, FOnGetAllBucketVerticesResult result, FOnApiException error)
{
    UDefaultAPI::GetAllBucketVertices(platform, result, error);
}
void UDefaultHandler::GrantAdsReward(FGrantAdsRewardRequest request, FOnGrantAdsRewardResponse result, FOnApiException error)
{
    UDefaultAPI::GrantAdsReward(request, result, error);
}
void UDefaultHandler::DeleteUser(FDeleteUserRequest request, FOnDeleteUserResponse result, FOnApiException error)
{
    UDefaultAPI::DeleteUser(request, result, error);
}
void UDefaultHandler::RegisterUser(FRegisterUserRequest request, FOnRegisterUserResponse result, FOnApiException error)
{
    UDefaultAPI::RegisterUser(request, result, error);
}
void UDefaultHandler::SendAccountRecoveryEmail(FSendAccountRecoveryEmailRequset request, FOnSendAccountVerificationEmailResponse result, FOnApiException error)
{
    UDefaultAPI::SendAccountRecoveryEmail(request, result, error);
}
void UDefaultHandler::GetAdsPlacement(FString appid, FOnGetAdsPlacementResponse result, FOnApiException error)
{
    UDefaultAPI::GetAdsPlacement(appid, result, error);
}
void UDefaultHandler::RenderAvatarImage(FRenderAvatarImageRequest request, FOnRenderAvatarImageResponse result, FOnApiException error)
{
    UDefaultAPI::RenderAvatarImage(request, result, error);
}
void UDefaultHandler::RenderAvatarImage(FRenderAvatarImageRequest request, TFunction<void(FRenderAvatarImageResponse &)> result, TFunction<void(FApiException &)> error)
{
    UDefaultAPI::RenderAvatarImage(request, result, error);
}
void UDefaultHandler::GenerateAvatarMesh(FGenerateAvatarMeshRequest request, FOnGenerateAvatarMeshResponse result, FOnApiException error)
{
    UDefaultAPI::GenerateAvatarMesh(request, result, error);
}
void UDefaultHandler::GenerateAvatarMesh(FGenerateAvatarMeshRequest request, TFunction<void(FGenerateAvatarMeshResponse &)> result, TFunction<void(FApiException &)> error)
{
    UDefaultAPI::GenerateAvatarMesh(request, result, error);
}
void UDefaultHandler::SyncAvatar(FSyncAvatarsRequest request, FOnSyncAvatarsResponse result, FOnApiException error)
{
    UDefaultAPI::SyncAvatar(request, result, error);
}
void UDefaultHandler::SyncAvatar(FSyncAvatarsRequest request, TFunction<void(FString &)> result, TFunction<void(FApiException &)> error)
{
    UDefaultAPI::SyncAvatar(request, result, error);
}
void UDefaultHandler::UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, FOnUpdateDefaultAvatarIDResult result, FOnApiException error)
{
    UDefaultAPI::UpdateDefaultAvatarID(request, result, error);
}
void UDefaultHandler::UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, TFunction<void(FUpdateDefaultAvatarIDResult &)> result, TFunction<void(FApiException &)> error)
{
    UDefaultAPI::UpdateDefaultAvatarID(request, result, error);
}
void UDefaultHandler::GetClips(int Status, FOnGetClipsResponse result, FOnApiException error)
{
    UDefaultAPI::GetClips(Status, result, error);
}
void UDefaultHandler::GetExpressions(int Status, FOnGetExpressionsResponse result, FOnApiException error)
{
    UDefaultAPI::GetExpressions(Status, result, error);
}