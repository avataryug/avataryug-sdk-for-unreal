// Fill out your copyright notice in the Description page of Project Settings.

#include "DefaultAPI/DefaultAPI.h"
#include "DefaultAPI/DefaultModels.h"
#include "DefaultAPI/DefaultRequest.h"
#include "DefaultAPI/DefaultModels.h"
#include "JsonObjectConverter.h"
void UDefaultAPI::UpdateUserDemographics(FUpdateUserDemographicsRequest request, FOnUpdateUserDemographicsResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "UpdateUserDemographics");
    MyAsyncAction->UpdateUserDemographicsResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::UpdateUserDemographics(FUpdateUserDemographicsRequest request, TFunction<void(FUpdateUserDemographicsResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "UpdateUserDemographics");
    MyAsyncAction->UpdateUserDemographicsResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::RecordAdsActivity(FRecordAdsActivityRequest request, FOnRecordAdsActivityResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "RecordAdsActivity");
    MyAsyncAction->RecordAdsActivityResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::GetAllBucketVertices(FString platform, FOnGetAllBucketVerticesResult result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("Platform", platform);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(_inputDictionary, "GET", "GetAllBucketVertices");
    MyAsyncAction->GetAllBucketVerticesResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UDefaultAPI::GrantAdsReward(FGrantAdsRewardRequest request, FOnGrantAdsRewardResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "GrantAdsReward");
    MyAsyncAction->GrantAdsRewardResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::DeleteUser(FDeleteUserRequest request, FOnDeleteUserResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "DELETE", "DeleteUser");
    MyAsyncAction->DeleteUserResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::RegisterUser(FRegisterUserRequest request, FOnRegisterUserResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "RegisterUser");
    MyAsyncAction->RegisterUserResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::SendAccountRecoveryEmail(FSendAccountRecoveryEmailRequset request, FOnSendAccountVerificationEmailResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "SendAccountRecoveryEmail");
    MyAsyncAction->SendAccountVerificationEmailResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::GetAdsPlacement(FString appid, FOnGetAdsPlacementResponse result, FOnApiException error)
{
    TMap<FString, FString> _inputDictionary;
    _inputDictionary.Add("PlacementID", appid);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(_inputDictionary, "GET", "GetAdPlacementByID");
    MyAsyncAction->GetAdsPlacementResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}
void UDefaultAPI::RenderAvatarImage(FRenderAvatarImageRequest request, FOnRenderAvatarImageResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "RenderAvatarImage");
    MyAsyncAction->RenderAvatarImageResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::RenderAvatarImage(FRenderAvatarImageRequest request, TFunction<void(FRenderAvatarImageResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "RenderAvatarImage");
    MyAsyncAction->RenderAvatarImageResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}

void UDefaultAPI::GenerateAvatarMesh(FGenerateAvatarMeshRequest request, FOnGenerateAvatarMeshResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "GenerateAvatarMesh");
    MyAsyncAction->GenerateAvatarMeshResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::GenerateAvatarMesh(FGenerateAvatarMeshRequest request, TFunction<void(FGenerateAvatarMeshResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "GenerateAvatarMesh");
    MyAsyncAction->GenerateAvatarMeshResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}

void UDefaultAPI::SyncAvatar(FSyncAvatarsRequest request, FOnSyncAvatarsResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "SyncAvatars");
    MyAsyncAction->SyncAvatarsResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::SyncAvatar(FSyncAvatarsRequest request, TFunction<void(FString &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "SyncAvatars");
    MyAsyncAction->SyncAvatarsResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, FOnUpdateDefaultAvatarIDResult result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UE_LOG(LogTemp, Display, TEXT("API--UpdateDefaultAvatarID------->%s"), *JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "UpdateDefaultAvatarID");
    MyAsyncAction->UpdateDefaultAvatarIDResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::UpdateDefaultAvatarID(FUpdateDefaultAvatarIDRequest request, TFunction<void(FUpdateDefaultAvatarIDResult &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UE_LOG(LogTemp, Display, TEXT("API--UpdateDefaultAvatarID------->%s"), *JsonString);
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(JsonString, "POST", "UpdateDefaultAvatarID");
    MyAsyncAction->UpdateDefaultAvatarIDs = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}
void UDefaultAPI::GetClips(int Status, FOnGetClipsResponse result, FOnApiException error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("Status", FString::FromInt(Status));
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(inputDictionary, "GET", "GetClips");
    MyAsyncAction->GetClipsResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}

void UDefaultAPI::GetExpressions(int Status, FOnGetExpressionsResponse result, FOnApiException error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("Status", FString::FromInt(Status));
    UDefaultRequest *MyAsyncAction = UDefaultRequest::DefaultRequest(inputDictionary, "GET", "GetExpressions");
    MyAsyncAction->GetExpressionsResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}