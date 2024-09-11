// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Multijugador2 : ModuleRules
{
	public Multijugador2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
