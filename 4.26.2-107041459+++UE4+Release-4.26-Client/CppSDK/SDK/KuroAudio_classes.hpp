#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroAudio

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "KuroAudio_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class KuroAudio.KuroAudioEnvironmentSubsystem
// 0x0138 (0x0170 - 0x0038)
class alignas(0x10) UKuroAudioEnvironmentSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_1758[0x88];                                    // 0x0038(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EKuroAudioVolumeChannel, class UAkAudioEvent*> DefaultStateEventMap;                              // 0x00C0(0x0050)(NativeAccessSpecifierPrivate)
	TMap<EKuroAudioVolumeChannel, class UAkAudioEvent*> CurrentStateEventMap;                              // 0x0110(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_1759[0x10];                                    // 0x0160(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAudioEnvironmentSubsystem">();
	}
	static class UKuroAudioEnvironmentSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAudioEnvironmentSubsystem>();
	}
};
static_assert(alignof(UKuroAudioEnvironmentSubsystem) == 0x000010, "Wrong alignment on UKuroAudioEnvironmentSubsystem");
static_assert(sizeof(UKuroAudioEnvironmentSubsystem) == 0x000170, "Wrong size on UKuroAudioEnvironmentSubsystem");
static_assert(offsetof(UKuroAudioEnvironmentSubsystem, DefaultStateEventMap) == 0x0000C0, "Member 'UKuroAudioEnvironmentSubsystem::DefaultStateEventMap' has a wrong offset!");
static_assert(offsetof(UKuroAudioEnvironmentSubsystem, CurrentStateEventMap) == 0x000110, "Member 'UKuroAudioEnvironmentSubsystem::CurrentStateEventMap' has a wrong offset!");

// Class KuroAudio.KuroAmbientSoundActor
// 0x0008 (0x02B0 - 0x02A8)
class AKuroAmbientSoundActor final : public AActor
{
public:
	class UKuroAmbientSoundComponent*             AmbientSoundComponent;                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAmbientSoundActor">();
	}
	static class AKuroAmbientSoundActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKuroAmbientSoundActor>();
	}
};
static_assert(alignof(AKuroAmbientSoundActor) == 0x000008, "Wrong alignment on AKuroAmbientSoundActor");
static_assert(sizeof(AKuroAmbientSoundActor) == 0x0002B0, "Wrong size on AKuroAmbientSoundActor");
static_assert(offsetof(AKuroAmbientSoundActor, AmbientSoundComponent) == 0x0002A8, "Member 'AKuroAmbientSoundActor::AmbientSoundComponent' has a wrong offset!");

// Class KuroAudio.KuroAudioSettings
// 0x0050 (0x0080 - 0x0030)
class UKuroAudioSettings final : public UObject
{
public:
	TMap<class FName, struct FKuroAudioDefaultStateEventSettings> DefaultStateEventWorldSettings;                    // 0x0030(0x0050)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAudioSettings">();
	}
	static class UKuroAudioSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAudioSettings>();
	}
};
static_assert(alignof(UKuroAudioSettings) == 0x000008, "Wrong alignment on UKuroAudioSettings");
static_assert(sizeof(UKuroAudioSettings) == 0x000080, "Wrong size on UKuroAudioSettings");
static_assert(offsetof(UKuroAudioSettings, DefaultStateEventWorldSettings) == 0x000030, "Member 'UKuroAudioSettings::DefaultStateEventWorldSettings' has a wrong offset!");

// Class KuroAudio.KuroAmbientSoundComponent
// 0x0020 (0x0240 - 0x0220)
class UKuroAmbientSoundComponent final : public USceneComponent
{
public:
	class UAkAudioEvent*                          AudioEvent;                                        // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoPlay;                                         // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_175A[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttenuationScalingFactor;                          // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     SoundPositions;                                    // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_175B[0x8];                                     // 0x0238(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsPlaying() const;
	void PlaySound() const;
	void StopSound(const int32 FadeDuration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAmbientSoundComponent">();
	}
	static class UKuroAmbientSoundComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAmbientSoundComponent>();
	}
};
static_assert(alignof(UKuroAmbientSoundComponent) == 0x000010, "Wrong alignment on UKuroAmbientSoundComponent");
static_assert(sizeof(UKuroAmbientSoundComponent) == 0x000240, "Wrong size on UKuroAmbientSoundComponent");
static_assert(offsetof(UKuroAmbientSoundComponent, AudioEvent) == 0x000218, "Member 'UKuroAmbientSoundComponent::AudioEvent' has a wrong offset!");
static_assert(offsetof(UKuroAmbientSoundComponent, bAutoPlay) == 0x000220, "Member 'UKuroAmbientSoundComponent::bAutoPlay' has a wrong offset!");
static_assert(offsetof(UKuroAmbientSoundComponent, AttenuationScalingFactor) == 0x000224, "Member 'UKuroAmbientSoundComponent::AttenuationScalingFactor' has a wrong offset!");
static_assert(offsetof(UKuroAmbientSoundComponent, SoundPositions) == 0x000228, "Member 'UKuroAmbientSoundComponent::SoundPositions' has a wrong offset!");

