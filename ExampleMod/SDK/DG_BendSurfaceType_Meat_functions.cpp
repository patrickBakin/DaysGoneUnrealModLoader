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

// Function BendSurfaceType_Meat.BendSurfaceType_Meat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendSurfaceType_Meat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSurfaceType_Meat.BendSurfaceType_Meat_C.UserConstructionScript");

	ABendSurfaceType_Meat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
