#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPushSdk

#include "Basic.hpp"


namespace SDK::Params
{

// Function KuroPushSdk.KuroPushSdkStaticLibrary.BindAlias
// 0x0020 (0x0020 - 0x0000)
struct KuroPushSdkStaticLibrary_BindAlias final
{
public:
	class FString                                 Alias;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sn;                                                // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_BindAlias) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_BindAlias");
static_assert(sizeof(KuroPushSdkStaticLibrary_BindAlias) == 0x000020, "Wrong size on KuroPushSdkStaticLibrary_BindAlias");
static_assert(offsetof(KuroPushSdkStaticLibrary_BindAlias, Alias) == 0x000000, "Member 'KuroPushSdkStaticLibrary_BindAlias::Alias' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_BindAlias, Sn) == 0x000010, "Member 'KuroPushSdkStaticLibrary_BindAlias::Sn' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.GetClientId
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_GetClientId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_GetClientId) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_GetClientId");
static_assert(sizeof(KuroPushSdkStaticLibrary_GetClientId) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_GetClientId");
static_assert(offsetof(KuroPushSdkStaticLibrary_GetClientId, ReturnValue) == 0x000000, "Member 'KuroPushSdkStaticLibrary_GetClientId::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.GetPushObject
// 0x0008 (0x0008 - 0x0000)
struct KuroPushSdkStaticLibrary_GetPushObject final
{
public:
	class UKuroPushObject*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_GetPushObject) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_GetPushObject");
static_assert(sizeof(KuroPushSdkStaticLibrary_GetPushObject) == 0x000008, "Wrong size on KuroPushSdkStaticLibrary_GetPushObject");
static_assert(offsetof(KuroPushSdkStaticLibrary_GetPushObject, ReturnValue) == 0x000000, "Member 'KuroPushSdkStaticLibrary_GetPushObject::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.GetStatus
// 0x0004 (0x0004 - 0x0000)
struct KuroPushSdkStaticLibrary_GetStatus final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_GetStatus) == 0x000004, "Wrong alignment on KuroPushSdkStaticLibrary_GetStatus");
static_assert(sizeof(KuroPushSdkStaticLibrary_GetStatus) == 0x000004, "Wrong size on KuroPushSdkStaticLibrary_GetStatus");
static_assert(offsetof(KuroPushSdkStaticLibrary_GetStatus, ReturnValue) == 0x000000, "Member 'KuroPushSdkStaticLibrary_GetStatus::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.GetVersion
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_GetVersion final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_GetVersion) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_GetVersion");
static_assert(sizeof(KuroPushSdkStaticLibrary_GetVersion) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_GetVersion");
static_assert(offsetof(KuroPushSdkStaticLibrary_GetVersion, ReturnValue) == 0x000000, "Member 'KuroPushSdkStaticLibrary_GetVersion::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.IsPushTurnOn
// 0x0001 (0x0001 - 0x0000)
struct KuroPushSdkStaticLibrary_IsPushTurnOn final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_IsPushTurnOn) == 0x000001, "Wrong alignment on KuroPushSdkStaticLibrary_IsPushTurnOn");
static_assert(sizeof(KuroPushSdkStaticLibrary_IsPushTurnOn) == 0x000001, "Wrong size on KuroPushSdkStaticLibrary_IsPushTurnOn");
static_assert(offsetof(KuroPushSdkStaticLibrary_IsPushTurnOn, ReturnValue) == 0x000000, "Member 'KuroPushSdkStaticLibrary_IsPushTurnOn::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.PushLocalNotification
// 0x0030 (0x0030 - 0x0000)
struct KuroPushSdkStaticLibrary_PushLocalNotification final
{
public:
	class FString                                 Title;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 body;                                              // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ExData;                                            // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_PushLocalNotification) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_PushLocalNotification");
static_assert(sizeof(KuroPushSdkStaticLibrary_PushLocalNotification) == 0x000030, "Wrong size on KuroPushSdkStaticLibrary_PushLocalNotification");
static_assert(offsetof(KuroPushSdkStaticLibrary_PushLocalNotification, Title) == 0x000000, "Member 'KuroPushSdkStaticLibrary_PushLocalNotification::Title' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_PushLocalNotification, body) == 0x000010, "Member 'KuroPushSdkStaticLibrary_PushLocalNotification::body' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_PushLocalNotification, ExData) == 0x000020, "Member 'KuroPushSdkStaticLibrary_PushLocalNotification::ExData' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SendFeedBackMessage
// 0x0030 (0x0030 - 0x0000)
struct KuroPushSdkStaticLibrary_SendFeedBackMessage final
{
public:
	class FString                                 ActionId;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TaskId;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MsgId;                                             // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SendFeedBackMessage) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SendFeedBackMessage");
static_assert(sizeof(KuroPushSdkStaticLibrary_SendFeedBackMessage) == 0x000030, "Wrong size on KuroPushSdkStaticLibrary_SendFeedBackMessage");
static_assert(offsetof(KuroPushSdkStaticLibrary_SendFeedBackMessage, ActionId) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SendFeedBackMessage::ActionId' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SendFeedBackMessage, TaskId) == 0x000010, "Member 'KuroPushSdkStaticLibrary_SendFeedBackMessage::TaskId' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SendFeedBackMessage, MsgId) == 0x000020, "Member 'KuroPushSdkStaticLibrary_SendFeedBackMessage::MsgId' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetApplicationGroupIdentify
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_SetApplicationGroupIdentify final
{
public:
	class FString                                 Identify;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetApplicationGroupIdentify) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetApplicationGroupIdentify");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetApplicationGroupIdentify) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_SetApplicationGroupIdentify");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetApplicationGroupIdentify, Identify) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetApplicationGroupIdentify::Identify' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetBudge
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_SetBudge final
{
public:
	class FString                                 budge;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetBudge) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetBudge");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetBudge) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_SetBudge");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetBudge, budge) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetBudge::budge' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetChannel
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_SetChannel final
{
public:
	class FString                                 ChannelId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetChannel) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetChannel");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetChannel) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_SetChannel");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetChannel, ChannelId) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetChannel::ChannelId' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetLocalChannelId
// 0x0010 (0x0010 - 0x0000)
struct KuroPushSdkStaticLibrary_SetLocalChannelId final
{
public:
	class FString                                 ChannelId;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetLocalChannelId) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetLocalChannelId");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetLocalChannelId) == 0x000010, "Wrong size on KuroPushSdkStaticLibrary_SetLocalChannelId");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocalChannelId, ChannelId) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetLocalChannelId::ChannelId' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetLocalChannelIdAndName
// 0x0020 (0x0020 - 0x0000)
struct KuroPushSdkStaticLibrary_SetLocalChannelIdAndName final
{
public:
	class FString                                 ChannelId;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ChannelName;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetLocalChannelIdAndName) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetLocalChannelIdAndName");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetLocalChannelIdAndName) == 0x000020, "Wrong size on KuroPushSdkStaticLibrary_SetLocalChannelIdAndName");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocalChannelIdAndName, ChannelId) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetLocalChannelIdAndName::ChannelId' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocalChannelIdAndName, ChannelName) == 0x000010, "Member 'KuroPushSdkStaticLibrary_SetLocalChannelIdAndName::ChannelName' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetLocalSetNotificationIcon
// 0x0020 (0x0020 - 0x0000)
struct KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon final
{
public:
	class FString                                 SmallIcon;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LargeIcon;                                         // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon) == 0x000020, "Wrong size on KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon, SmallIcon) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon::SmallIcon' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon, LargeIcon) == 0x000010, "Member 'KuroPushSdkStaticLibrary_SetLocalSetNotificationIcon::LargeIcon' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetLocationEnable
// 0x0002 (0x0002 - 0x0000)
struct KuroPushSdkStaticLibrary_SetLocationEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsVerify;                                          // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetLocationEnable) == 0x000001, "Wrong alignment on KuroPushSdkStaticLibrary_SetLocationEnable");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetLocationEnable) == 0x000002, "Wrong size on KuroPushSdkStaticLibrary_SetLocationEnable");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocationEnable, IsEnable) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetLocationEnable::IsEnable' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetLocationEnable, IsVerify) == 0x000001, "Member 'KuroPushSdkStaticLibrary_SetLocationEnable::IsVerify' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetNotificationIcon
// 0x0020 (0x0020 - 0x0000)
struct KuroPushSdkStaticLibrary_SetNotificationIcon final
{
public:
	class FString                                 SmallIcon;                                         // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LargeIcon;                                         // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetNotificationIcon) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetNotificationIcon");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetNotificationIcon) == 0x000020, "Wrong size on KuroPushSdkStaticLibrary_SetNotificationIcon");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetNotificationIcon, SmallIcon) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetNotificationIcon::SmallIcon' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetNotificationIcon, LargeIcon) == 0x000010, "Member 'KuroPushSdkStaticLibrary_SetNotificationIcon::LargeIcon' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetPushMode
// 0x0001 (0x0001 - 0x0000)
struct KuroPushSdkStaticLibrary_SetPushMode final
{
public:
	bool                                          TurnOn;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetPushMode) == 0x000001, "Wrong alignment on KuroPushSdkStaticLibrary_SetPushMode");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetPushMode) == 0x000001, "Wrong size on KuroPushSdkStaticLibrary_SetPushMode");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetPushMode, TurnOn) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetPushMode::TurnOn' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetRunInBackGround
