// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ForTestOnRepo : ModuleRules
{
	public ForTestOnRepo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
