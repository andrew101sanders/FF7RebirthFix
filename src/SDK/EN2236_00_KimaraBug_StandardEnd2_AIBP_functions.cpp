#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EN2236_00_KimaraBug_StandardEnd2_AIBP

#include "Basic.hpp"

#include "EN2236_00_KimaraBug_StandardEnd2_AIBP_classes.hpp"
#include "EN2236_00_KimaraBug_StandardEnd2_AIBP_parameters.hpp"


namespace SDK
{

// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.ExecuteUbergraph_EN2236_00_KimaraBug_StandardEnd2_AIBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::ExecuteUbergraph_EN2236_00_KimaraBug_StandardEnd2_AIBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "ExecuteUbergraph_EN2236_00_KimaraBug_StandardEnd2_AIBP");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_ExecuteUbergraph_EN2236_00_KimaraBug_StandardEnd2_AIBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnMoveTimeOutInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIActionMoveTimeOut                 TimeOutType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MoveDefTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ActionDefTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ComboDefTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnMoveTimeOutInvoke(EEndAIActionMoveTimeOut TimeOutType, class FName MoveDefTag, class FName ActionDefTag, class FName ComboDefTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnMoveTimeOutInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnMoveTimeOutInvoke Parms{};

	Parms.TimeOutType = TimeOutType;
	Parms.MoveDefTag = MoveDefTag;
	Parms.ActionDefTag = ActionDefTag;
	Parms.ComboDefTag = ComboDefTag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnProwlInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIProwlCallType                     CallType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnProwlInvoke(EEndAIProwlCallType CallType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnProwlInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnProwlInvoke Parms{};

	Parms.CallType = CallType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnMotionMessageInvoke
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             InMotionName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InIntValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InFloatValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnMotionMessageInvoke(class FName InMotionName, class FName InName, int32 InIntValue, float InFloatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnMotionMessageInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnMotionMessageInvoke Parms{};

	Parms.InMotionName = InMotionName;
	Parms.InName = InName;
	Parms.InIntValue = InIntValue;
	Parms.InFloatValue = InFloatValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnActionInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndAIIntervalType                      IntervalType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ExtraIntervalId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnActionInvoke(EEndAIIntervalType IntervalType, class FName ExtraIntervalId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnActionInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnActionInvoke Parms{};

	Parms.IntervalType = IntervalType;
	Parms.ExtraIntervalId = ExtraIntervalId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnActionTopPriorityInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TopPriorityActionId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnActionTopPriorityInvoke(class FName TopPriorityActionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnActionTopPriorityInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnActionTopPriorityInvoke Parms{};

	Parms.TopPriorityActionId = TopPriorityActionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.OnEndAbilityInvoke
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             AbilityId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    createdDamageSource                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    suspended                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    suspendedSummonCutScene                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::OnEndAbilityInvoke(class FName AbilityId, bool createdDamageSource, bool suspended, bool suspendedSummonCutScene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "OnEndAbilityInvoke");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_OnEndAbilityInvoke Parms{};

	Parms.AbilityId = AbilityId;
	Parms.createdDamageSource = createdDamageSource;
	Parms.suspended = suspended;
	Parms.suspendedSummonCutScene = suspendedSummonCutScene;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_L_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_L_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_L_K2Node_InputKeyEvent_0");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_L_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_K_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_K_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_K_K2Node_InputKeyEvent_1");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_K_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_J_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_J_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_J_K2Node_InputKeyEvent_2");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_J_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_I_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_I_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_I_K2Node_InputKeyEvent_3");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_I_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_H_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_H_K2Node_InputKeyEvent_4");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_H_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_G_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_G_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_G_K2Node_InputKeyEvent_5");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_G_K2Node_InputKeyEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_F_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_F_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_F_K2Node_InputKeyEvent_6");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_F_K2Node_InputKeyEvent_6 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_E_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_E_K2Node_InputKeyEvent_7");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_E_K2Node_InputKeyEvent_7 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_D_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_D_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_D_K2Node_InputKeyEvent_8");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_D_K2Node_InputKeyEvent_8 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_C_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_C_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_C_K2Node_InputKeyEvent_9");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_C_K2Node_InputKeyEvent_9 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_B_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_B_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_B_K2Node_InputKeyEvent_10");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_B_K2Node_InputKeyEvent_10 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_A_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_A_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_A_K2Node_InputKeyEvent_11");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_A_K2Node_InputKeyEvent_11 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_Zero_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_Zero_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_Zero_K2Node_InputKeyEvent_12");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_Zero_K2Node_InputKeyEvent_12 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_One_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_One_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_One_K2Node_InputKeyEvent_13");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_One_K2Node_InputKeyEvent_13 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_Three_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_Three_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_Three_K2Node_InputKeyEvent_14");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_Three_K2Node_InputKeyEvent_14 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EN2236_00_KimaraBug_StandardEnd2_AIBP.EN2236_00_KimaraBug_StandardEnd2_AIBP_C.InpActEvt_Two_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AEN2236_00_KimaraBug_StandardEnd2_AIBP_C::InpActEvt_Two_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EN2236_00_KimaraBug_StandardEnd2_AIBP_C", "InpActEvt_Two_K2Node_InputKeyEvent_15");

	Params::EN2236_00_KimaraBug_StandardEnd2_AIBP_C_InpActEvt_Two_K2Node_InputKeyEvent_15 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}

}

