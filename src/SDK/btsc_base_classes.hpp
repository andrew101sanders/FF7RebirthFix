#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_base

#include "Basic.hpp"

#include "EndDataBase_structs.hpp"
#include "Engine_structs.hpp"
#include "EndGame_structs.hpp"
#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass btsc_base.btsc_base_C
// 0x00B0 (0x0370 - 0x02C0)
class Abtsc_base_C final : public AEndBattleSceneBlueprint
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          BrtVoiceColdyMode;                                 // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DeadCharaName;                                     // 0x02D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DeadCharaCode;                                     // 0x02DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InMember_Cloud;                                    // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Barret;                                   // 0x02E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Tifa;                                     // 0x02E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Aerith;                                   // 0x02E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_RedXIII;                                  // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Yuffie;                                   // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_CaitSith;                                 // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Zack;                                     // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InMember_Sephiroth;                                // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         BattlleSceneSituation;                             // 0x02ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MortallyAlart_Cloud;                               // 0x02EE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Barret;                              // 0x02EF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Tifa;                                // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Aerith;                              // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_RedXIII;                             // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Zack;                                // 0x02F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Yuffie;                              // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_CaitSith;                            // 0x02F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MortallyAlart_Sephiroth;                           // 0x02F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F7[0x1];                                      // 0x02F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RatioTwin_SoloStart;                               // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RatioTwin_TwinStart;                               // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ratio_Trinity_SoloStart;                           // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ratio_Trinity_TwinStart;                           // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LeaderChecker;                                     // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveMemberCount;                                 // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __MaskedTwinTalkRatio;                             // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BattleMemberTemporary;                             // 0x0314(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           BattleMembers;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   BurstTalkerID;                                     // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TalkerID;                                          // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TalkActorName;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SecretEnemyBattle;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   EntryTerritoryID;                                  // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StartBattleTalkType;                               // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BurstCauserName;                                   // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_btsc_base(int32 EntryPoint);
	void ResetCombinationAbilityCompleteVoice();
	void OnStartBattleJenovaLife();
	void OnEndCombinationAbility(const class FName& CombinationAbilityId, bool hitDamageSource, class FName useCharacterName);
	void OnBPMessageFromAIBP(class AEndCharacter* SendCharacter, const class FName& Message);
	void ForceFillLimitForJenovaLifeBtl_2(class FName territoryID);
	void OnBattleTalkEnded(class FName TalkID);
	void EntrySecretEnemyBattleTerritory(class FName territoryID);
	void OnTakeDamage(int32 Damage, const class FName& CauserCharaName, const class FName& DamagedCharaName, const class FName& AbilityId, bool bBind, bool bGuard, const class FName& hitBoneName, bool bAttributeHit, bool bResistHit, const class FName& DamageSourceID, EEndBattleAttributeType appendAttribute, float justHitRotYaw, const struct FVector& hitPosition, bool bHeal, bool bBurst, bool bLock);
	void ForceFillLimitForJenovaLifeBtl(class FName territoryID);
	void OnReadyBattleTalk(class FName territoryID);
	void OnEntryBattleScene(const class FName& battleScenenBPName, const class FName& territoryID);
	void OnIncrementBattleCountPerID(class FName CauserCharaName, class FName TargetCharaName, EEndBattleCountLogType Type, class FName ID, int32 Count);
	void OnDLCSummonUltimateMagicEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"btsc_base_C">();
	}
	static class Abtsc_base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abtsc_base_C>();
	}
};
static_assert(alignof(Abtsc_base_C) == 0x000008, "Wrong alignment on Abtsc_base_C");
static_assert(sizeof(Abtsc_base_C) == 0x000370, "Wrong size on Abtsc_base_C");
static_assert(offsetof(Abtsc_base_C, UberGraphFrame) == 0x0002C0, "Member 'Abtsc_base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, DefaultSceneRoot) == 0x0002C8, "Member 'Abtsc_base_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BrtVoiceColdyMode) == 0x0002D0, "Member 'Abtsc_base_C::BrtVoiceColdyMode' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, DeadCharaName) == 0x0002D4, "Member 'Abtsc_base_C::DeadCharaName' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, DeadCharaCode) == 0x0002DC, "Member 'Abtsc_base_C::DeadCharaCode' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Cloud) == 0x0002E4, "Member 'Abtsc_base_C::InMember_Cloud' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Barret) == 0x0002E5, "Member 'Abtsc_base_C::InMember_Barret' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Tifa) == 0x0002E6, "Member 'Abtsc_base_C::InMember_Tifa' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Aerith) == 0x0002E7, "Member 'Abtsc_base_C::InMember_Aerith' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_RedXIII) == 0x0002E8, "Member 'Abtsc_base_C::InMember_RedXIII' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Yuffie) == 0x0002E9, "Member 'Abtsc_base_C::InMember_Yuffie' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_CaitSith) == 0x0002EA, "Member 'Abtsc_base_C::InMember_CaitSith' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Zack) == 0x0002EB, "Member 'Abtsc_base_C::InMember_Zack' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, InMember_Sephiroth) == 0x0002EC, "Member 'Abtsc_base_C::InMember_Sephiroth' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BattlleSceneSituation) == 0x0002ED, "Member 'Abtsc_base_C::BattlleSceneSituation' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Cloud) == 0x0002EE, "Member 'Abtsc_base_C::MortallyAlart_Cloud' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Barret) == 0x0002EF, "Member 'Abtsc_base_C::MortallyAlart_Barret' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Tifa) == 0x0002F0, "Member 'Abtsc_base_C::MortallyAlart_Tifa' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Aerith) == 0x0002F1, "Member 'Abtsc_base_C::MortallyAlart_Aerith' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_RedXIII) == 0x0002F2, "Member 'Abtsc_base_C::MortallyAlart_RedXIII' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Zack) == 0x0002F3, "Member 'Abtsc_base_C::MortallyAlart_Zack' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Yuffie) == 0x0002F4, "Member 'Abtsc_base_C::MortallyAlart_Yuffie' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_CaitSith) == 0x0002F5, "Member 'Abtsc_base_C::MortallyAlart_CaitSith' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, MortallyAlart_Sephiroth) == 0x0002F6, "Member 'Abtsc_base_C::MortallyAlart_Sephiroth' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, RatioTwin_SoloStart) == 0x0002F8, "Member 'Abtsc_base_C::RatioTwin_SoloStart' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, RatioTwin_TwinStart) == 0x0002FC, "Member 'Abtsc_base_C::RatioTwin_TwinStart' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, Ratio_Trinity_SoloStart) == 0x000300, "Member 'Abtsc_base_C::Ratio_Trinity_SoloStart' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, Ratio_Trinity_TwinStart) == 0x000304, "Member 'Abtsc_base_C::Ratio_Trinity_TwinStart' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, LeaderChecker) == 0x000308, "Member 'Abtsc_base_C::LeaderChecker' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, ActiveMemberCount) == 0x00030C, "Member 'Abtsc_base_C::ActiveMemberCount' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, __MaskedTwinTalkRatio) == 0x000310, "Member 'Abtsc_base_C::__MaskedTwinTalkRatio' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BattleMemberTemporary) == 0x000314, "Member 'Abtsc_base_C::BattleMemberTemporary' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BattleMembers) == 0x000320, "Member 'Abtsc_base_C::BattleMembers' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BurstTalkerID) == 0x000330, "Member 'Abtsc_base_C::BurstTalkerID' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, TalkerID) == 0x000338, "Member 'Abtsc_base_C::TalkerID' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, TalkActorName) == 0x000340, "Member 'Abtsc_base_C::TalkActorName' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, SecretEnemyBattle) == 0x000348, "Member 'Abtsc_base_C::SecretEnemyBattle' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, EntryTerritoryID) == 0x000358, "Member 'Abtsc_base_C::EntryTerritoryID' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, StartBattleTalkType) == 0x000360, "Member 'Abtsc_base_C::StartBattleTalkType' has a wrong offset!");
static_assert(offsetof(Abtsc_base_C, BurstCauserName) == 0x000368, "Member 'Abtsc_base_C::BurstCauserName' has a wrong offset!");

}

