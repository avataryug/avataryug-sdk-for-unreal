// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EUIPanels : uint8
{
  HOME,
  CURRENCYSTORE,
  INVENTORY,
  CONTAINERS,
  REWARDEDADS,
  BUNDLES,
  AUTHENTICATION,
  ONBOARDING,
  ONBOARDING2,
  ONBOARDING3,
  CUSTOMAVATAR3,
  CUSTOMIZEFULL,
  CUSTOMIZEHEAD,
  ZOOMIN,
  EXPRESSIONCLIP,
  CUSTOMIZEBLENDSHAPE,
  SETTING,
  CLIENTSETTING,
  DETAILS,
  BUYITEMS
};

UENUM(BlueprintType)
enum class EPlatform : uint8
{
  Android,
  iOS,
  Web,
  Steam,
  Meta,
  Xbox,
  Playstation,
  Custom
};

UENUM(BlueprintType)
enum class CameraPanels : uint8
{
  CustomizeAvatar_FullBody,
  CustomizeAvatar_Head,
  CustomizeAvatar_Zoom,
  CustomizeAvatar_ZoomOut,
  Lobby,
  OnBoarding,
  CustomizeBlendShape_Front,
  CustomizeBlendShape_Side,
  CustomizeBlendShape
};
UENUM(BlueprintType)
enum class EGender : uint8
{
  MALE,
  FEMALE
};
UENUM(BlueprintType)
enum class EModelParent : uint8
{
  ONBOARD,
  HOME,
  CUSTOMIZE,
  NONE
};
UENUM(BlueprintType)
enum class EAppType : uint8
{
  APP,
  GAME
};

UENUM(BlueprintType)
enum class EPropColorType : uint8
{
  HairColor,
  EyebrowColor,
  FacialHairColor,
  LipColor
};

UENUM(BlueprintType)
enum class EMonitizeType : uint8
{
  Monitize,
  NonMonitize
};

UENUM(BlueprintType)
enum class EOnBoarding : uint8
{
  OnBoarding1,
  OnBoarding2,
  OnBoarding3
};
/**
 *
 */
class AVATARYUG_API GameEnums
{
public:
  GameEnums();
  ~GameEnums();
};