// Class KuroAudio.KuroAudioVolume
// 0x0020 (0x0300 - 0x02E0)
class AKuroAudioVolume final : public AVolume
{
public:
	EKuroAudioVolumeChannel                       Channel;                                           // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Priority;                                          // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_175C[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          StateEvent;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDynamicReverb;                              // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_175D[0xF];                                     // 0x02F1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAudioVolume">();
	}
	static class AKuroAudioVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKuroAudioVolume>();
	}
};
static_assert(alignof(AKuroAudioVolume) == 0x000008, "Wrong alignment on AKuroAudioVolume");
static_assert(sizeof(AKuroAudioVolume) == 0x000300, "Wrong size on AKuroAudioVolume");
static_assert(offsetof(AKuroAudioVolume, Channel) == 0x0002E0, "Member 'AKuroAudioVolume::Channel' has a wrong offset!");
static_assert(offsetof(AKuroAudioVolume, Priority) == 0x0002E1, "Member 'AKuroAudioVolume::Priority' has a wrong offset!");
static_assert(offsetof(AKuroAudioVolume, StateEvent) == 0x0002E8, "Member 'AKuroAudioVolume::StateEvent' has a wrong offset!");
static_assert(offsetof(AKuroAudioVolume, bEnableDynamicReverb) == 0x0002F0, "Member 'AKuroAudioVolume::bEnableDynamicReverb' has a wrong offset!");

// Class KuroAudio.KuroAmbientSoundPositionsProxyComponent
// 0x0000 (0x0640 - 0x0640)
class UKuroAmbientSoundPositionsProxyComponent final : public UInstancedStaticMeshComponent
{
public:
	class UKuroAmbientSoundComponent*             TargetComponent;                                   // 0x0638(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAmbientSoundPositionsProxyComponent">();
	}
	static class UKuroAmbientSoundPositionsProxyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAmbientSoundPositionsProxyComponent>();
	}
};
static_assert(alignof(UKuroAmbientSoundPositionsProxyComponent) == 0x000010, "Wrong alignment on UKuroAmbientSoundPositionsProxyComponent");
static_assert(sizeof(UKuroAmbientSoundPositionsProxyComponent) == 0x000640, "Wrong size on UKuroAmbientSoundPositionsProxyComponent");
static_assert(offsetof(UKuroAmbientSoundPositionsProxyComponent, TargetComponent) == 0x000638, "Member 'UKuroAmbientSoundPositionsProxyComponent::TargetComponent' has a wrong offset!");

// Class KuroAudio.KuroAudioDelegates
// 0x0000 (0x0030 - 0x0030)
class UKuroAudioDelegates final : public UBlueprintFunctionLibrary
{
public:
	static void SetAudioPauseDelegate(const TDelegate<void()>& InDelegate);
	static void SetAudioResumeDelegate(const TDelegate<void()>& InDelegate);
	static void UnbindAudioPauseDelegate();
	static void UnbindAudioResumeDelegate();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAudioDelegates">();
	}
	static class UKuroAudioDelegates* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAudioDelegates>();
	}
};
static_assert(alignof(UKuroAudioDelegates) == 0x000008, "Wrong alignment on UKuroAudioDelegates");
static_assert(sizeof(UKuroAudioDelegates) == 0x000030, "Wrong size on UKuroAudioDelegates");

