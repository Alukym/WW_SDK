#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrefabSystem

#include "Basic.hpp"

#include "PrefabSystem_classes.hpp"
#include "PrefabSystem_parameters.hpp"


namespace SDK
{

// Function PrefabSystem.PrefabBlueprintFunctionLibrary.ApplyPrefab
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrefabBlueprintFunctionLibrary::ApplyPrefab(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabBlueprintFunctionLibrary", "ApplyPrefab");

	Params::PrefabBlueprintFunctionLibrary_ApplyPrefab Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PrefabSystem.PrefabBlueprintFunctionLibrary.Instantiate
// (Final, Native, Static, Public)
// Parameters:
// class UPrefabAsset*                     PrefabAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*                  ParentComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevel*                           InLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bTemporaryEditorActor                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UPrefabBlueprintFunctionLibrary::Instantiate(class UPrefabAsset* PrefabAsset, class USceneComponent* ParentComponent, class ULevel* InLevel, bool bTemporaryEditorActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PrefabBlueprintFunctionLibrary", "Instantiate");

	Params::PrefabBlueprintFunctionLibrary_Instantiate Parms{};

	Parms.PrefabAsset = PrefabAsset;
	Parms.ParentComponent = ParentComponent;
	Parms.InLevel = InLevel;
	Parms.bTemporaryEditorActor = bTemporaryEditorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

