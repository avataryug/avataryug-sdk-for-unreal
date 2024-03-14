// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameStructs.h"
#include "GameFramework/Actor.h"
#include "DefaultModels.generated.h"

USTRUCT(BlueprintType)
struct FThumbnailUrlExp
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int device;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int texture;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString thumbnail_url;
};
USTRUCT(BlueprintType)
struct FGetExpressionsResponseDataInner
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DisplayName;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Description;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Category;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString CustomMetaData;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FThumbnailUrlExp> ThumbnailUrl;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString BlendshapeKeys;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Tags;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Color;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Metadata;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ID;
};
USTRUCT(BlueprintType)
struct FGetExpressionsResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FGetExpressionsResponseDataInner> Data;
};

USTRUCT(BlueprintType)
struct FThumbnailUrlClip
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int device;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int texture;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString thumbnail_url;
};
USTRUCT(BlueprintType)
struct FArtifactUrlClip
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int device;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int format;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString url;
};

USTRUCT(BlueprintType)
struct FGetClipsResponseDataInner
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DisplayName;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Description;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Category;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString CustomMetaData;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FThumbnailUrlClip> ThumbnailUrl;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FArtifactUrlClip> Artifacts;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Tags;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Color;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Metadata;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int ClipType;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ID;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ClipTemplateID;
};

USTRUCT(BlueprintType)
struct FGetClipsResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FGetClipsResponseDataInner> Data;
};

USTRUCT(BlueprintType)
struct FUpdateDefaultAvatarIDRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DefaultAvatarID;
};
USTRUCT(BlueprintType)
struct FUpdateDefaultAvatarIDResult
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
struct FGenerateAvatarMeshRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AvatarID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
};

USTRUCT(BlueprintType)
struct FRenderAvatarImageRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AvatarID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
};
USTRUCT(BlueprintType)
struct FSendAccountRecoveryEmailRequset
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString EmailID;
};
USTRUCT(BlueprintType)
struct FRegisterUserResponseDataUser
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UserID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DisplayName;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString CreatedAt;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Verified;
};

USTRUCT(BlueprintType)
struct FRegisterUserResponseData
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AccessToken;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString LinkedAccounts;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FRegisterUserResponseDataUser User;
};

USTRUCT(BlueprintType)
struct FRegisterUserResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FRegisterUserResponseData Data;
};

USTRUCT(BlueprintType)
struct FSendAccountVerificationEmailResponse
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
struct FGetAdsPlacementResponseData
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString PlacementName;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AdFormat;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AdUnit;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Rewards;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Segments;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AdLimits;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ID;
};

USTRUCT(BlueprintType)
struct FGetAdsPlacementResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FGetAdsPlacementResponseData Data;
};

USTRUCT(BlueprintType)
struct FRegisterUserRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString EmailID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Password;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DisplayName;
};

USTRUCT(BlueprintType)
struct FDeleteUserResponse
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
struct FRecordAdsActivityResponseData
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Owner;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString RevenueCurrency;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 AdRevenue;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString PlacementID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UpdatedAt;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Id;
};
USTRUCT(BlueprintType)
struct FSyncAvatarsRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UserID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool Mesh;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool Image;
};

USTRUCT(BlueprintType)
struct FGetAllBucketVerticesResultDataInner
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString BucketName;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString MainCatID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString VertexArray;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Meta;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ID;
};

USTRUCT(BlueprintType)
struct FGrantAdsRewardRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString PlacementID;
};
USTRUCT(BlueprintType)
struct FGetAllBucketVerticesResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        TArray<FGetAllBucketVerticesResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FRecordAdsActivityResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FRecordAdsActivityResponseData Data;
};

USTRUCT(BlueprintType)
struct FGrantAdsRewardResponse
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
struct FDeleteUserRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UserID;
};

USTRUCT(BlueprintType)
struct FUpdateUserDemographicsRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Gender;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AgeRange;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Race;
};
USTRUCT(BlueprintType)
struct FUpdateUserDemographicsResponse
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
struct FRenderAvatarImageResponseData
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Platform;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ImageURL;
};

USTRUCT(BlueprintType)
struct FRenderAvatarImageResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FRenderAvatarImageResponseData Data;
};

USTRUCT(BlueprintType)
struct FRecordAdsActivityRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString RevenueCurrency;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 AdRevenue;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString PlacementID;
};

USTRUCT(BlueprintType)
struct FGenerateAvatarMeshResponseData
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString ID;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString MeshUrl;
};

USTRUCT(BlueprintType)
struct FGenerateAvatarMeshResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FGenerateAvatarMeshResponseData Data;
};

UCLASS()
class AVATARYUG_API ADefaultModels : public AActor
{
        GENERATED_BODY()
};
