#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN0010_00_Field_Wandering

#include "Basic.hpp"

#include "Enemy_FieldDefBase_Wandering_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EN0010_00_Field_Wandering.EN0010_00_Field_Wandering_C
// 0x0000 (0x0330 - 0x0330)
class UEN0010_00_Field_Wandering_C final : public UEnemy_FieldDefBase_Wandering_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EN0010_00_Field_Wandering_C">();
	}
	static class UEN0010_00_Field_Wandering_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEN0010_00_Field_Wandering_C>();
	}
};
static_assert(alignof(UEN0010_00_Field_Wandering_C) == 0x000010, "Wrong alignment on UEN0010_00_Field_Wandering_C");
static_assert(sizeof(UEN0010_00_Field_Wandering_C) == 0x000330, "Wrong size on UEN0010_00_Field_Wandering_C");

}

