#include "ExampleMod.h"
#include "Utilities/MinHook.h"





/*
*  If you need to call c++ function from blueprint you can do it by using BPFUNCTION(YourFunctionName) and register it under ExampleMod::InitializeMod()

*/
BPFUNCTION(WriteToFile)
{
	std::cout << "WriteToFile" << std::endl;
	struct InputParams
	{
		UE4::FString NameTest;
	};
	auto Inputs = stack->GetInputParams<InputParams>();
	stack->SetOutput<UE4::FString>("OutPutString", L"KboyGang");
	stack->SetOutput<bool>("ReturnValue", true);
}
void InitSDK()
{
	SDK::UObject::GObjects = (SDK::FUObjectArray*)GameProfile::SelectedGameProfile.GObject;
	SDK::FName::GNames = (SDK::TNameEntryArray*)(*(DWORD64*)(GameProfile::SelectedGameProfile.GName));
	SDK::UWorld::GWorld = (SDK::UWorld**)(DWORD64)(GameProfile::SelectedGameProfile.GWorld);
	SDK::UObject::ProcessEventAddress = GameProfile::SelectedGameProfile.ProcessEvent;

}

// Only Called Once, if you need to hook shit, declare some global non changing values
void ExampleMod::InitializeMod()
{
	UE4::InitSDK();
	SetupHooks();
	InitSDK();
	REGISTER_FUNCTION(WriteToFile);

	//MinHook::Init(); //Uncomment if you plan to do hooks

	//UseMenuButton = true; // Allows Mod Loader To Show Button
}



void ExampleMod::InitGameState()
{
}


/*
* For Example if we're going to modify ASwarmerPawn_C which is base class of swarmer
* we do this in BeginPlay when the actor begins.
* 
* This is kinda poor implementation of SDK because i don't want to remove UE4 sdk which was already integrated perfectly


*/
void ExampleMod::BeginPlay(UE4::AActor* Actor)
{	
	//We're not using UE4 namespace now instead we use SDK

	
	if (((SDK::AActor*)(Actor))->IsA(SDK::ASwarmerPawn_C::StaticClass())) /* We use IsA() to check whether this Actor is a subclass of ASwarmerPawn_C of Is a ASwarmerPawn_C */
	{
		auto swarmer = (SDK::ASwarmerPawn_C*)(Actor); /* We're sure that it's ASwarmerPawn so we can cast it*/

	
		//static here, find once;                             <class >       
		static auto CustomMesh = SDK::UObject::FindObject<SDK::USkeletalMesh>(" YOUR SKELETAL MESH OBJECT HERE "); /* You can find the name in ObjectDumper*/
		if (CustomMesh) //if it found the object
		{
			if (swarmer->IsAlive()) //check if its still alive
			{
				swarmer->Mesh->SetSkeletalMesh(CustomMesh);
				Log::Print("Found and Set Custom Skeletal Mesh");
			}
		


			//Call Blueprint function of your Blueprint Mod
			if (ModActor)
			{	
				//call FunctionName() in blueprint mod, Event also works
				ModActor->CallFunctionByNameWithArguments(L"FunctionName", nullptr, NULL, true);
			}
		}
		
		//Getting your player controller
		auto playerPlayerController = SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	

	}

}

void ExampleMod::PostBeginPlay(std::wstring ModActorName, UE4::AActor* Actor)
{
	// Filters Out All Mod Actors Not Related To Your Mod
	std::wstring TmpModName(ModName.begin(), ModName.end());
	if (ModActorName == TmpModName)
	{
		//Sets ModActor Ref
		ModActor = Actor;
	}
}

void ExampleMod::DX11Present(ID3D11Device* pDevice, ID3D11DeviceContext* pContext, ID3D11RenderTargetView* pRenderTargetView)
{
}

void ExampleMod::OnModMenuButtonPressed()
{
}

void ExampleMod::DrawImGui()
{
}