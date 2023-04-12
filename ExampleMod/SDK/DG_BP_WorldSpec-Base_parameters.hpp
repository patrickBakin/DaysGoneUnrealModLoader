#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.StopTimelines
struct ABP_WorldSpec_Base_C_StopTimelines_Params
{
	TArray<class UTimelineComponent*>                  Timelines;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncTimelines
struct ABP_WorldSpec_Base_C_SyncTimelines_Params
{
	float                                              TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UTimelineComponent*>                  Timelines;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.SyncBaseTimelines
struct ABP_WorldSpec_Base_C_SyncBaseTimelines_Params
{
	float                                              TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.UserConstructionScript
struct ABP_WorldSpec_Base_C_UserConstructionScript_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseLightingVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseLightingVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseLightingVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseDepthFogVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseDepthFogVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseDepthFogVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseVolFogVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseVolFogVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseVolFogVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseTonemapVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseTonemapVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseTonemapVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseColorCorrectVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseColorCorrectVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseColorCorrectVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseForeCloudVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseForeCloudVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseForeCloudVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseBackCloudVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseBackCloudVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseBackCloudVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseWeatherVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseWeatherVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseWeatherVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__FinishedFunc
struct ABP_WorldSpec_Base_C_BaseAtmosphericFogVals_TOD__FinishedFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.BaseAtmosphericFogVals_TOD__UpdateFunc
struct ABP_WorldSpec_Base_C_BaseAtmosphericFogVals_TOD__UpdateFunc_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveSync
struct ABP_WorldSpec_Base_C_ReceiveSync_Params
{
	float*                                             TimeOfDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ReceiveStop
struct ABP_WorldSpec_Base_C_ReceiveStop_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.OnLerpComplete
struct ABP_WorldSpec_Base_C_OnLerpComplete_Params
{
};

// Function BP_WorldSpec-Base.BP_WorldSpec-Base_C.ExecuteUbergraph_BP_WorldSpec-Base
struct ABP_WorldSpec_Base_C_ExecuteUbergraph_BP_WorldSpec_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