// 0x0001 (0x0001 - 0x0000)
struct KuroPushSdkStaticLibrary_SetRunInBackGround final
{
public:
	bool                                          State;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetRunInBackGround) == 0x000001, "Wrong alignment on KuroPushSdkStaticLibrary_SetRunInBackGround");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetRunInBackGround) == 0x000001, "Wrong size on KuroPushSdkStaticLibrary_SetRunInBackGround");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetRunInBackGround, State) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetRunInBackGround::State' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.SetTag
// 0x0028 (0x0028 - 0x0000)
struct KuroPushSdkStaticLibrary_SetTag final
{
public:
	class FString                                 Tags;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sn;                                                // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A1[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroPushSdkStaticLibrary_SetTag) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_SetTag");
static_assert(sizeof(KuroPushSdkStaticLibrary_SetTag) == 0x000028, "Wrong size on KuroPushSdkStaticLibrary_SetTag");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetTag, Tags) == 0x000000, "Member 'KuroPushSdkStaticLibrary_SetTag::Tags' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetTag, Sn) == 0x000010, "Member 'KuroPushSdkStaticLibrary_SetTag::Sn' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_SetTag, ReturnValue) == 0x000020, "Member 'KuroPushSdkStaticLibrary_SetTag::ReturnValue' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.StartPushSdk
// 0x0030 (0x0030 - 0x0000)
struct KuroPushSdkStaticLibrary_StartPushSdk final
{
public:
	class FString                                 AppId;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppKey;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AppSecret;                                         // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(KuroPushSdkStaticLibrary_StartPushSdk) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_StartPushSdk");
static_assert(sizeof(KuroPushSdkStaticLibrary_StartPushSdk) == 0x000030, "Wrong size on KuroPushSdkStaticLibrary_StartPushSdk");
static_assert(offsetof(KuroPushSdkStaticLibrary_StartPushSdk, AppId) == 0x000000, "Member 'KuroPushSdkStaticLibrary_StartPushSdk::AppId' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_StartPushSdk, AppKey) == 0x000010, "Member 'KuroPushSdkStaticLibrary_StartPushSdk::AppKey' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_StartPushSdk, AppSecret) == 0x000020, "Member 'KuroPushSdkStaticLibrary_StartPushSdk::AppSecret' has a wrong offset!");

// Function KuroPushSdk.KuroPushSdkStaticLibrary.UnBindAlias
// 0x0028 (0x0028 - 0x0000)
struct KuroPushSdkStaticLibrary_UnBindAlias final
{
public:
	class FString                                 Alias;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Sn;                                                // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsSelf;                                            // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A2[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(KuroPushSdkStaticLibrary_UnBindAlias) == 0x000008, "Wrong alignment on KuroPushSdkStaticLibrary_UnBindAlias");
static_assert(sizeof(KuroPushSdkStaticLibrary_UnBindAlias) == 0x000028, "Wrong size on KuroPushSdkStaticLibrary_UnBindAlias");
static_assert(offsetof(KuroPushSdkStaticLibrary_UnBindAlias, Alias) == 0x000000, "Member 'KuroPushSdkStaticLibrary_UnBindAlias::Alias' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_UnBindAlias, Sn) == 0x000010, "Member 'KuroPushSdkStaticLibrary_UnBindAlias::Sn' has a wrong offset!");
static_assert(offsetof(KuroPushSdkStaticLibrary_UnBindAlias, IsSelf) == 0x000020, "Member 'KuroPushSdkStaticLibrary_UnBindAlias::IsSelf' has a wrong offset!");

}