// Class KuroAudio.KuroAudioStatics
// 0x0000 (0x0030 - 0x0030)
class UKuroAudioStatics final : public UBlueprintFunctionLibrary
{
public:
	static void ChangeIosAudioSessionProperties();
	static void ExecuteActionOnEvent(const class UAkAudioEvent* AudioEvent, const EAudioActionType ActionType, const class AActor* Actor, const int32 TransitionDuration, const EAudioFadeCurve TransitionFadeCurve);
	static void ExecuteActionOnEventName(const class FString& EventName, const EAudioActionType ActionType, const class AActor* Actor, const int32 TransitionDuration, const EAudioFadeCurve TransitionFadeCurve);
	static void ExecuteActionOnPlayingId(const int32 PlayingId, const EAudioActionType ActionType, const int32 TransitionDuration, const EAudioFadeCurve TransitionFadeCurve);
	static class UAkComponent* GetAkComponent(class USceneComponent* Parent, const class FName& SocketName, bool* bCreated);
	static bool IsAndroidApiUsingOpenSL();
	static bool IsDolbyAtmosGameSupported();
	static void PostNotifyEvent(const class UAkAudioEvent* NotifyEvent, const class AActor* Actor);
	static void SetIosAuditPackage(bool IsAuditPackage);
	static void SetRtpcValue(const class FString& RtpcName, const float Value, const class AActor* Actor, const int32 TransitionDuration, const EAudioFadeCurve TransitionFadeCurve);
	static void SetState(const class FString& StateGroup, const class FString& State);
	static void SetSwitch(const class FString& SwitchGroup, const class FString& SwitchState, const class AActor* Actor);
	static void StopAll(const class AActor* Actor);
	static void UpdateAudioEnvironment(const class UWorld* World, const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroAudioStatics">();
	}
	static class UKuroAudioStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroAudioStatics>();
	}
};
static_assert(alignof(UKuroAudioStatics) == 0x000008, "Wrong alignment on UKuroAudioStatics");
static_assert(sizeof(UKuroAudioStatics) == 0x000030, "Wrong size on UKuroAudioStatics");

// Class KuroAudio.KuroBgPlayerStatic
// 0x0000 (0x0030 - 0x0030)
class UKuroBgPlayerStatic final : public UBlueprintFunctionLibrary
{
public:
	static void Play();
	static void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroBgPlayerStatic">();
	}
	static class UKuroBgPlayerStatic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroBgPlayerStatic>();
	}
};
static_assert(alignof(UKuroBgPlayerStatic) == 0x000008, "Wrong alignment on UKuroBgPlayerStatic");
static_assert(sizeof(UKuroBgPlayerStatic) == 0x000030, "Wrong size on UKuroBgPlayerStatic");

// Class KuroAudio.MovieSceneKuroAudioEventSection
// 0x0018 (0x0108 - 0x00F0)
class UMovieSceneKuroAudioEventSection final : public UMovieSceneSection
{
public:
	class UAkAudioEvent*                          AudioEvent;                                        // 0x00F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStopAtSectionEnd;                                 // 0x00F8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1768[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FadeDuration;                                      // 0x00FC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioFadeCurve                               FadeCurve;                                         // 0x0100(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1769[0x7];                                     // 0x0101(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneKuroAudioEventSection">();
	}
	static class UMovieSceneKuroAudioEventSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneKuroAudioEventSection>();
	}
};
static_assert(alignof(UMovieSceneKuroAudioEventSection) == 0x000008, "Wrong alignment on UMovieSceneKuroAudioEventSection");
static_assert(sizeof(UMovieSceneKuroAudioEventSection) == 0x000108, "Wrong size on UMovieSceneKuroAudioEventSection");
static_assert(offsetof(UMovieSceneKuroAudioEventSection, AudioEvent) == 0x0000F0, "Member 'UMovieSceneKuroAudioEventSection::AudioEvent' has a wrong offset!");
static_assert(offsetof(UMovieSceneKuroAudioEventSection, bStopAtSectionEnd) == 0x0000F8, "Member 'UMovieSceneKuroAudioEventSection::bStopAtSectionEnd' has a wrong offset!");
static_assert(offsetof(UMovieSceneKuroAudioEventSection, FadeDuration) == 0x0000FC, "Member 'UMovieSceneKuroAudioEventSection::FadeDuration' has a wrong offset!");
static_assert(offsetof(UMovieSceneKuroAudioEventSection, FadeCurve) == 0x000100, "Member 'UMovieSceneKuroAudioEventSection::FadeCurve' has a wrong offset!");

// Class KuroAudio.MovieSceneKuroAudioEventTrack
// 0x0018 (0x0098 - 0x0080)
class UMovieSceneKuroAudioEventTrack final : public UMovieSceneTrack
{
public:
	uint8                                         Pad_176A[0x8];                                     // 0x0080(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0088(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneKuroAudioEventTrack">();
	}
	static class UMovieSceneKuroAudioEventTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneKuroAudioEventTrack>();
	}
};
static_assert(alignof(UMovieSceneKuroAudioEventTrack) == 0x000008, "Wrong alignment on UMovieSceneKuroAudioEventTrack");
static_assert(sizeof(UMovieSceneKuroAudioEventTrack) == 0x000098, "Wrong size on UMovieSceneKuroAudioEventTrack");
static_assert(offsetof(UMovieSceneKuroAudioEventTrack, Sections) == 0x000088, "Member 'UMovieSceneKuroAudioEventTrack::Sections' has a wrong offset!");

}

