#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapIdentity

#include "Basic.hpp"

#include "MagicLeapIdentity_structs.hpp"


namespace SDK::Params
{

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature final
{
public:
	EMagicLeapIdentityError                       ResultCode;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2421[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EMagicLeapIdentityKey>                 AvailableAttributes;                               // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature) == 0x000008, "Wrong alignment on MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature");
static_assert(sizeof(MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature) == 0x000018, "Wrong size on MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature");
static_assert(offsetof(MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature, ResultCode) == 0x000000, "Member 'MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature::ResultCode' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature, AvailableAttributes) == 0x000008, "Member 'MagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature::AvailableAttributes' has a wrong offset!");

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// 0x0018 (0x0018 - 0x0000)
struct MagicLeapIdentity_GetAllAvailableAttributes final
{
public:
	TArray<EMagicLeapIdentityKey>                 AvailableAttributes;                               // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                       ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2422[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapIdentity_GetAllAvailableAttributes) == 0x000008, "Wrong alignment on MagicLeapIdentity_GetAllAvailableAttributes");
static_assert(sizeof(MagicLeapIdentity_GetAllAvailableAttributes) == 0x000018, "Wrong size on MagicLeapIdentity_GetAllAvailableAttributes");
static_assert(offsetof(MagicLeapIdentity_GetAllAvailableAttributes, AvailableAttributes) == 0x000000, "Member 'MagicLeapIdentity_GetAllAvailableAttributes::AvailableAttributes' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_GetAllAvailableAttributes, ReturnValue) == 0x000010, "Member 'MagicLeapIdentity_GetAllAvailableAttributes::ReturnValue' has a wrong offset!");

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// 0x0014 (0x0014 - 0x0000)
struct MagicLeapIdentity_GetAllAvailableAttributesAsync final
{
public:
	TDelegate<void(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey>& AvailableAttributes)> ResultDelegate;                                    // 0x0000(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapIdentity_GetAllAvailableAttributesAsync) == 0x000004, "Wrong alignment on MagicLeapIdentity_GetAllAvailableAttributesAsync");
static_assert(sizeof(MagicLeapIdentity_GetAllAvailableAttributesAsync) == 0x000014, "Wrong size on MagicLeapIdentity_GetAllAvailableAttributesAsync");
static_assert(offsetof(MagicLeapIdentity_GetAllAvailableAttributesAsync, ResultDelegate) == 0x000000, "Member 'MagicLeapIdentity_GetAllAvailableAttributesAsync::ResultDelegate' has a wrong offset!");

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature final
{
public:
	EMagicLeapIdentityError                       ResultCode;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2423[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EMagicLeapIdentityKey>                 AttributesUpdatedSuccessfully;                     // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature) == 0x000008, "Wrong alignment on MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature");
static_assert(sizeof(MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature) == 0x000018, "Wrong size on MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature");
static_assert(offsetof(MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature, ResultCode) == 0x000000, "Member 'MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature::ResultCode' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature, AttributesUpdatedSuccessfully) == 0x000008, "Member 'MagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature::AttributesUpdatedSuccessfully' has a wrong offset!");

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// 0x0028 (0x0028 - 0x0000)
struct MagicLeapIdentity_RequestAttributeValue final
{
public:
	TArray<EMagicLeapIdentityKey>                 RequestedAttributeList;                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapIdentityAttribute>    RequestedAttributeValues;                          // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                       ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2424[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapIdentity_RequestAttributeValue) == 0x000008, "Wrong alignment on MagicLeapIdentity_RequestAttributeValue");
static_assert(sizeof(MagicLeapIdentity_RequestAttributeValue) == 0x000028, "Wrong size on MagicLeapIdentity_RequestAttributeValue");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValue, RequestedAttributeList) == 0x000000, "Member 'MagicLeapIdentity_RequestAttributeValue::RequestedAttributeList' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValue, RequestedAttributeValues) == 0x000010, "Member 'MagicLeapIdentity_RequestAttributeValue::RequestedAttributeValues' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValue, ReturnValue) == 0x000020, "Member 'MagicLeapIdentity_RequestAttributeValue::ReturnValue' has a wrong offset!");

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// 0x0028 (0x0028 - 0x0000)
struct MagicLeapIdentity_RequestAttributeValueAsync final
{
public:
	TArray<EMagicLeapIdentityKey>                 RequestedAttributeList;                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TDelegate<void(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute>& AttributeValue)> ResultDelegate;                                    // 0x0010(0x0014)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EMagicLeapIdentityError                       ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2425[0x3];                                     // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MagicLeapIdentity_RequestAttributeValueAsync) == 0x000008, "Wrong alignment on MagicLeapIdentity_RequestAttributeValueAsync");
static_assert(sizeof(MagicLeapIdentity_RequestAttributeValueAsync) == 0x000028, "Wrong size on MagicLeapIdentity_RequestAttributeValueAsync");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValueAsync, RequestedAttributeList) == 0x000000, "Member 'MagicLeapIdentity_RequestAttributeValueAsync::RequestedAttributeList' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValueAsync, ResultDelegate) == 0x000010, "Member 'MagicLeapIdentity_RequestAttributeValueAsync::ResultDelegate' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_RequestAttributeValueAsync, ReturnValue) == 0x000024, "Member 'MagicLeapIdentity_RequestAttributeValueAsync::ReturnValue' has a wrong offset!");

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature final
{
public:
	EMagicLeapIdentityError                       ResultCode;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2426[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMagicLeapIdentityAttribute>    AttributeValue;                                    // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature) == 0x000008, "Wrong alignment on MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature");
static_assert(sizeof(MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature) == 0x000018, "Wrong size on MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature");
static_assert(offsetof(MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature, ResultCode) == 0x000000, "Member 'MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature::ResultCode' has a wrong offset!");
static_assert(offsetof(MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature, AttributeValue) == 0x000008, "Member 'MagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature::AttributeValue' has a wrong offset!");

}

