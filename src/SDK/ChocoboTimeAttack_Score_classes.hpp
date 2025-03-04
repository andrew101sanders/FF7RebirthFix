#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChocoboTimeAttack_Score

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChocoboTimeAttack_Score.ChocoboTimeAttack_Score_C
// 0x0078 (0x0440 - 0x03C8)
class UChocoboTimeAttack_Score_C final : public UEndUserWidget
{
public:
	class UWidgetAnimation*                       HightScoreUp;                                      // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NormalScoreUp;                                     // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HighScore;                                         // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NormalScore;                                       // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEndImage*                              Light1;                                            // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Light2;                                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line1;                                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              Line2;                                             // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_PlayerScore;                                   // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_PlayerScore2;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_ScoreTitle;                                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_TargetScore;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndTextBlock*                          Txt_TargetTitle;                                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              UnderLine1;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEndImage*                              UnderLine2;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChocoboTimeAttack_Score_C">();
	}
	static class UChocoboTimeAttack_Score_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChocoboTimeAttack_Score_C>();
	}
};
static_assert(alignof(UChocoboTimeAttack_Score_C) == 0x000008, "Wrong alignment on UChocoboTimeAttack_Score_C");
static_assert(sizeof(UChocoboTimeAttack_Score_C) == 0x000440, "Wrong size on UChocoboTimeAttack_Score_C");
static_assert(offsetof(UChocoboTimeAttack_Score_C, HightScoreUp) == 0x0003C8, "Member 'UChocoboTimeAttack_Score_C::HightScoreUp' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, NormalScoreUp) == 0x0003D0, "Member 'UChocoboTimeAttack_Score_C::NormalScoreUp' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, HighScore) == 0x0003D8, "Member 'UChocoboTimeAttack_Score_C::HighScore' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, NormalScore) == 0x0003E0, "Member 'UChocoboTimeAttack_Score_C::NormalScore' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Light1) == 0x0003E8, "Member 'UChocoboTimeAttack_Score_C::Light1' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Light2) == 0x0003F0, "Member 'UChocoboTimeAttack_Score_C::Light2' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Line1) == 0x0003F8, "Member 'UChocoboTimeAttack_Score_C::Line1' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Line2) == 0x000400, "Member 'UChocoboTimeAttack_Score_C::Line2' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Txt_PlayerScore) == 0x000408, "Member 'UChocoboTimeAttack_Score_C::Txt_PlayerScore' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Txt_PlayerScore2) == 0x000410, "Member 'UChocoboTimeAttack_Score_C::Txt_PlayerScore2' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Txt_ScoreTitle) == 0x000418, "Member 'UChocoboTimeAttack_Score_C::Txt_ScoreTitle' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Txt_TargetScore) == 0x000420, "Member 'UChocoboTimeAttack_Score_C::Txt_TargetScore' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, Txt_TargetTitle) == 0x000428, "Member 'UChocoboTimeAttack_Score_C::Txt_TargetTitle' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, UnderLine1) == 0x000430, "Member 'UChocoboTimeAttack_Score_C::UnderLine1' has a wrong offset!");
static_assert(offsetof(UChocoboTimeAttack_Score_C, UnderLine2) == 0x000438, "Member 'UChocoboTimeAttack_Score_C::UnderLine2' has a wrong offset!");

}

