// Fill out your copyright notice in the Description page of Project Settings.

#include "AvatarPresetsAPI/AvatarPresetsAPI.h"
#include "JsonObjectConverter.h"

void UAvatarPresetsAPI::GetUserAvatarAllData(FString AvatarID, FString Platform, TFunction<void(FGetUserAvatarAllDataResponse &)> result, TFunction<void(FApiException &)> error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("AvatarID", AvatarID);
    inputDictionary.Add("Platform", Platform);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(inputDictionary, "GET", "GetUserAvatarAllData");
    MyAsyncAction->GetUserAvatarAllDataResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}

void UAvatarPresetsAPI::GetAvatarPresets(int Gender, int Status, FOnGetAvatarPresetsResult result, FOnApiException error)
{
    // UE_LOG(LogTemp, Display, TEXT("API----GetAvatarPresets------>"));
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("Status", FString::FromInt(Status));
    inputDictionary.Add("Gender", FString::FromInt(Gender));
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(inputDictionary, "GET", "GetAvatarPresets");
    MyAsyncAction->GetAvatarPresetsResult = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}

void UAvatarPresetsAPI::GetAvatarPresets(int Gender, int Status, TFunction<void(FGetAvatarPresetsResult &)> result, TFunction<void(FApiException &)> error)
{

    // resu.Add(result);
    // FString JsonString;
    // FJsonObjectConverter::UStructToJsonObjectString(&result, JsonString);
    // // FString JsonString;
    // // FJsonObjectConverter::UStructToJsonObjectString(result, JsonString);
    // UE_LOG(LogTemp, Display, TEXT("API----GetAvatarPresets------>%s"),*JsonString);

    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("Status", FString::FromInt(Status));
    inputDictionary.Add("Gender", FString::FromInt(Gender));
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(inputDictionary, "GET", "GetAvatarPresets");
    MyAsyncAction->GetAvatarPresetsResults = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->ActivateQuerry();
}

void UAvatarPresetsAPI::GetAvatarPresetsByID(FString avatarPresetID, FOnGetAvatarPresetByID200 result, FOnApiException error)
{
    TMap<FString, FString> inputDictionary;
    inputDictionary.Add("AvatarPresetID", avatarPresetID);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(inputDictionary, "GET", "GetAvatarPresetsByID");
    MyAsyncAction->GetAvatarPresetByID200 = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->ActivateQuerry();
}

void UAvatarPresetsAPI::GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, FOnGrantAvatarToUserResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(JsonString, "POST", "GrantAvatarPresetToUser");
    MyAsyncAction->GrantAvatarToUserResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAvatarPresetsAPI::GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, TFunction<void(FGrantAvatarToUserResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(JsonString, "POST", "GrantAvatarPresetToUser");
    MyAsyncAction->GrantAvatarToUserResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}

void UAvatarPresetsAPI::GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, FOnGrantAvatarPresetItemsToUserResponse result, FOnApiException error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(JsonString, "POST", "GrantAvatarPresetItemsToUser");
    MyAsyncAction->GrantAvatarPresetItemsToUserResponse = result;
    MyAsyncAction->Error = error;
    MyAsyncAction->Activate();
}

void UAvatarPresetsAPI::GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, TFunction<void(FGrantAvatarPresetItemsToUserResponse &)> result, TFunction<void(FApiException &)> error)
{
    FString JsonString;
    FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
    UAvatarPresetsRequest *MyAsyncAction = UAvatarPresetsRequest::AvatarPresetsRequest(JsonString, "POST", "GrantAvatarPresetItemsToUser");
    MyAsyncAction->GrantAvatarPresetItemsToUserResponses = result;
    MyAsyncAction->ErrorCallback = error;
    MyAsyncAction->Activate();
}
