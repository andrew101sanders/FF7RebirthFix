#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: One210_CHOFA

#include "Basic.hpp"

#include "One210_CHOFA_classes.hpp"
#include "One210_CHOFA_parameters.hpp"


namespace SDK
{

// Function 1210-CHOFA.1210-CHOFA_C.ExecuteUbergraph_1210-CHOFA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AOne210_CHOFA_C::ExecuteUbergraph_1210_CHOFA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("1210-CHOFA_C", "ExecuteUbergraph_1210-CHOFA");

	Params::One210_CHOFA_C_ExecuteUbergraph_1210_CHOFA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function 1210-CHOFA.1210-CHOFA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOne210_CHOFA_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("1210-CHOFA_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

