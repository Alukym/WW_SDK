#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainGameInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MainGameInstance.BP_MainGameInstance_C
// 0x0018 (0x01C8 - 0x01B0)
class UBP_MainGameInstance_C final : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULoadMapNotify*                         _o____h;                                           // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStartFromLaunch;                                 // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_MainGameInstance(int32 EntryPoint);
	void ReceiveInit();
	void MountLauncherPak();
	void MountGamePak();
	void Reboot();
	void StartGame();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MainGameInstance_C">();
	}
	static class UBP_MainGameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MainGameInstance_C>();
	}
};
static_assert(alignof(UBP_MainGameInstance_C) == 0x000008, "Wrong alignment on UBP_MainGameInstance_C");
static_assert(sizeof(UBP_MainGameInstance_C) == 0x0001C8, "Wrong size on UBP_MainGameInstance_C");
static_assert(offsetof(UBP_MainGameInstance_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_MainGameInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_MainGameInstance_C, _o____h) == 0x0001B8, "Member 'UBP_MainGameInstance_C::_o____h' has a wrong offset!");
static_assert(offsetof(UBP_MainGameInstance_C, IsStartFromLaunch) == 0x0001C0, "Member 'UBP_MainGameInstance_C::IsStartFromLaunch' has a wrong offset!");

}
