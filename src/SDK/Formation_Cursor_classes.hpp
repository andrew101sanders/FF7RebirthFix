#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Formation_Cursor

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Formation_Cursor.Formation_Cursor_C
// 0x0010 (0x03D8 - 0x03C8)
class UFormation_Cursor_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       Loop;                                              // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Icon_Cursor;                                       // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Formation_Cursor_C">();
	}
	static class UFormation_Cursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFormation_Cursor_C>();
	}
};
static_assert(alignof(UFormation_Cursor_C) == 0x000008, "Wrong alignment on UFormation_Cursor_C");
static_assert(sizeof(UFormation_Cursor_C) == 0x0003D8, "Wrong size on UFormation_Cursor_C");
static_assert(offsetof(UFormation_Cursor_C, Loop) == 0x0003C8, "Member 'UFormation_Cursor_C::Loop' has a wrong offset!");
static_assert(offsetof(UFormation_Cursor_C, Icon_Cursor) == 0x0003D0, "Member 'UFormation_Cursor_C::Icon_Cursor' has a wrong offset!");

}

