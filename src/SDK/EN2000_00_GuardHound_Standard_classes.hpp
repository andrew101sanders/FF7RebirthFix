#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2000_00_GuardHound_Standard

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN2000_00_GuardHound_Standard.EN2000_00_GuardHound_Standard_C
// 0x0010 (0x1600 - 0x15F0)
class AEN2000_00_GuardHound_Standard_C : public AEndCharacter
{
public:
	uint8                                         Pad_15E8[0x8];                                     // 0x15E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UEndBodyCollisionPrimitive*             EndBodyCollisionPrimitive1;                        // 0x15F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEndBodyCollisionPrimitive*             EndBodyCollisionPrimitive;                         // 0x15F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN2000_00_GuardHound_Standard_C">();
	}
	static class AEN2000_00_GuardHound_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEN2000_00_GuardHound_Standard_C>();
	}
};
static_assert(alignof(AEN2000_00_GuardHound_Standard_C) == 0x000010, "Wrong alignment on AEN2000_00_GuardHound_Standard_C");
static_assert(sizeof(AEN2000_00_GuardHound_Standard_C) == 0x001600, "Wrong size on AEN2000_00_GuardHound_Standard_C");
static_assert(offsetof(AEN2000_00_GuardHound_Standard_C, EndBodyCollisionPrimitive1) == 0x0015F0, "Member 'AEN2000_00_GuardHound_Standard_C::EndBodyCollisionPrimitive1' has a wrong offset!");
static_assert(offsetof(AEN2000_00_GuardHound_Standard_C, EndBodyCollisionPrimitive) == 0x0015F8, "Member 'AEN2000_00_GuardHound_Standard_C::EndBodyCollisionPrimitive' has a wrong offset!");

}

