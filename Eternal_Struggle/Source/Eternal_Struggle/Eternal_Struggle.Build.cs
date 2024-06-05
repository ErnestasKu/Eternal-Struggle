// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Eternal_Struggle : ModuleRules
{
	public Eternal_Struggle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
