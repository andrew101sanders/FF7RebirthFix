#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0001_00_Ability_Reload

#include "Basic.hpp"

#include "Enemy_AbilityDefBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0001_00_Ability_Reload.EN0001_00_Ability_Reload_C
// 0x0000 (0x0168 - 0x0168)
class UEN0001_00_Ability_Reload_C final : public UEnemy_AbilityDefBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0001_00_Ability_Reload_C">();
	}
	static class UEN0001_00_Ability_Reload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0001_00_Ability_Reload_C>();
	}
};
static_assert(alignof(UEN0001_00_Ability_Reload_C) == 0x000008, "Wrong alignment on UEN0001_00_Ability_Reload_C");
static_assert(sizeof(UEN0001_00_Ability_Reload_C) == 0x000168, "Wrong size on UEN0001_00_Ability_Reload_C");

}

