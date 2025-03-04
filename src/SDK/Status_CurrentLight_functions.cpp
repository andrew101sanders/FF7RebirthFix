#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Status_CurrentLight

#include "Basic.hpp"

#include "Status_CurrentLight_classes.hpp"
#include "Status_CurrentLight_parameters.hpp"


namespace SDK
{

// Function Status_CurrentLight.Status_CurrentLight_C.ExecuteUbergraph_Status_CurrentLight
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatus_CurrentLight_C::ExecuteUbergraph_Status_CurrentLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Status_CurrentLight_C", "ExecuteUbergraph_Status_CurrentLight");

	Params::Status_CurrentLight_C_ExecuteUbergraph_Status_CurrentLight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Status_CurrentLight.Status_CurrentLight_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatus_CurrentLight_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Status_CurrentLight_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

