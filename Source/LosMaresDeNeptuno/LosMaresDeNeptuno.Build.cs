// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LosMaresdeNeptuno : ModuleRules
{
	public LosMaresdeNeptuno(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"LosMaresdeNeptuno",
			"LosMaresdeNeptuno/Variant_Platforming",
			"LosMaresdeNeptuno/Variant_Platforming/Animation",
			"LosMaresdeNeptuno/Variant_Combat",
			"LosMaresdeNeptuno/Variant_Combat/AI",
			"LosMaresdeNeptuno/Variant_Combat/Animation",
			"LosMaresdeNeptuno/Variant_Combat/Gameplay",
			"LosMaresdeNeptuno/Variant_Combat/Interfaces",
			"LosMaresdeNeptuno/Variant_Combat/UI",
			"LosMaresdeNeptuno/Variant_SideScrolling",
			"LosMaresdeNeptuno/Variant_SideScrolling/AI",
			"LosMaresdeNeptuno/Variant_SideScrolling/Gameplay",
			"LosMaresdeNeptuno/Variant_SideScrolling/Interfaces",
			"LosMaresdeNeptuno/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
