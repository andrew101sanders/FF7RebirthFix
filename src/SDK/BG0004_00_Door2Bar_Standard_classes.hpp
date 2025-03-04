#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BG0004_00_Door2Bar_Standard

#include "Basic.hpp"

#include "BG9020_00_Door2Knob_Standard_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BG0004_00_Door2Bar_Standard.BG0004_00_Door2Bar_Standard_C
// 0x0000 (0x0810 - 0x0810)
class ABG0004_00_Door2Bar_Standard_C final : public ABG9020_00_Door2Knob_Standard_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BG0004_00_Door2Bar_Standard_C">();
	}
	static class ABG0004_00_Door2Bar_Standard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABG0004_00_Door2Bar_Standard_C>();
	}
};
static_assert(alignof(ABG0004_00_Door2Bar_Standard_C) == 0x000008, "Wrong alignment on ABG0004_00_Door2Bar_Standard_C");
static_assert(sizeof(ABG0004_00_Door2Bar_Standard_C) == 0x000810, "Wrong size on ABG0004_00_Door2Bar_Standard_C");

}

