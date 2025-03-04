#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Formation_Leader

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Formation_Leader.Formation_Leader_C
// 0x0010 (0x03D8 - 0x03C8)
class UFormation_Leader_C final : public UEndUserWidget
{
public:
	class UEndImage*                              Img;                                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_Unit;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Formation_Leader_C">();
	}
	static class UFormation_Leader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFormation_Leader_C>();
	}
};
static_assert(alignof(UFormation_Leader_C) == 0x000008, "Wrong alignment on UFormation_Leader_C");
static_assert(sizeof(UFormation_Leader_C) == 0x0003D8, "Wrong size on UFormation_Leader_C");
static_assert(offsetof(UFormation_Leader_C, Img) == 0x0003C8, "Member 'UFormation_Leader_C::Img' has a wrong offset!");
static_assert(offsetof(UFormation_Leader_C, Txt_Unit) == 0x0003D0, "Member 'UFormation_Leader_C::Txt_Unit' has a wrong offset!");

}

