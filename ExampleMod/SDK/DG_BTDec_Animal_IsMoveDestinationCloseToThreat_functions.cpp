// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.IsLocationCloseToDestination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTDec_Animal_IsMoveDestinationCloseToThreat_C::IsLocationCloseToDestination(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.IsLocationCloseToDestination");

	UBTDec_Animal_IsMoveDestinationCloseToThreat_C_IsLocationCloseToDestination_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTDec_Animal_IsMoveDestinationCloseToThreat_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTDec_Animal_IsMoveDestinationCloseToThreat.BTDec_Animal_IsMoveDestinationCloseToThreat_C.PerformConditionCheckAI");

	UBTDec_Animal_IsMoveDestinationCloseToThreat_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
