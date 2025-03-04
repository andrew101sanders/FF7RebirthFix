#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_1300_JUNOA_JunonArea_mob_13

#include "Basic.hpp"

#include "btsc_1300_JUNOA_JunonArea_mob_13_classes.hpp"
#include "btsc_1300_JUNOA_JunonArea_mob_13_parameters.hpp"


namespace SDK
{

// Function btsc_1300-JUNOA_JunonArea_mob_13.btsc_1300-JUNOA_JunonArea_mob_13_C.OnTakeDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CauserCharaName                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DamagedCharaName                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             AbilityId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBind                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bGuard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             hitBoneName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAttributeHit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bResistHit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             DamageSourceID                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEndBattleAttributeType                 appendAttribute                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   justHitRotYaw                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          hitPosition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHeal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bBurst                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abtsc_1300_JUNOA_JunonArea_mob_13_C::OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityId, bool bBind, bool bGuard, const class FName& hitBoneName, bool bAttributeHit, bool bResistHit, const class FName& DamageSourceID, EEndBattleAttributeType appendAttribute, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal, bool bBurst, bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_1300-JUNOA_JunonArea_mob_13_C", "OnTakeDamage");

	Params::btsc_1300_JUNOA_JunonArea_mob_13_C_OnTakeDamage Parms{};

	Parms.Damage = Damage;
	Parms.CauserCharaName = CauserCharaName;
	Parms.DamagedCharaName = DamagedCharaName;
	Parms.AbilityId = AbilityId;
	Parms.bBind = bBind;
	Parms.bGuard = bGuard;
	Parms.hitBoneName = hitBoneName;
	Parms.bAttributeHit = bAttributeHit;
	Parms.bResistHit = bResistHit;
	Parms.DamageSourceID = DamageSourceID;
	Parms.appendAttribute = appendAttribute;
	Parms.justHitRotYaw = justHitRotYaw;
	Parms.hitPosition = std::move(hitPosition);
	Parms.bHeal = bHeal;
	Parms.bBurst = bBurst;
	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_1300-JUNOA_JunonArea_mob_13.btsc_1300-JUNOA_JunonArea_mob_13_C.OnEntryBattleScene
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                             battleScenenBPName                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             territoryID                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_1300_JUNOA_JunonArea_mob_13_C::OnEntryBattleScene(const class FName& battleScenenBPName, const class FName& territoryID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_1300-JUNOA_JunonArea_mob_13_C", "OnEntryBattleScene");

	Params::btsc_1300_JUNOA_JunonArea_mob_13_C_OnEntryBattleScene Parms{};

	Parms.battleScenenBPName = battleScenenBPName;
	Parms.territoryID = territoryID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function btsc_1300-JUNOA_JunonArea_mob_13.btsc_1300-JUNOA_JunonArea_mob_13_C.ExecuteUbergraph_btsc_1300-JUNOA_JunonArea_mob_13
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abtsc_1300_JUNOA_JunonArea_mob_13_C::ExecuteUbergraph_btsc_1300_JUNOA_JunonArea_mob_13(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("btsc_1300-JUNOA_JunonArea_mob_13_C", "ExecuteUbergraph_btsc_1300-JUNOA_JunonArea_mob_13");

	Params::btsc_1300_JUNOA_JunonArea_mob_13_C_ExecuteUbergraph_btsc_1300_JUNOA_JunonArea_mob_13 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

