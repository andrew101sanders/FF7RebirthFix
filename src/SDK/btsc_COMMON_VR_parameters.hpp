#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: btsc_COMMON_VR

#include "Basic.hpp"


namespace SDK::Params
{

// Function btsc_COMMON_VR.btsc_COMMON_VR_C.ExecuteUbergraph_btsc_COMMON_VR
// 0x0080 (0x0080 - 0x0000)
struct btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_battleScenenBPName;                   // 0x0014(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_territoryID;                          // 0x001C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AEndCharacter*>                  CallFunc_GetBattleMembers_ReturnValue;             // 0x0028(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AEndCharacter*                          CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AEndCharacter*>                  CallFunc_GetBattleMembers_ReturnValue_1;           // 0x0060(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76[0x2];                                       // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR) == 0x000008, "Wrong alignment on btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR");
static_assert(sizeof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR) == 0x000080, "Wrong size on btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, EntryPoint) == 0x000000, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::EntryPoint' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, Temp_int_Array_Index_Variable) == 0x000004, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, K2Node_Event_battleScenenBPName) == 0x000014, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::K2Node_Event_battleScenenBPName' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, K2Node_Event_territoryID) == 0x00001C, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::K2Node_Event_territoryID' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_GetBattleMembers_ReturnValue) == 0x000028, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_GetBattleMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Conv_NameToString_ReturnValue) == 0x000038, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Array_Get_Item) == 0x000048, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, K2Node_SwitchString_CmpSuccess) == 0x000050, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_GetBattleMembers_ReturnValue_1) == 0x000060, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_GetBattleMembers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Less_IntInt_ReturnValue_1) == 0x000075, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'btsc_COMMON_VR_C_ExecuteUbergraph_btsc_COMMON_VR::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function btsc_COMMON_VR.btsc_COMMON_VR_C.OnEntryBattleScene
// 0x0010 (0x0010 - 0x0000)
struct btsc_COMMON_VR_C_OnEntryBattleScene final
{
public:
	class FName                                   battleScenenBPName;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   territoryID;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(btsc_COMMON_VR_C_OnEntryBattleScene) == 0x000004, "Wrong alignment on btsc_COMMON_VR_C_OnEntryBattleScene");
static_assert(sizeof(btsc_COMMON_VR_C_OnEntryBattleScene) == 0x000010, "Wrong size on btsc_COMMON_VR_C_OnEntryBattleScene");
static_assert(offsetof(btsc_COMMON_VR_C_OnEntryBattleScene, battleScenenBPName) == 0x000000, "Member 'btsc_COMMON_VR_C_OnEntryBattleScene::battleScenenBPName' has a wrong offset!");
static_assert(offsetof(btsc_COMMON_VR_C_OnEntryBattleScene, territoryID) == 0x000008, "Member 'btsc_COMMON_VR_C_OnEntryBattleScene::territoryID' has a wrong offset!");

}

