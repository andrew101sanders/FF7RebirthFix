#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: obm1300_SquareArea_490_JUNOA_Single_LookOut02

#include "Basic.hpp"

#include "obm1300_SquareArea_490_JUNOA_Single_LookOut02_classes.hpp"
#include "obm1300_SquareArea_490_JUNOA_Single_LookOut02_parameters.hpp"


namespace SDK
{

// Function obm1300_SquareArea_490_JUNOA_Single_LookOut02.obm1300_SquareArea_490_JUNOA_Single_LookOut02_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void Aobm1300_SquareArea_490_JUNOA_Single_LookOut02_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1300_SquareArea_490_JUNOA_Single_LookOut02_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obm1300_SquareArea_490_JUNOA_Single_LookOut02.obm1300_SquareArea_490_JUNOA_Single_LookOut02_C.ExecuteUbergraph_obm1300_SquareArea_490_JUNOA_Single_LookOut02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aobm1300_SquareArea_490_JUNOA_Single_LookOut02_C::ExecuteUbergraph_obm1300_SquareArea_490_JUNOA_Single_LookOut02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1300_SquareArea_490_JUNOA_Single_LookOut02_C", "ExecuteUbergraph_obm1300_SquareArea_490_JUNOA_Single_LookOut02");

	Params::obm1300_SquareArea_490_JUNOA_Single_LookOut02_C_ExecuteUbergraph_obm1300_SquareArea_490_JUNOA_Single_LookOut02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

