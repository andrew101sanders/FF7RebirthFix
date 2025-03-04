#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemList

#include "Basic.hpp"

#include "ItemList_classes.hpp"
#include "ItemList_parameters.hpp"


namespace SDK
{

// Function ItemList.ItemList_C.ExecuteUbergraph_ItemList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemList_C::ExecuteUbergraph_ItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemList_C", "ExecuteUbergraph_ItemList");

	Params::ItemList_C_ExecuteUbergraph_ItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemList.ItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

