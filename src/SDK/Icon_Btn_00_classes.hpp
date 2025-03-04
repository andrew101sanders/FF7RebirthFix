#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Icon_Btn_00

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Icon_Btn_00.Icon_Btn_00_C
// 0x00B0 (0x0478 - 0x03C8)
class UIcon_Btn_00_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       GuageMaxLight;                                     // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Stick_Left;                                        // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Stick_Right;                                       // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Stick_Down;                                        // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Stick_Up;                                          // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnNormal;                                         // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PressLight;                                        // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PressMashing;                                      // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnMash;                                           // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Arrow;                                             // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              BtnLight;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              GuageMax;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              GuageMax2;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_Btn;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring1;                                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring2;                                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring2_1;                                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring3;                                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring3_1;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndPieImage*                           RingGuage;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StickArrow;                                        // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              StickArrowEffect;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Icon_Btn_00_C">();
	}
	static class UIcon_Btn_00_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIcon_Btn_00_C>();
	}
};
static_assert(alignof(UIcon_Btn_00_C) == 0x000008, "Wrong alignment on UIcon_Btn_00_C");
static_assert(sizeof(UIcon_Btn_00_C) == 0x000478, "Wrong size on UIcon_Btn_00_C");
static_assert(offsetof(UIcon_Btn_00_C, GuageMaxLight) == 0x0003C8, "Member 'UIcon_Btn_00_C::GuageMaxLight' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Stick_Left) == 0x0003D0, "Member 'UIcon_Btn_00_C::Stick_Left' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Stick_Right) == 0x0003D8, "Member 'UIcon_Btn_00_C::Stick_Right' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Stick_Down) == 0x0003E0, "Member 'UIcon_Btn_00_C::Stick_Down' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Stick_Up) == 0x0003E8, "Member 'UIcon_Btn_00_C::Stick_Up' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, BtnNormal) == 0x0003F0, "Member 'UIcon_Btn_00_C::BtnNormal' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, PressLight) == 0x0003F8, "Member 'UIcon_Btn_00_C::PressLight' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, PressMashing) == 0x000400, "Member 'UIcon_Btn_00_C::PressMashing' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, BtnMash) == 0x000408, "Member 'UIcon_Btn_00_C::BtnMash' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Arrow) == 0x000410, "Member 'UIcon_Btn_00_C::Arrow' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, BtnLight) == 0x000418, "Member 'UIcon_Btn_00_C::BtnLight' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, GuageMax) == 0x000420, "Member 'UIcon_Btn_00_C::GuageMax' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, GuageMax2) == 0x000428, "Member 'UIcon_Btn_00_C::GuageMax2' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ims_Btn) == 0x000430, "Member 'UIcon_Btn_00_C::Ims_Btn' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ring1) == 0x000438, "Member 'UIcon_Btn_00_C::Ring1' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ring2) == 0x000440, "Member 'UIcon_Btn_00_C::Ring2' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ring2_1) == 0x000448, "Member 'UIcon_Btn_00_C::Ring2_1' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ring3) == 0x000450, "Member 'UIcon_Btn_00_C::Ring3' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, Ring3_1) == 0x000458, "Member 'UIcon_Btn_00_C::Ring3_1' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, RingGuage) == 0x000460, "Member 'UIcon_Btn_00_C::RingGuage' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, StickArrow) == 0x000468, "Member 'UIcon_Btn_00_C::StickArrow' has a wrong offset!");
static_assert(offsetof(UIcon_Btn_00_C, StickArrowEffect) == 0x000470, "Member 'UIcon_Btn_00_C::StickArrowEffect' has a wrong offset!");

}

