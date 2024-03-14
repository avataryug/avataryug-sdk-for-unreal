// Copyright Epic Games, Inc. All Rights Reserved.

#include "Avataryug.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#endif // WITH_EDITOR

#define LOCTEXT_NAMESPACE "FAvataryugModule"

#include "AvataryugRuntimeSetting.h"

void FAvataryugModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
   RegisterSettings();
}

void FAvataryugModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
    UnregisterSettings();
}

void FAvataryugModule::RegisterSettings()
{
#if WITH_EDITOR
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", "Avataryug",
            LOCTEXT("SettingsName", "Avataryug"),
            LOCTEXT("SettingsDescription", "Configure the Avataryug plugin"),
            GetMutableDefault<UAvataryugRuntimeSetting>()
        );
    }
#endif // WITH_EDITOR
}

void FAvataryugModule::UnregisterSettings()
{
#if WITH_EDITOR
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
    {
        SettingsModule->UnregisterSettings("Project", "Plugins", "Avataryug");
    }
#endif
}
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAvataryugModule, Avataryug)