// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AuthenticationModels.h"
#include "AuthenticationRequest.h"
#include "Templates/Function.h"
#include "AuthenticationAPI.generated.h"

/**
 *
 */
UCLASS()
class AVATARYUG_API UAuthenticationAPI : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	static void LoginWithCustomId(FLoginWithCustomIDRequest request, TFunction<void(FLoginWithCustomIDResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION()
	static void LoginWithCustomId(FLoginWithCustomIDRequest request, FOnLoginWithCustomIDResult result, FOnApiException error);

	UFUNCTION()
	static void SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, FOnSendAccountRecoveryEmailResponse result, FOnApiException error);

	static void SendAccountVerificationEmail(FSendAccountVerificationEmailRequest request, TFunction<void(FSendAccountRecoveryEmailResponse &)> result, TFunction<void(FApiException &)> error);

	UFUNCTION()
	static void VerifyUserWithEmail(FVerifyUserWithEmailRequest request, FOnVerifyUserWithEmailResponse result, FOnApiException error);
	UFUNCTION()
	static void UpdateEmailPassword(FUpdateEmailPasswordRequest request, FOnUpdateEmailPasswordResponse result, FOnApiException error);
	UFUNCTION()
	static void LoginWithIOSDeviceID(FLoginWithIOSDeviceIDRequest request, FOnLoginWithIOSDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void LoginWithGoogle(FLoginWithGoogleRequest request, FOnLoginWithGoogleResult result, FOnApiException error);
	UFUNCTION()
	static void LoginWithFacebook(FLoginWithFacebookRequest request, FOnLoginWithFacebookResult result, FOnApiException error);
	static void LoginWithEmailAddress(FLoginWithEmailAddressRequest request, TFunction<void(FLoginWithEmailAddressResult &)> result, TFunction<void(FApiException &)> error);
	UFUNCTION()
	static void LoginWithEmailAddress(FLoginWithEmailAddressRequest request, FOnLoginWithEmailAddressResult result, FOnApiException error);
	UFUNCTION()
	static void LoginWithApple(FLoginWithAppleRequest request, FOnLoginWithAppleResult result, FOnApiException error);
	UFUNCTION()
	static void LoginWithAndroidDeviceID(FLoginWithAndroidDeviceIDRequest request, FOnLoginWithAndroidDeviceIDResult result, FOnApiException error);
	UFUNCTION()
	static void ChangePassword(FChangePasswordRequest request, FOnChangePasswordResponse result, FOnApiException error);
};
