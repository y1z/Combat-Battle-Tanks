// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Combat_Battle_Tanks : ModuleRules
{
	public Combat_Battle_Tanks(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
