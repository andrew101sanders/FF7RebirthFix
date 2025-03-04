#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MemberChange

#include "Basic.hpp"

#include "MemberChange_classes.hpp"
#include "MemberChange_parameters.hpp"


namespace SDK
{

// Function MemberChange.MemberChange_C.ExecuteUbergraph_MemberChange
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMemberChange_C::ExecuteUbergraph_MemberChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MemberChange_C", "ExecuteUbergraph_MemberChange");

	Params::MemberChange_C_ExecuteUbergraph_MemberChange Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MemberChange.MemberChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMemberChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MemberChange_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

