#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapLightEstimation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
// NumValues: 0x0005
enum class EMagicLeapLightEstimationCamera : uint8
{
	Left                                     = 0,
	Right                                    = 1,
	FarLeft                                  = 2,
	FarRight                                 = 3,
	EMagicLeapLightEstimationCamera_MAX      = 4,
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// 0x0020 (0x0020 - 0x0000)
struct FMagicLeapLightEstimationColorTemperatureState final
{
public:
	float                                         ColorTemperatureKelvin;                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           AmbientColor;                                      // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2453[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              Timestamp;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapLightEstimationColorTemperatureState) == 0x000008, "Wrong alignment on FMagicLeapLightEstimationColorTemperatureState");
static_assert(sizeof(FMagicLeapLightEstimationColorTemperatureState) == 0x000020, "Wrong size on FMagicLeapLightEstimationColorTemperatureState");
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, ColorTemperatureKelvin) == 0x000000, "Member 'FMagicLeapLightEstimationColorTemperatureState::ColorTemperatureKelvin' has a wrong offset!");
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, AmbientColor) == 0x000004, "Member 'FMagicLeapLightEstimationColorTemperatureState::AmbientColor' has a wrong offset!");
static_assert(offsetof(FMagicLeapLightEstimationColorTemperatureState, Timestamp) == 0x000018, "Member 'FMagicLeapLightEstimationColorTemperatureState::Timestamp' has a wrong offset!");

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// 0x0018 (0x0018 - 0x0000)
struct FMagicLeapLightEstimationAmbientGlobalState final
{
public:
	TArray<float>                                 AmbientIntensityNits;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                              Timestamp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMagicLeapLightEstimationAmbientGlobalState) == 0x000008, "Wrong alignment on FMagicLeapLightEstimationAmbientGlobalState");
static_assert(sizeof(FMagicLeapLightEstimationAmbientGlobalState) == 0x000018, "Wrong size on FMagicLeapLightEstimationAmbientGlobalState");
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, AmbientIntensityNits) == 0x000000, "Member 'FMagicLeapLightEstimationAmbientGlobalState::AmbientIntensityNits' has a wrong offset!");
static_assert(offsetof(FMagicLeapLightEstimationAmbientGlobalState, Timestamp) == 0x000010, "Member 'FMagicLeapLightEstimationAmbientGlobalState::Timestamp' has a wrong offset!");

}

