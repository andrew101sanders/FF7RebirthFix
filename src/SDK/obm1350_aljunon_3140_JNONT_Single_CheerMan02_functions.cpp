#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: obm1350_aljunon_3140_JNONT_Single_CheerMan02

#include "Basic.hpp"

#include "obm1350_aljunon_3140_JNONT_Single_CheerMan02_classes.hpp"
#include "obm1350_aljunon_3140_JNONT_Single_CheerMan02_parameters.hpp"


namespace SDK
{

// Function obm1350_aljunon_3140_JNONT_Single_CheerMan02.obm1350_aljunon_3140_JNONT_Single_CheerMan02_C.CreateMobCommand
// (Event, Public, BlueprintEvent)

void Aobm1350_aljunon_3140_JNONT_Single_CheerMan02_C::CreateMobCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1350_aljunon_3140_JNONT_Single_CheerMan02_C", "CreateMobCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obm1350_aljunon_3140_JNONT_Single_CheerMan02.obm1350_aljunon_3140_JNONT_Single_CheerMan02_C.ExecuteUbergraph_obm1350_aljunon_3140_JNONT_Single_CheerMan02
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aobm1350_aljunon_3140_JNONT_Single_CheerMan02_C::ExecuteUbergraph_obm1350_aljunon_3140_JNONT_Single_CheerMan02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obm1350_aljunon_3140_JNONT_Single_CheerMan02_C", "ExecuteUbergraph_obm1350_aljunon_3140_JNONT_Single_CheerMan02");

	Params::obm1350_aljunon_3140_JNONT_Single_CheerMan02_C_ExecuteUbergraph_obm1350_aljunon_3140_JNONT_Single_CheerMan02 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

