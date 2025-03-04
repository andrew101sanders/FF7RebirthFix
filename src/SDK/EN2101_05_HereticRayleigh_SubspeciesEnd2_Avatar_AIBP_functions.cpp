#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP

#include "Basic.hpp"

#include "EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_classes.hpp"
#include "EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_parameters.hpp"


namespace SDK
{

// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.ExecuteUbergraph_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::ExecuteUbergraph_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "ExecuteUbergraph_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_ExecuteUbergraph_EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnMotionStateMessageBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             InMotionName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIntValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InFloatValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InTotalDuration                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnMotionStateMessageBegin(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue, float InTotalDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnMotionStateMessageBegin");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnMotionStateMessageBegin Parms{};

	Parms.InMotionName = InMotionName;
	Parms.InName = InName;
	Parms.InIntValue = InIntValue;
	Parms.InFloatValue = InFloatValue;
	Parms.InTotalDuration = InTotalDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.AsyncCheckConditionInvoke
// (Event, Protected, BlueprintEvent)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::AsyncCheckConditionInvoke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "AsyncCheckConditionInvoke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnAITimerInvoke
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnAITimerInvoke(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnAITimerInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnAITimerInvoke Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnActionTopPriorityInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TopPriorityActionId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnActionTopPriorityInvoke(class FName TopPriorityActionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnActionTopPriorityInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnActionTopPriorityInvoke Parms{};

	Parms.TopPriorityActionId = TopPriorityActionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnProwlInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIProwlCallType                     CallType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnProwlInvoke(EEndAIProwlCallType CallType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnProwlInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnProwlInvoke Parms{};

	Parms.CallType = CallType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnUseAbilityInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             AbilityId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnUseAbilityInvoke(class FName AbilityId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnUseAbilityInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnUseAbilityInvoke Parms{};

	Parms.AbilityId = AbilityId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnMotionMessageInvoke
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             InMotionName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIntValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InFloatValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnMotionMessageInvoke(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnMotionMessageInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnMotionMessageInvoke Parms{};

	Parms.InMotionName = InMotionName;
	Parms.InName = InName;
	Parms.InIntValue = InIntValue;
	Parms.InFloatValue = InFloatValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnStartBattleInvoke
// (Event, Public, BlueprintEvent)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnStartBattleInvoke()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnStartBattleInvoke");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnDead
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    AtBurst                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnDead(bool AtBurst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnDead");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnDead Parms{};

	Parms.AtBurst = AtBurst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnActionInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIIntervalType                      IntervalType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExtraIntervalId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnActionInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnActionInvoke Parms{};

	Parms.IntervalType = IntervalType;
	Parms.ExtraIntervalId = ExtraIntervalId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnPartsBreak
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             PartsID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnPartsBreak(class FName PartsID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnPartsBreak");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnPartsBreak Parms{};

	Parms.PartsID = PartsID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.OnGroupMessageInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FEndAIBattleGroupNotifyInfo      NotifyInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::OnGroupMessageInvoke(const struct FEndAIBattleGroupNotifyInfo& NotifyInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "OnGroupMessageInvoke");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_OnGroupMessageInvoke Parms{};

	Parms.NotifyInfo = std::move(NotifyInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP.EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C.InpActEvt_Y_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C::InpActEvt_Y_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C", "InpActEvt_Y_K2Node_InputKeyEvent_0");

	Params::EN2101_05_HereticRayleigh_SubspeciesEnd2_Avatar_AIBP_C_InpActEvt_Y_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

}

