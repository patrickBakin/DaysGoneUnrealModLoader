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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x06A0 - 0x0690)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}


	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
