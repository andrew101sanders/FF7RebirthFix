#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shop_List_Top_Cell_Light

#include "Basic.hpp"

#include "Shop_List_Top_Cell_Light_classes.hpp"
#include "Shop_List_Top_Cell_Light_parameters.hpp"


namespace SDK
{

// Function Shop_List_Top_Cell_Light.Shop_List_Top_Cell_Light_C.ExecuteUbergraph_Shop_List_Top_Cell_Light
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShop_List_Top_Cell_Light_C::ExecuteUbergraph_Shop_List_Top_Cell_Light(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shop_List_Top_Cell_Light_C", "ExecuteUbergraph_Shop_List_Top_Cell_Light");

	Params::Shop_List_Top_Cell_Light_C_ExecuteUbergraph_Shop_List_Top_Cell_Light Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shop_List_Top_Cell_Light.Shop_List_Top_Cell_Light_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShop_List_Top_Cell_Light_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shop_List_Top_Cell_Light_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

