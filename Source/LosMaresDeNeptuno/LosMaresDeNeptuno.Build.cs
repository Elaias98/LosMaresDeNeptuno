// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LosMaresDeNeptuno : ModuleRules
{
	public LosMaresDeNeptuno(ReadOnlyTargetRules Target) : base(Target)
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
			"LosMaresDeNeptuno",
			"LosMaresDeNeptuno/Variant_Platforming",
			"LosMaresDeNeptuno/Variant_Platforming/Animation",
			"LosMaresDeNeptuno/Variant_Combat",
			"LosMaresDeNeptuno/Variant_Combat/AI",
			"LosMaresDeNeptuno/Variant_Combat/Animation",
			"LosMaresDeNeptuno/Variant_Combat/Gameplay",
			"LosMaresDeNeptuno/Variant_Combat/Interfaces",
			"LosMaresDeNeptuno/Variant_Combat/UI",
			"LosMaresDeNeptuno/Variant_SideScrolling",
			"LosMaresDeNeptuno/Variant_SideScrolling/AI",
			"LosMaresDeNeptuno/Variant_SideScrolling/Gameplay",
			"LosMaresDeNeptuno/Variant_SideScrolling/Interfaces",
			"LosMaresDeNeptuno/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
