#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroSDK

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "KuroSDK_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroSDK.KuroSDKManager
// 0x01E8 (0x0218 - 0x0030)
class UKuroSDKManager final : public UObject
{
public:
	uint8                                         Pad_2471[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             InitDelegate;                                      // 0x0038(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             LoginDelegate;                                     // 0x0048(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             KickDelegate;                                      // 0x0058(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             LogoutDelegate;                                    // 0x0068(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ExitDelegate;                                      // 0x0078(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HasExitDelegate;                                   // 0x0088(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PaymentDelegate;                                   // 0x0098(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PostRedPointDelegate;                              // 0x00A8(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             PostProductDelegate;                               // 0x00B8(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ProtocolCallBack;                                  // 0x00C8(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             RequestPhotoPermissionDelegate;                    // 0x00D8(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_2472[0x8];                                     // 0x00E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             AnnounceInitDelegate;                              // 0x00F0(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             AnnounceOpenDelegate;                              // 0x0100(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             AnnounceRedPointDelegate;                          // 0x0110(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             CustomerServiceResultDelegate;                     // 0x0120(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetParamsDelegate;                                 // 0x0130(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnLoginDelegate;                                   // 0x0140(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             DeepLinkDelegate;                                  // 0x0150(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetAdsValueDelegate;                               // 0x0160(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             GetSharePlatformDelegate;                          // 0x0170(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ShareResultDelegate;                               // 0x0180(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             LogDelegate;                                       // 0x0190(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             WebViewCloseDelegate;                              // 0x01A0(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnActivatedByApplinksDelegate;                     // 0x01B0(0x0010)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_2473[0x58];                                    // 0x01C0(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void BindAccount();
	static void CheckApplinksActivation();
	static bool CheckPhotoPermission();
	static void ClearLoginInfo();
	static void ExitGame();
	static class UKuroSDKManager* Get();
	static void GetAdsValue(const class FString& Income, const class FString& Data);
	static class FString GetAgreementUrl();
	static class FString GetAppChannelId();
	static struct FBasicInfo GetBasicInfo();
	static int32 GetChannelId();
	static class FString GetChannelName();
	static struct FLoginStruct GetCurrentLoginInfo();
	static class FString GetDeepLinkStr();
	static bool GetIsAgreeProtocol();
	static class FString GetPackageId();
	static bool GetPostWebViewInitState();
	static class FString GetProjectId();
	static bool GetSdkInitState();
	static bool GetSdkIsQRScan();
	static bool GetSdkIsShowQuitTips();
	static class FString GetSdkLoginInfo();
	static class FString GetSdkParams(const class FString& Data);
	static void GetSharePlatform();
	static void Initialize();
	static bool IsCustomerServiceEnable();
	static bool IsLogin();
	static bool IsUserCenterEnable();
	static void KuroSDKEvent(const EUKuroSDKEventType& IKuroSDKEvent, const class FString& SKuroSDKEventParameter);
	static void LogMarketingEvent(const class FString& Data);
	static void OpenCustomerService(const class FString& Data);
	static void OpenDefaultWebView(const class FString& Url);
	static void OpenSdkQRScan();
	static void OpenWebView(const class FString& Title, const class FString& Url, bool IsLandscape, bool Transparent, bool WebAccelerated, const class FString& Data);
	static void PostSplashScreenEndSuccess();
	static void QueryProductInfo(const class FString& Data);
	static void RequestPhotoPermission();
	static void SetFont(const class FString& Data);
	static void SetIfGlobalSdk(bool IfGlobal);
	static void SetWindowsMode(bool Mode);
	static void Share(const TArray<uint8>& ImageData, const class FString& SKuroSDKEventParameter);
	static void ShowExitGameDialog();
	static void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroSDKManager">();
	}
	static class UKuroSDKManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroSDKManager>();
	}
};
static_assert(alignof(UKuroSDKManager) == 0x000008, "Wrong alignment on UKuroSDKManager");
static_assert(sizeof(UKuroSDKManager) == 0x000218, "Wrong size on UKuroSDKManager");
static_assert(offsetof(UKuroSDKManager, InitDelegate) == 0x000038, "Member 'UKuroSDKManager::InitDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, LoginDelegate) == 0x000048, "Member 'UKuroSDKManager::LoginDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, KickDelegate) == 0x000058, "Member 'UKuroSDKManager::KickDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, LogoutDelegate) == 0x000068, "Member 'UKuroSDKManager::LogoutDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, ExitDelegate) == 0x000078, "Member 'UKuroSDKManager::ExitDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, HasExitDelegate) == 0x000088, "Member 'UKuroSDKManager::HasExitDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, PaymentDelegate) == 0x000098, "Member 'UKuroSDKManager::PaymentDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, PostRedPointDelegate) == 0x0000A8, "Member 'UKuroSDKManager::PostRedPointDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, PostProductDelegate) == 0x0000B8, "Member 'UKuroSDKManager::PostProductDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, ProtocolCallBack) == 0x0000C8, "Member 'UKuroSDKManager::ProtocolCallBack' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, RequestPhotoPermissionDelegate) == 0x0000D8, "Member 'UKuroSDKManager::RequestPhotoPermissionDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, AnnounceInitDelegate) == 0x0000F0, "Member 'UKuroSDKManager::AnnounceInitDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, AnnounceOpenDelegate) == 0x000100, "Member 'UKuroSDKManager::AnnounceOpenDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, AnnounceRedPointDelegate) == 0x000110, "Member 'UKuroSDKManager::AnnounceRedPointDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, CustomerServiceResultDelegate) == 0x000120, "Member 'UKuroSDKManager::CustomerServiceResultDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, GetParamsDelegate) == 0x000130, "Member 'UKuroSDKManager::GetParamsDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, OnLoginDelegate) == 0x000140, "Member 'UKuroSDKManager::OnLoginDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, DeepLinkDelegate) == 0x000150, "Member 'UKuroSDKManager::DeepLinkDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, GetAdsValueDelegate) == 0x000160, "Member 'UKuroSDKManager::GetAdsValueDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, GetSharePlatformDelegate) == 0x000170, "Member 'UKuroSDKManager::GetSharePlatformDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, ShareResultDelegate) == 0x000180, "Member 'UKuroSDKManager::ShareResultDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, LogDelegate) == 0x000190, "Member 'UKuroSDKManager::LogDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, WebViewCloseDelegate) == 0x0001A0, "Member 'UKuroSDKManager::WebViewCloseDelegate' has a wrong offset!");
static_assert(offsetof(UKuroSDKManager, OnActivatedByApplinksDelegate) == 0x0001B0, "Member 'UKuroSDKManager::OnActivatedByApplinksDelegate' has a wrong offset!");

