#pragma once

#include "GameEnums.h"
#include "GameStructs.generated.h"

USTRUCT(BlueprintType)
struct FLoadedTattoo
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ItemCategory;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    UTexture *tattooTex;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString tattooid;
};

USTRUCT(BlueprintType)
struct FPropColors
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString HairColor;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString EyebrowColor;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString FacialHairColor;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString LipColor;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString FaceColor;
};
USTRUCT(BlueprintType)
struct FProp
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CoreBucket;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
};

USTRUCT(BlueprintType)
struct FVertexPoint
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString BucketName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString MainCatID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString Platform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString VertexArray;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString Meta;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString ID;
};

USTRUCT(BlueprintType)
struct FProps
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FProp> props;
};

USTRUCT(BlueprintType)
struct FVetexPointList
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    int code;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FVertexPoint> data;
};

USTRUCT(BlueprintType)
struct FBlendShapeValue
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString shapekeys;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    float value;
};

USTRUCT(BlueprintType)
struct FBlendShapes
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FBlendShapeValue> blendShapes;
};

USTRUCT(BlueprintType)
struct FBlendShapeValueV
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString shapekeys;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    float sliderValue;
};

USTRUCT(BlueprintType)
struct FBlendShapesV
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FBlendShapeValueV> blendShapes;
};

USTRUCT(BlueprintType)
struct FAvatarData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Race;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AgeRange;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int Gender;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CustomMetaData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString MetaData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FPropColors ColorMeta;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FProp> BucketData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FBlendShapeValue> Blendshapes;
};

USTRUCT(BlueprintType)
struct FAvatarUrlData
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString Platform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString MeshURL;
};

USTRUCT(BlueprintType)
struct FAvatarThumbData
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString Platform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString ImageURL;
};

USTRUCT(BlueprintType)
struct FAvatarUrlDataList
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FAvatarUrlData> AvatarUrls;
};

USTRUCT(BlueprintType)
struct FAvatarThumbDataList
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FAvatarThumbData> ThumbUrls;
};

USTRUCT(BlueprintType)
struct FUserAvatar
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FString AvatarID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FAvatarUrlData> AvatarUrls;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    TArray<FAvatarThumbData> ThumbUrls;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyCategory)
    FAvatarData AvatarData;
};

USTRUCT(BlueprintType)
struct FAccounts
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Platform;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString PlatformUserID;
};

USTRUCT(BlueprintType)
struct FLinkedAcounts
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FAccounts> linkedAcounts;
};

USTRUCT(BlueprintType)
struct FWallet
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString VirtualCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int Amount;
};

USTRUCT(BlueprintType)
struct FWallets
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FWallet> wallets;
};

USTRUCT(BlueprintType)
struct FUserDetails
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString userID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString AccessToken;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString CreatedAt;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString emailId;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    EPlatform currentDevice;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    EGender Gender = EGender::MALE;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FLinkedAcounts linkedAcounts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FWallets wallets;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserAvatarThumb;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserAvatarMeshUrl;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DefaultAvatarID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Loacation;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FUserAvatar currentUserSelectedAvatar;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug|UserAvatars")
    TArray<FUserAvatar> userAvatars;
};
USTRUCT(BlueprintType)
struct FBlendShapeExp
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString selectedShape;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString maincategory;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    float sliderValue;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int value;
};

USTRUCT(BlueprintType)
struct FBlendShapesExp
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FBlendShapeExp> blendShapes;
};

USTRUCT(BlueprintType)
struct FExpThumbnailUrl
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
struct FExpThumbnailUrls
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FExpThumbnailUrl> itemThumbnails;
};

USTRUCT(BlueprintType)
struct FClipThumbnailUrl
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
struct FClipArtifact
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
struct FClipArtifacts
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FClipArtifact> clips;
};

USTRUCT(BlueprintType)
struct FClipThumbnailUrls
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FClipThumbnailUrl> itemThumbnails;
};
USTRUCT(BlueprintType)
struct FExpression
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
    FString Tags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Color;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Metadata;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int Status;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FBlendShapesExp BlendshapeKeys;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FExpThumbnailUrls ThumbnailUrl;
};
USTRUCT(BlueprintType)
struct FClip
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
    FClipThumbnailUrls ThumbnailsUrl;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FClipArtifacts Artifacts;

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
struct FTag
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString name;
};

USTRUCT(BlueprintType)
struct FTags
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FTag> tags;
};

USTRUCT(BlueprintType)
struct FVirtualCurrency
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString Amount;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool Selected;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString UserID;
};

USTRUCT(BlueprintType)
struct FVirtualCurrencys
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FVirtualCurrency> virtualCurrencys;
};

USTRUCT(BlueprintType)
struct FItemThumUrl
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int device;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    bool selected;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString texture;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString thumbnail_url;
};

USTRUCT(BlueprintType)
struct FItemThumUrls
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FItemThumUrl> itemThumbnails;
};

USTRUCT(BlueprintType)
struct FConfigs
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isNormalUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isOpacityUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isMetallicUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isEmissionUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isRoughnessUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isZipUpload;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isTwoD;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isTransparent;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isGrid;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isDiffuse;
};
USTRUCT(BlueprintType)
struct FEntitlement
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString byCount;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString byTime;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString timeData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString type;
};

USTRUCT(BlueprintType)
struct FBucket
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString name;
};

USTRUCT(BlueprintType)
struct FConflictingBuckets
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    TArray<FBucket> buckets;
};

USTRUCT(BlueprintType)
struct FEconomyItems
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString templateId;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString itemCategory;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString itemSubCategory;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString displayName;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString description;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString customMetaData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString style;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString artifacts;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString itemSkin;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString iD;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString coreBucket;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString occupiedBuckets;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString blendshapes;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString meshData;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString bonesPhysics;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString boneAdjustments;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int itemGender;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isStackable;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int isLimitedEdition;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int limitedEditionIntialCount;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int status;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    int realCurrency;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FConflictingBuckets conflictingBuckets = FConflictingBuckets();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FConfigs config = FConfigs();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FEntitlement entitlement = FEntitlement();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FItemThumUrls itemThumbnailsUrl = FItemThumUrls();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FVirtualCurrencys virtualCurrency = FVirtualCurrencys();
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FTags tags;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FBlendShapesV blendshapeKeys = FBlendShapesV();
};

USTRUCT(BlueprintType)
struct FCurrentEconomyItemTexture
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    FString ID;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    UTexture *texture1;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avataryug")
    UTexture *texture2;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClickColorButton, FString, Category, FLinearColor, OutColor);
