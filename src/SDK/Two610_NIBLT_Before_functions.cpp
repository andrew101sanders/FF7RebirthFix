#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Two610_NIBLT_Before

#include "Basic.hpp"

#include "Two610_NIBLT_Before_classes.hpp"
#include "Two610_NIBLT_Before_parameters.hpp"


namespace SDK
{

// Function 2610-NIBLT_Before.2610-NIBLT_Before_C.ExecuteUbergraph_2610-NIBLT_Before
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATwo610_NIBLT_Before_C::ExecuteUbergraph_2610_NIBLT_Before(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("2610-NIBLT_Before_C", "ExecuteUbergraph_2610-NIBLT_Before");

	Params::Two610_NIBLT_Before_C_ExecuteUbergraph_2610_NIBLT_Before Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 2610-NIBLT_Before.2610-NIBLT_Before_C.OnSetChapterProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATwo610_NIBLT_Before_C::OnSetChapterProgress(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("2610-NIBLT_Before_C", "OnSetChapterProgress");

	Params::Two610_NIBLT_Before_C_OnSetChapterProgress Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 2610-NIBLT_Before.2610-NIBLT_Before_C.OnSetStoryFlag
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             StoryFlagId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATwo610_NIBLT_Before_C::OnSetStoryFlag(class FName StoryFlagId, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("2610-NIBLT_Before_C", "OnSetStoryFlag");

	Params::Two610_NIBLT_Before_C_OnSetStoryFlag Parms{};

	Parms.StoryFlagId = StoryFlagId;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 2610-NIBLT_Before.2610-NIBLT_Before_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATwo610_NIBLT_Before_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("2610-NIBLT_Before_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