// Class KuroSDK.KuroSDKStaticLibrary
// 0x0000 (0x0030 - 0x0030)
class UKuroSDKStaticLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ClearSdkInstance();
	static class UKuroSDKManager* Get();
	static void GetAdsValue(const class FString& Income, const class FString& Data);
	static void GetAgreementUrl();
	static class FString GetAndroidGalleryExternalFilePath();
	static void GetAppChannelId();
	static void GetBaseDeviceInfo();
	static void GetChannelId();
	static void GetChannelName();
	static struct FLoginStruct GetCurrentLoginInfo();
	static bool GetIsAgreeProtocol();
	static bool GetPostWebViewInitState();
	static void GetProjectId();
	static void GetSdkParams(const class FString& Data);
	static void Initialize();
	static void IsCanQRScan();
	static void IsShowQuitTips();
	static void KuroSDKEvent(const EUKuroSDKEventType& IKuroSDKEvent, const class FString& SKuroSDKEventParameter);
	static void LogMarketingEvent(const class FString& Data);
	static void OpenCustomerService(const class FString& Data);
	static void OpenDefaultWebView(const class FString& Url);
	static void OpenQRScan();
	static void OpenWebView(const class FString& Title, const class FString& Url, bool IsLandScape, bool Transparent, bool WebAccelerated, const class FString& Data);
	static void PostSplashSuccess();
	static void SetIfGlobalSdk(bool IfGlobal);
	static void Share(const class FString& ImagePath, const class FString& SKuroSDKEventParameter);
	static void ShareTexture(const class FString& TexturePath, const class FString& SKuroSDKEventParameter);
	static void ShowExitGameDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroSDKStaticLibrary">();
	}
	static class UKuroSDKStaticLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroSDKStaticLibrary>();
	}
};
static_assert(alignof(UKuroSDKStaticLibrary) == 0x000008, "Wrong alignment on UKuroSDKStaticLibrary");
static_assert(sizeof(UKuroSDKStaticLibrary) == 0x000030, "Wrong size on UKuroSDKStaticLibrary");

}

