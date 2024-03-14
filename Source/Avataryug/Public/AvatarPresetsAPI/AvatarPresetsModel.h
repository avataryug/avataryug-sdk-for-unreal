// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AvatarPresetsModel.generated.h"
USTRUCT(BlueprintType)
struct FGetAvatarPresetsResultDataInner
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Description;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 RealCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CustomMetaData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ImageArtifacts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString MeshArtifacts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString BlendshapeKeys;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Tags;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Props;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Gender;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Color;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Metadata;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Race;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AgeRange;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
};

USTRUCT(BlueprintType)
struct FGetAvatarPresetsResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGetAvatarPresetsResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FGetAvatarPresetByID200Data
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Description;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 RealCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CustomMetaData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ItemThumbnailsUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Artifacts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString BlendshapeKeys;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Tags;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Props;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Gender;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Color;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Metadata;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Race;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AgeRange;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;
};
USTRUCT(BlueprintType)
struct FGetAvatarPresetByID200
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FGetAvatarPresetByID200Data Data;
};
USTRUCT(BlueprintType)
struct FGrantAvatarToUserResponseData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarData;
};

USTRUCT(BlueprintType)
struct FGrantAvatarToUserResponse
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FGrantAvatarToUserResponseData Data;
};

USTRUCT(BlueprintType)
struct FGrantAvatarPresetItemsToUserResponse
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Message;
};

USTRUCT(BlueprintType)
struct FGrantAvatarToUserRequest
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarData;
};

USTRUCT(BlueprintType)
struct FGrantAvatarPresetItemsToUserRequestItemIDsInner
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ItemID;
};

USTRUCT(BlueprintType)
struct FGrantAvatarPresetItemsToUserRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGrantAvatarPresetItemsToUserRequestItemIDsInner> ItemIDs;
};

USTRUCT(BlueprintType)
struct FGetUserAvatarAllDataResponseDataInner
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString TemplateID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ItemCategory;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Artifacts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString BlendshapeKeys;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ItemSkin;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Config;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CoreBucket;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ConflictingBuckets;
};

USTRUCT(BlueprintType)
struct FGetUserAvatarAllDataResponse
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGetUserAvatarAllDataResponseDataInner> Data;
};
/**
 *
 */
class AVATARYUG_API AvatarPresetsModel
{
public:
    AvatarPresetsModel();
    ~AvatarPresetsModel();
};
