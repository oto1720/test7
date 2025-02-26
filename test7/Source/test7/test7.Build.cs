// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class test7 : ModuleRules
{
	public test7(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
