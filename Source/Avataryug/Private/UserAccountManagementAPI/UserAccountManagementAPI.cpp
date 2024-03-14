// Fill out your copyright notice in the Description page of Project Settings.

#include "UserAccountManagementAPI/UserAccountManagementAPI.h"
#include "UserAccountManagementAPI/UserAccountManagementRequest.h"
#include "UserAccountManagementAPI/UserAccountManagementModels.h"
#include "CommonModels.h"
#include "JsonObjectConverter.h"

void UUserAccountManagementAPI::AddEmailPassword(FAddEmailPasswordRequest request, FOnAddEmailPasswordResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "AddEmailPassword");
	MyAsyncAction->AddEmailPasswordResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::AddGenericServiceID(FAddGenericServiceIDRequest request, FOnAddGenericServiceIDResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "AddGenericServiceID");
	MyAsyncAction->AddGenericServiceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::AddUserAvatar(FAddUserAvatarRequest request, FOnAddUserAvatarResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "AddUserAvatar");
	MyAsyncAction->AddUserAvatarResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::DeleteUserAvatar(FDeleteUserAvatarRequest request, FOnDeleteUserAvatarResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "DELETE", "DeleteUserAvatar");
	MyAsyncAction->DeleteUserAvatarResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::GetUserAccountInfo(FString userID, FOnGetUserAccountInfoResult result, FOnApiException error)
{
	TMap<FString, FString> QueryParams;
	QueryParams.Add("UserID", userID);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(QueryParams, "GET", "GetUserAccountInfo");
	MyAsyncAction->GetUserAccountInfoResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->ActivateQuerry();
}
void UUserAccountManagementAPI::GetUserAccountInfo(FString userID, TFunction<void(FGetUserAccountInfoResult &)> result, TFunction<void(FApiException &)> error)
{
	TMap<FString, FString> QueryParams;
	QueryParams.Add("UserID", userID);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(QueryParams, "GET", "GetUserAccountInfo");
	MyAsyncAction->GetUserAccountInfoResults = result;
	MyAsyncAction->ErrorCallback = error;
	MyAsyncAction->ActivateQuerry();
}
void UUserAccountManagementAPI::GetUserProfile(FString userID, bool showDisplayName, bool showThumbUrl, bool showAvatarUrl, FOnGetUserProfileResult result, FOnApiException error)
{
	TMap<FString, FString> QueryParams;
	QueryParams.Add("UserID", userID);
	QueryParams.Add("ShowDisplayName", (showDisplayName) ? "true" : "false");
	QueryParams.Add("ShowThumbUrl", (showThumbUrl) ? "true" : "false");
	QueryParams.Add("ShowAvatarUrl", (showAvatarUrl) ? "true" : "false");
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(QueryParams, "GET", "GetUserProfile");
	MyAsyncAction->GetUserProfileResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->ActivateQuerry();
}

void UUserAccountManagementAPI::GetUsersAllAvatars(FString userID, FOnGetUsersAllAvatarsResult result, FOnApiException error)
{
	TMap<FString, FString> QueryParams;
	QueryParams.Add("UserID", userID);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(QueryParams, "GET", "GetUsersAllAvatars");
	MyAsyncAction->GetUsersAllAvatarsResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->ActivateQuerry();
}

void UUserAccountManagementAPI::GetUsersAllAvatars(FString userID, TFunction<void(FGetUsersAllAvatarsResult &)> result, TFunction<void(FApiException &)> error)
{
	TMap<FString, FString> QueryParams;
	QueryParams.Add("UserID", userID);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(QueryParams, "GET", "GetUsersAllAvatars");
	MyAsyncAction->GetUsersAllAvatarsResults = result;
	MyAsyncAction->ErrorCallback = error;
	MyAsyncAction->ActivateQuerry();
}

void UUserAccountManagementAPI::LinkAndroidDeviceID(FLinkAndroidDeviceIDRequest request, FOnLinkAndroidDeviceIDResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkAndroidDeviceID");
	MyAsyncAction->LinkAndroidDeviceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::LinkApple(FLinkAppleRequest request, FOnLinkAppleResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkApple");
	MyAsyncAction->LinkAppleResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::LinkCustomID(FLinkCustomIDRequest request, FOnLinkCustomIDResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkCustomID");
	MyAsyncAction->LinkCustomIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::LinkFacebookAccount(FLinkFacebookAccountRequest request, FOnLinkFacebookAccountResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkFacebookAccount");
	MyAsyncAction->LinkFacebookAccountResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::LinkGoogleAccount(FLinkGoogleAccountRequest request, FOnLinkGoogleAccountResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkGoogleAccount");
	MyAsyncAction->LinkGoogleAccountResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::LinkIOSDeviceID(FLinkIOSDeviceIDRequest request, FOnLinkIOSDeviceIDResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "LinkIOSDeviceID");
	MyAsyncAction->LinkIOSDeviceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::RemoveGenericServiceID(FOnRemoveGenericServiceIDResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "RemoveGenericServiceID");
	MyAsyncAction->RemoveGenericServiceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkAndroidDeviceID(FOnUnlinkAndroidDeviceIDResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkAndroidDeviceID");
	MyAsyncAction->UnlinkAndroidDeviceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkApple(FOnUnlinkAppleResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkApple");
	MyAsyncAction->UnlinkAppleResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkCustomID(FOnUnlinkCustomIDResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkCustomID");
	MyAsyncAction->UnlinkCustomIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkFacebookAccount(FOnUnlinkFacebookAccountResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkFacebookAccount");
	MyAsyncAction->UnlinkFacebookAccountResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkGoogleAccount(FOnUnlinkGoogleAccountResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkGoogleAccount");
	MyAsyncAction->UnlinkGoogleAccountResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UnlinkIOSDeviceID(FOnUnlinkIOSDeviceIDResult result, FOnApiException error)
{
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest("", "POST", "UnlinkIOSDeviceID");
	MyAsyncAction->UnlinkIOSDeviceIDResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UpdateAvatarUrl(FUpdateAvatarUrlRequest request, FOnUpdateAvatarUrlResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "POST", "UpdateAvatarUrl");
	MyAsyncAction->UpdateAvatarUrlResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UpdateImageAvatarUrl(FUpdateImageAvatarUrlRequest request, FOnUpdateImageAvatarUrlResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "PUT", "UpdateImageAvatarUrl");
	MyAsyncAction->UpdateImageAvatarUrlResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UpdateUserAvatar(FUpdateUserAvatarRequest request, FOnUpdateUserAvatarResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "PUT", "UpdateUserAvatar");
	MyAsyncAction->UpdateUserAvatarResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}

void UUserAccountManagementAPI::UpdateUserProjectDisplayName(FUpdateUserProjectDisplayNameRequest request, FOnUpdateUserProjectDisplayNameResult result, FOnApiException error)
{
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(request, JsonString);
	UUserAccountManagementRequest *MyAsyncAction = UUserAccountManagementRequest::UserAccountManagementRequest(JsonString, "PUT", "UpdateUserProjectDisplayName");
	MyAsyncAction->UpdateUserProjectDisplayNameResult = result;
	MyAsyncAction->Error = error;
	MyAsyncAction->Activate();
}
