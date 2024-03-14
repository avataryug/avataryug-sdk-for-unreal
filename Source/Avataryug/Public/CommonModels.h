// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserAccountManagementAPI/UserAccountManagementModels.h"
#include "CommonModels.generated.h"

USTRUCT(BlueprintType)
struct FApiException
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 ErrorCode;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ErrorMessage;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnApiException, FApiException, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReceiveCallback, FString, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddEmailPasswordResult, FAddEmailPasswordResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddGenericServiceIDResult, FAddGenericServiceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAddUserAvatarResult, FAddUserAvatarResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteUserAvatarResult, FDeleteUserAvatarResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUserAccountInfoResult, FGetUserAccountInfoResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUserProfileResult, FGetUserProfileResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetUsersAllAvatarsResult, FGetUsersAllAvatarsResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkAndroidDeviceIDResult, FLinkAndroidDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkAppleResult, FLinkAppleResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkCustomIDResult, FLinkCustomIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkFacebookAccountResult, FLinkFacebookAccountResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkGoogleAccountResult, FLinkGoogleAccountResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLinkIOSDeviceIDResult, FLinkIOSDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRemoveGenericServiceIDResult, FRemoveGenericServiceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkAndroidDeviceIDResult, FUnlinkAndroidDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkCustomIDResult, FUnlinkCustomIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkFacebookAccountResult, FUnlinkFacebookAccountResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkGoogleAccountResult, FUnlinkGoogleAccountResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateAvatarUrlResult, FUpdateAvatarUrlResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateImageAvatarUrlResult, FUpdateImageAvatarUrlResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateUserAvatarResult, FUpdateUserAvatarResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateUserProjectDisplayNameResult, FUpdateUserProjectDisplayNameResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkIOSDeviceIDResult, FUnlinkIOSDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUnlinkAppleResult, FUnlinkAppleResult, result);

USTRUCT(BlueprintType)
struct FSkinToneArtifact
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString body_path;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int device;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString face_path;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int texture_size;
};

USTRUCT(BlueprintType)
struct FSkinToneArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FSkinToneArtifact> artifacts;
};

USTRUCT(BlueprintType)
struct FThreeDArtifact
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int device;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int format;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int lod;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int normals;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int texture_size;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString url;
};

USTRUCT(BlueprintType)
struct FThreeDArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FThreeDArtifact> artifacts;
};

USTRUCT(BlueprintType)
struct FAvatarPresetArtifact
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 device;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 format;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 lod;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 normals;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 texture;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString url;
};

USTRUCT(BlueprintType)
struct FAvatarPresetArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FAvatarPresetArtifact> artifacts;
};

USTRUCT(BlueprintType)
struct FAvatarPresetImageArtifact
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int device;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int quality;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString texture;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString thumbnail_url;
};

USTRUCT(BlueprintType)
struct FAvatarPresetImageArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FAvatarPresetImageArtifact> artifacts;
};

USTRUCT(BlueprintType)
struct FTwoDArtifact
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int device;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int format;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int lod;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int normals;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int texture_size;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString url;
};
USTRUCT(BlueprintType)
struct FTwoDArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FTwoDArtifact> artifacts;
};

USTRUCT(BlueprintType)
struct FStyle
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ClipID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ExpressionID;
};

USTRUCT(BlueprintType)
struct FClipExpressionData
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FStyle Style;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int gender;
};

UCLASS()
class AVATARYUG_API ACommonModels : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ACommonModels();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
USTRUCT(BlueprintType)
struct FModelDataRequest
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
	FString id;
};


USTRUCT(BlueprintType)
struct FPlatformInputRequest
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString Platform;
};

USTRUCT(BlueprintType)
struct FModelInputRequest
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString id;
};

USTRUCT(BlueprintType)
struct FModelData
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString MainCatID ;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString CoreBucket;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString GlbPath;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString ConflictingBuckets;
};
USTRUCT(BlueprintType)
struct FModelDataResponce
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    int code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FModelData data;
};

USTRUCT(BlueprintType)
struct FModelDataListResponce
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    int code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FModelData> data;
};


USTRUCT(BlueprintType)
struct FConflictName
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString name;
};
USTRUCT(BlueprintType)
struct FConflictList
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FConflictName> conflits;
};