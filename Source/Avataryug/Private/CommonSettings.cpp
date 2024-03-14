// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonSettings.h"
#include "SessionToken.h"
#include "Kismet/GameplayStatics.h"
#include "AvataryugRuntimeSetting.h"
FString UCommonSettings::GetToken()
{
    FString tkone = "";
    USessionToken *savegameInstance = Cast<USessionToken>(UGameplayStatics::CreateSaveGameObject(USessionToken::StaticClass()));
    if (UGameplayStatics::DoesSaveGameExist("COMMONSETTING", 0))
	{
		savegameInstance = Cast<USessionToken>(UGameplayStatics::LoadGameFromSlot("COMMONSETTING", 0));
        tkone = savegameInstance->Token;
    }
    return tkone;
}

void UCommonSettings::SetToken(FString token)
{
    USessionToken *savegameInstance = Cast<USessionToken>(UGameplayStatics::CreateSaveGameObject(USessionToken::StaticClass()));
	savegameInstance->Token = token;
	UGameplayStatics::SaveGameToSlot(savegameInstance, TEXT("COMMONSETTING"), 0);
}

FString UCommonSettings::BaseUrl()
{
    return "https://" + ProjectID() + ".avataryugapi.com/client/";
}

FString UCommonSettings::ProjectID()
{
    return GetDefault<UAvataryugRuntimeSetting>()->ProjectID;
 //   return "fg5db";
}