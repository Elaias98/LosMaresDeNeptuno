using UnrealBuildTool;
using System.Collections.Generic;

// La clase Target del Editor
public class LosMaresDeNeptunoEditorTarget : TargetRules
{
    public LosMaresDeNeptunoEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor; // Tipo debe ser Editor
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3;

        // El nombre del módulo principal del proyecto
        ExtraModuleNames.AddRange(new string[] { "LosMaresDeNeptuno" });
    }
}