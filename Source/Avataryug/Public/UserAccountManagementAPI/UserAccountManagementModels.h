// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UserAccountManagementModels.generated.h"

USTRUCT(BlueprintType)
struct FAddEmailPasswordRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString EmailID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Password;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;
};

USTRUCT(BlueprintType)
struct FAddGenericServiceIDRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString GenericServiceID;
};

USTRUCT(BlueprintType)
struct FAddUserAvatarRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarData;
};

USTRUCT(BlueprintType)
struct FDeleteUserAvatarRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarID;
};

USTRUCT(BlueprintType)
struct FLinkAndroidDeviceIDRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AndroidDeviceID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};

USTRUCT(BlueprintType)
struct FLinkIOSDeviceIDRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DeviceID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};

USTRUCT(BlueprintType)
struct FLinkGoogleAccountRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString GoogleID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString GoogleServerAuthCode;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};

USTRUCT(BlueprintType)
struct FLinkFacebookAccountRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AccessToken;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString FacebookID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};

USTRUCT(BlueprintType)
struct FLinkCustomIDRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CustomID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};

USTRUCT(BlueprintType)
struct FLinkAppleRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AppleID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString IdentityToken;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool ForceLink;
};
USTRUCT(BlueprintType)
struct FAddEmailPasswordResult
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
struct FAddGenericServiceIDResult
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
struct FDeleteUserAvatarResult
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
struct FAddUserAvatarResultData
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
struct FAddUserAvatarResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FAddUserAvatarResultData Data;
};

USTRUCT(BlueprintType)
struct FUpdateUserProjectDisplayNameResult
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
struct FUpdateUserProjectDisplayNameRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;
};

USTRUCT(BlueprintType)
struct FUpdateImageAvatarUrlRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ImageUrl;
};

USTRUCT(BlueprintType)
struct FUpdateUserAvatarResultData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarUrl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbUrl;
};

USTRUCT(BlueprintType)
struct FUpdateUserAvatarResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FUpdateUserAvatarResultData Data;
};

USTRUCT(BlueprintType)
struct FGetUserProfileResultData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UpdatedAt;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbURL;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarURL;
};

USTRUCT(BlueprintType)
struct FGetUserProfileResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FGetUserProfileResultData Data;
};

USTRUCT(BlueprintType)
struct FUpdateUserAvatarRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AvatarUrl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ThumbUrl;
};

USTRUCT(BlueprintType)
struct FUpdateAvatarUrlRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString MeshUrl;
};
USTRUCT(BlueprintType)
struct FUnlinkGoogleAccountResult
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
struct FUnlinkFacebookAccountResult
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
struct FRemoveGenericServiceIDResult
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
struct FUnlinkAndroidDeviceIDResult
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
struct FUnlinkAppleResult
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
struct FUnlinkIOSDeviceIDResult
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
struct FUnlinkCustomIDResult
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
struct FUpdateImageAvatarUrlResult
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
struct FUpdateAvatarUrlResult
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
struct FOpenGetUserAccountInfoResultData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Wallet;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DefaultAvatarID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Location;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UpdatedAt;
};

USTRUCT(BlueprintType)
struct FGetUserAccountInfoResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FOpenGetUserAccountInfoResultData Data;
};

USTRUCT(BlueprintType)
struct FLinkIOSDeviceIDResult
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
struct FLinkGoogleAccountResult
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
struct FLinkFacebookAccountResult
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
struct FLinkCustomIDResult
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
struct FLinkAppleResult
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
struct FLinkAndroidDeviceIDResult
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
struct FGetUsersAllAvatarsResultDataInner
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
struct FGetUsersAllAvatarsResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGetUsersAllAvatarsResultDataInner> Data;
};

UCLASS()
class AVATARYUG_API AUserAccountManagementModels : public AActor
{
    GENERATED_BODY()
};
