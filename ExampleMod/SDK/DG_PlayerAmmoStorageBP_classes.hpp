#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAmmoStorageBP.PlayerAmmoStorageBP_C
// 0x0000 (0x0060 - 0x0060)
class UPlayerAmmoStorageBP_C : public UInventoryAmmoStorage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAmmoStorageBP.PlayerAmmoStorageBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
