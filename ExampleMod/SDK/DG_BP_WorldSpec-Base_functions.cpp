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

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTimelineComponent*> Timelines                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_WorldSpec_Base_C::StopTimelines(TArray<class UTimelineComponent*>* Timelines)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines");

	ABP_WorldSpec_Base_C_StopTimelines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timelines != nullptr)
		*Timelines = params.Timelines;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UTimelineComponent*> Timelines                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_WorldSpec_Base_C::SyncTimelines(float TimeOfDay, float Rate, TArray<class UTimelineComponent*>* Timelines)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines");

	ABP_WorldSpec_Base_C_SyncTimelines_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timelines != nullptr)
		*Timelines = params.Timelines;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::SyncBaseTimelines(float TimeOfDay, float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines");

	ABP_WorldSpec_Base_C_SyncBaseTimelines_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript");

	ABP_WorldSpec_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseLightingVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseLightingVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseLightingVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseLightingVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseDepthFogVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseDepthFogVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseDepthFogVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseDepthFogVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseVolFogVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseVolFogVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseVolFogVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseVolFogVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseTonemapVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseTonemapVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseTonemapVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseTonemapVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseColorCorrectVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseColorCorrectVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseColorCorrectVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseColorCorrectVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseForeCloudVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseForeCloudVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseForeCloudVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseForeCloudVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseBackCloudVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseBackCloudVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseBackCloudVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseBackCloudVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseWeatherVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseWeatherVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseWeatherVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseWeatherVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__FinishedFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseAtmosphericFogVals_TOD__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__FinishedFunc");

	ABP_WorldSpec_Base_C_BaseAtmosphericFogVals_TOD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__UpdateFunc
// (BlueprintEvent)

void ABP_WorldSpec_Base_C::BaseAtmosphericFogVals_TOD__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__UpdateFunc");

	ABP_WorldSpec_Base_C_BaseAtmosphericFogVals_TOD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::ReceiveSync(float* TimeOfDay, float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync");

	ABP_WorldSpec_Base_C_ReceiveSync_Params params;
	params.TimeOfDay = TimeOfDay;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::ReceiveStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop");

	ABP_WorldSpec_Base_C_ReceiveStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldSpec_Base_C::OnLerpComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete");

	ABP_WorldSpec_Base_C_OnLerpComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldSpec_Base_C::ExecuteUbergraph_BP_WorldSpec_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base");

	ABP_WorldSpec_Base_C_ExecuteUbergraph_BP_WorldSpec_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
