#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Enemy_AICombinationDefBase

#include "Basic.hpp"

#include "EndGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Enemy_AICombinationDefBase.Enemy_AICombinationDefBase_C
// 0x0000 (0x0088 - 0x0088)
class UEnemy_AICombinationDefBase_C : public UEndAICombinationDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Enemy_AICombinationDefBase_C">();
	}
	static class UEnemy_AICombinationDefBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnemy_AICombinationDefBase_C>();
	}
};
static_assert(alignof(UEnemy_AICombinationDefBase_C) == 0x000008, "Wrong alignment on UEnemy_AICombinationDefBase_C");
static_assert(sizeof(UEnemy_AICombinationDefBase_C) == 0x000088, "Wrong size on UEnemy_AICombinationDefBase_C");

}

