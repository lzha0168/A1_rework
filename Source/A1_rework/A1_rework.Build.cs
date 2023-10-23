// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class A1_rework : ModuleRules
{
	public A1_rework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
