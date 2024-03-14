// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Optional.h"
#include "AuthenticationModels.generated.h"

USTRUCT(BlueprintType)
struct F201LoginWithCustomIDDataUser
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UserID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString DisplayName;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString CreatedAt;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Verified;
};

USTRUCT(BlueprintType)
struct FLoginWithAndroidDeviceIDResultData
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AccessToken;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString LinkedAccounts;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        F201LoginWithCustomIDDataUser User;
};

USTRUCT(BlueprintType)
struct FLoginWithCustomIDRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString CustomID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FSendAccountVerificationEmailRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString EmailID;
};

USTRUCT(BlueprintType)
struct FVerifyUserWithEmailRequest
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString UserID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString VerificationCode;
};

USTRUCT(BlueprintType)
struct FUpdateEmailPasswordRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString EmailID;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString VerificationCode;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Password;
};

USTRUCT(BlueprintType)
struct FLoginWithIOSDeviceIDRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString IOSDeviceID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FLoginWithGoogleRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString GoogleID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString GoogleServerAuthCode;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FLoginWithFacebookRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString FacebookID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString FbAccessToken;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FLoginWithEmailAddressRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString EmailID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Password;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FLoginWithAppleRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AppleID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AppleIdentityToken;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FLoginWithAndroidDeviceIDRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString AndroidDeviceID;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        bool CreateAccount;
};

USTRUCT(BlueprintType)
struct FChangePasswordRequest
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString OldPassword;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString NewPassword;
};

USTRUCT(BlueprintType)
struct FLoginWithCustomIDResult
{
        GENERATED_USTRUCT_BODY()

        TOptional<int> Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};
USTRUCT(BlueprintType)
struct FLoginWithIOSDeviceIDResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};

USTRUCT(BlueprintType)
struct FLoginWithGoogleResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};

USTRUCT(BlueprintType)
struct FLoginWithFacebookResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};

USTRUCT(BlueprintType)
struct FLoginWithEmailAddressResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};

USTRUCT(BlueprintType)
struct FLoginWithAppleResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};
USTRUCT(BlueprintType)
struct FLoginWithAndroidDeviceIDResult
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FLoginWithAndroidDeviceIDResultData Data;
};

USTRUCT(BlueprintType)
struct FUpdateEmailPasswordResponse
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
struct FVerifyUserWithEmailResponse
{
        GENERATED_USTRUCT_BODY()
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code = 0;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;
        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Message;
};

USTRUCT(BlueprintType)
struct FSendAccountRecoveryEmailResponse
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
struct FChangePasswordResponse
{
        GENERATED_USTRUCT_BODY()

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        int32 Code;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Status;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
        FString Message;
};