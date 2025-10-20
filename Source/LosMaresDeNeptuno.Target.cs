using UnrealBuildTool;
using System.Collections.Generic;

// --- LÍNEA 6 es el inicio de la clase ---
public class LosMaresDeNeptunoTarget : TargetRules
{
    // El constructor de la clase
    public LosMaresDeNeptunoTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V5; // Asegúrate de que V5 sea correcto para UE 5.6
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_3; // Ajusta la versión de orden de inclusión si es necesario

        // Asegúrate de que el nombre del módulo principal de tu proyecto sea correcto aquí
        ExtraModuleNames.AddRange(new string[] { "LosMaresDeNeptuno" });
    }
}