// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AuthenticationModels.h"
#include "CommonModels.h"
#include "Http.h"

#include "AuthenticationRequest.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithCustomIDResult, FLoginWithCustomIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithEmailAddressResult, FLoginWithEmailAddressResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithAndroidDeviceIDResult, FLoginWithAndroidDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithAppleResult, FLoginWithAppleResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithFacebookResult, FLoginWithFacebookResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithGoogleResult, FLoginWithGoogleResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginWithIOSDeviceIDResult, FLoginWithIOSDeviceIDResult, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUpdateEmailPasswordResponse, FUpdateEmailPasswordResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnVerifyUserWithEmailResponse, FVerifyUserWithEmailResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSendAccountRecoveryEmailResponse, FSendAccountRecoveryEmailResponse, result);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnChangePasswordResponse, FChangePasswordResponse, result);

/**
 *
 */
UCLASS()
class AVATARYUG_API UAuthenticationRequest : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
    FHttpModule *Http;
    FString Method;
    FString Url;
    FString Token;
    FString JsonRequest;
    FString EndPoint;
    static UAuthenticationRequest *AuthenticationRequest(FString requestjson, FString method, FString endPoint);

    FOnLoginWithAndroidDeviceIDResult LoginWithAndroidDeviceIDResult;
    FOnLoginWithAppleResult LoginWithAppleResult;
    FOnLoginWithFacebookResult LoginWithFacebookResult;
    FOnLoginWithGoogleResult LoginWithGoogleResult;
    FOnLoginWithIOSDeviceIDResult LoginWithIOSDeviceIDResult;
    FOnUpdateEmailPasswordResponse UpdateEmailPasswordResponse;
    FOnVerifyUserWithEmailResponse VerifyUserWithEmailResponse;

    FOnChangePasswordResponse ChangePasswordResponse;

    FOnLoginWithCustomIDResult LoginWithCustomIDResult;
    TFunction<void(FLoginWithCustomIDResult &)> LoginWithCustomIDResults;

    FOnLoginWithEmailAddressResult LoginWithEmailAddressResult;
    TFunction<void(FLoginWithEmailAddressResult &)> LoginWithEmailAddressResults;

    FOnSendAccountRecoveryEmailResponse SendAccountRecoveryEmailResponse;
    TFunction<void(FSendAccountRecoveryEmailResponse &)> SendAccountRecoveryEmailResponses;

    TFunction<void(FApiException &)>
        ErrorCallback;

    FOnApiException Error;
    virtual void Activate() override;

private:
    void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
