// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EconomyModel.generated.h"

USTRUCT(BlueprintType)
struct FGetEconomyBundleByIDResultData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleImageUrl;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsLimitedEdition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleContents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
};

USTRUCT(BlueprintType)
struct FGetEconomyBundleByIDResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FGetEconomyBundleByIDResultData Data;
};

USTRUCT(BlueprintType)
struct FGetEconomyBundlesResultDataInner
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleImageUrl;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsLimitedEdition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BundleContents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
};

USTRUCT(BlueprintType)
struct FGetEconomyBundlesResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	TArray<FGetEconomyBundlesResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FGetEconomyContainerByIDResultData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerImageUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerContents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
};

USTRUCT(BlueprintType)
struct FGetEconomyContainerByIDResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FGetEconomyContainerByIDResultData Data;
};

USTRUCT(BlueprintType)
struct FUnlockContainerInstanceResult
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
struct F201AddEmailPassword
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
struct FGrantAvatarPresetToUserRequest
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
struct F400BadRequest
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Error;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ErrorMessage;
};

USTRUCT(BlueprintType)
struct FEconomyItemRequest
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Gender;
};

USTRUCT(BlueprintType)
struct FGetEconomyItemsResultDataInner
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString TemplateID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int ItemGender;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemSubCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsLimitedEdition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemThumbnailsUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Artifacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BlendshapeKeys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemSkin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Config;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CoreBucket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ConflictingBuckets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString OccupiedBuckets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Blendshapes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString MeshData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BonesPhysics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BoneAdjustments;
};

USTRUCT(BlueprintType)
struct FGetEconomyItemsResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	TArray<FGetEconomyItemsResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FGetEconomyItemsByIDResultData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString TemplateID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 ItemGender;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemSubCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsLimitedEdition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Style;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemThumbnailsUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Artifacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BlendshapeKeys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ItemSkin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Config;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CoreBucket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ConflictingBuckets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString OccupiedBuckets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Blendshapes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString MeshData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BonesPhysics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString BoneAdjustments;
};
USTRUCT(BlueprintType)
struct FGetEconomyItemsByIDResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FGetEconomyItemsByIDResultData Data;
};
USTRUCT(BlueprintType)
struct FGetGetEconomyStoresResultDataInner
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString StoreID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString StoreContents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
};

USTRUCT(BlueprintType)
struct FGetEconomyStoresResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	TArray<FGetGetEconomyStoresResultDataInner> Data;
};

USTRUCT(BlueprintType)
struct FGetStoreItemsByIDResultData
{
  	GENERATED_USTRUCT_BODY()
  	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString StoreContents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	// FString StoreID ;
};

USTRUCT(BlueprintType)
struct FGetStoreItemsByIDResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FGetStoreItemsByIDResultData Data;
};



USTRUCT(BlueprintType)
struct FGetEconomyContainersResultDataInner
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString DisplayName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerCategory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Tags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerImageUrl;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsStackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int IsLimitedEdition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int LimitedEditionIntialCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Entitlement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerContents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString VirtualCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int RealCurrency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString CustomMetaData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ID;
};
USTRUCT(BlueprintType)
struct FGetEconomyContainersResult
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	int32 Code;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	TArray<FGetEconomyContainersResultDataInner> Data;
};
USTRUCT(BlueprintType)
struct FUnlockContainerInstanceRequest
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString ContainerInstanceID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
	FString KeyInstanceID;
};

UCLASS()
class AVATARYUG_API AEconomyModel : public AActor
{
	GENERATED_BODY()
};
