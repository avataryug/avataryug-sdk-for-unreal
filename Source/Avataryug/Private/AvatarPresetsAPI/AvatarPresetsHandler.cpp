// Fill out your copyright notice in the Description page of Project Settings.

#include "AvatarPresetsAPI/AvatarPresetsHandler.h"

void UAvatarPresetsHandler::GetAvatarPresets(int Gender, int Status, FOnGetAvatarPresetsResult result, FOnApiException error)
{
   UE_LOG(LogTemp, Display, TEXT("Handler----GetAvatarPresets------>"));
   UAvatarPresetsAPI::GetAvatarPresets(Gender, Status, result, error);
}

void UAvatarPresetsHandler::GetAvatarPresets(int Gender, int Status, TFunction<void(FGetAvatarPresetsResult &)> result, TFunction<void(FApiException &)> error)
{
   UAvatarPresetsAPI::GetAvatarPresets(Gender, Status, result, error);
}
void UAvatarPresetsHandler::GetUserAvatarAllData(FString AvatarID, FString Platform, TFunction<void(FGetUserAvatarAllDataResponse &)> result, TFunction<void(FApiException &)> error)
{
   UAvatarPresetsAPI::GetUserAvatarAllData(AvatarID, Platform, result, error);
}

void UAvatarPresetsHandler::GetAvatarPresetsByID(FString avatarPresetID, FOnGetAvatarPresetByID200 result, FOnApiException error)
{
   UAvatarPresetsAPI::GetAvatarPresetsByID(avatarPresetID, result, error);
}

void UAvatarPresetsHandler::GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, FOnGrantAvatarToUserResponse result, FOnApiException error)
{
   UAvatarPresetsAPI::GrantAvatarPresetToUser(request, result, error);
}

void UAvatarPresetsHandler::GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, TFunction<void(FGrantAvatarToUserResponse &)> result, TFunction<void(FApiException &)> error)
{
   UAvatarPresetsAPI::GrantAvatarPresetToUser(request, result, error);
}

void UAvatarPresetsHandler::GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, FOnGrantAvatarPresetItemsToUserResponse result, FOnApiException error)
{
   UAvatarPresetsAPI::GrantAvatarPresetItemsToUser(request, result, error);
}

void UAvatarPresetsHandler::GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, TFunction<void(FGrantAvatarPresetItemsToUserResponse &)> result, TFunction<void(FApiException &)> error)
{
   UAvatarPresetsAPI::GrantAvatarPresetItemsToUser(request, result, error);
}
