#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EndClimbingForLevel

#include "Basic.hpp"

#include "EndClimbingBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EndClimbingForLevel.EndClimbingForLevel_C
// 0x0000 (0x0870 - 0x0870)
class AEndClimbingForLevel_C final : public AEndClimbingBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EndClimbingForLevel_C">();
	}
	static class AEndClimbingForLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEndClimbingForLevel_C>();
	}
};
static_assert(alignof(AEndClimbingForLevel_C) == 0x000010, "Wrong alignment on AEndClimbingForLevel_C");
static_assert(sizeof(AEndClimbingForLevel_C) == 0x000870, "Wrong size on AEndClimbingForLevel_C");

}

