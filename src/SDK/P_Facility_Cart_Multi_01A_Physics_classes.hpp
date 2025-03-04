#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_Facility_Cart_Multi_01A_Physics

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass P_Facility_Cart_Multi_01A_Physics.P_Facility_Cart_Multi_01A_Physics_C
// 0x0020 (0x0808 - 0x07E8)
class AP_Facility_Cart_Multi_01A_Physics_C final : public AEndEnvironmentPhysicsStaticMeshActor
{
public:
	class UEndStaticMeshPhysicsPartsComponent*    Facility_Cart_Multi_01A_4_Physics;                 // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEndStaticMeshPhysicsPartsComponent*    Facility_Cart_Multi_01A_3_Physics;                 // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEndStaticMeshPhysicsPartsComponent*    Facility_Cart_Multi_01A_2_Physics;                 // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEndStaticMeshPhysicsPartsComponent*    Facility_Cart_Multi_01A_1_Physics;                 // 0x0800(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P_Facility_Cart_Multi_01A_Physics_C">();
	}
	static class AP_Facility_Cart_Multi_01A_Physics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AP_Facility_Cart_Multi_01A_Physics_C>();
	}
};
static_assert(alignof(AP_Facility_Cart_Multi_01A_Physics_C) == 0x000008, "Wrong alignment on AP_Facility_Cart_Multi_01A_Physics_C");
static_assert(sizeof(AP_Facility_Cart_Multi_01A_Physics_C) == 0x000808, "Wrong size on AP_Facility_Cart_Multi_01A_Physics_C");
static_assert(offsetof(AP_Facility_Cart_Multi_01A_Physics_C, Facility_Cart_Multi_01A_4_Physics) == 0x0007E8, "Member 'AP_Facility_Cart_Multi_01A_Physics_C::Facility_Cart_Multi_01A_4_Physics' has a wrong offset!");
static_assert(offsetof(AP_Facility_Cart_Multi_01A_Physics_C, Facility_Cart_Multi_01A_3_Physics) == 0x0007F0, "Member 'AP_Facility_Cart_Multi_01A_Physics_C::Facility_Cart_Multi_01A_3_Physics' has a wrong offset!");
static_assert(offsetof(AP_Facility_Cart_Multi_01A_Physics_C, Facility_Cart_Multi_01A_2_Physics) == 0x0007F8, "Member 'AP_Facility_Cart_Multi_01A_Physics_C::Facility_Cart_Multi_01A_2_Physics' has a wrong offset!");
static_assert(offsetof(AP_Facility_Cart_Multi_01A_Physics_C, Facility_Cart_Multi_01A_1_Physics) == 0x000800, "Member 'AP_Facility_Cart_Multi_01A_Physics_C::Facility_Cart_Multi_01A_1_Physics' has a wrong offset!");

}

