// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AvatarPresetsRequest.h"
#include "AvatarPresetsAPI.h"
#include "AvatarPresetsHandler.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UAvatarPresetsHandler : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static void GetAvatarPresets(int Gender, int Status, FOnGetAvatarPresetsResult result, FOnApiException error);
	static void GetAvatarPresets(int Gender, int Status, TFunction<void(FGetAvatarPresetsResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GetAvatarPresetsByID(FString avatarPresetID, FOnGetAvatarPresetByID200 result, FOnApiException error);
	UFUNCTION(BlueprintCallable)
	static void GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, FOnGrantAvatarToUserResponse result, FOnApiException error);

	static void GrantAvatarPresetToUser(FGrantAvatarToUserRequest request, TFunction<void(FGrantAvatarToUserResponse &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION(BlueprintCallable)
	static void GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, FOnGrantAvatarPresetItemsToUserResponse result, FOnApiException error);

	static void GrantAvatarPresetItemsToUser(FGrantAvatarPresetItemsToUserRequest request, TFunction<void(FGrantAvatarPresetItemsToUserResponse &)> result, TFunction<void(FApiException &)> error);
	static void GetUserAvatarAllData(FString AvatarID, FString Platform, TFunction<void(FGetUserAvatarAllDataResponse &)> result, TFunction<void(FApiException &)> error);
};
