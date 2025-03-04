#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhotoTarget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PhotoTarget.PhotoTarget_C
// 0x0060 (0x0438 - 0x03D8)
class UPhotoTarget_C final : public UEndFieldTargetIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                       On_In;                                             // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Off_In;                                            // 0x03E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       On_Loop;                                           // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              BtnLight;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Effect_On_00;                                      // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Icon_Photo;                                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_On_Add;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_On_BG;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImageSet*                           Ims_On_Inside;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring2;                                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Ring3;                                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PhotoTarget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhotoTarget_C">();
	}
	static class UPhotoTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhotoTarget_C>();
	}
};
static_assert(alignof(UPhotoTarget_C) == 0x000008, "Wrong alignment on UPhotoTarget_C");
static_assert(sizeof(UPhotoTarget_C) == 0x000438, "Wrong size on UPhotoTarget_C");
static_assert(offsetof(UPhotoTarget_C, UberGraphFrame) == 0x0003D8, "Member 'UPhotoTarget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, On_In) == 0x0003E0, "Member 'UPhotoTarget_C::On_In' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Off_In) == 0x0003E8, "Member 'UPhotoTarget_C::Off_In' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, On_Loop) == 0x0003F0, "Member 'UPhotoTarget_C::On_Loop' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, BtnLight) == 0x0003F8, "Member 'UPhotoTarget_C::BtnLight' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Effect_On_00) == 0x000400, "Member 'UPhotoTarget_C::Effect_On_00' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Icon_Photo) == 0x000408, "Member 'UPhotoTarget_C::Icon_Photo' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Ims_On_Add) == 0x000410, "Member 'UPhotoTarget_C::Ims_On_Add' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Ims_On_BG) == 0x000418, "Member 'UPhotoTarget_C::Ims_On_BG' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Ims_On_Inside) == 0x000420, "Member 'UPhotoTarget_C::Ims_On_Inside' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Ring2) == 0x000428, "Member 'UPhotoTarget_C::Ring2' has a wrong offset!");
static_assert(offsetof(UPhotoTarget_C, Ring3) == 0x000430, "Member 'UPhotoTarget_C::Ring3' has a wrong offset!");

}

