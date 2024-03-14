// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommonModels.h"
#include "UserItemManagementModels.generated.h"

USTRUCT(BlueprintType)
struct FAddVirtualCurrencyToUserRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Amount;
};

USTRUCT(BlueprintType)
struct FAddVirtualCurrencyToUserResult
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
struct FConsumeInstanceResult
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
struct FGetUserInventoryResultDataInner
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Expires;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int Count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Content;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
};

USTRUCT(BlueprintType)
struct FGetUserInventoryResult
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Code;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGetUserInventoryResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FGrantInstanceToUserResult
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
struct FConsumeInstanceRequest
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 InstanceCount;
};

USTRUCT(BlueprintType)
struct FPurchaseInstanceRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceType;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Price;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString StoreID;
};

USTRUCT(BlueprintType)
struct FSubtractUserVirtualCurrencyRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Amount;
};

USTRUCT(BlueprintType)
struct FGrantInstanceToUserRequestInstanceIDsInner
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString InstanceType;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int32 Quantity = 0;
};

USTRUCT(BlueprintType)
struct FGrantInstanceToUserRequest
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FGrantInstanceToUserRequestInstanceIDsInner> InstanceIDs;
};

UCLASS()
class AVATARYUG_API AUserItemManagementModels : public AActor
{
    GENERATED_BODY()
};
