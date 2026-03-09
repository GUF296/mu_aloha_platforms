[PcdsFixedAtBuild.common]
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferWidth|1600
gAndromedaPkgTokenSpaceGuid.PcdMipiFrameBufferHeight|2560

# Display Caller
gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerExitDisableDisplay|FALSE
gAndromedaPkgTokenSpaceGuid.PcdDisplayCallerStallBeforeEnable|1000

# Smbios Info
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemBrand|"Qualcomm"
gAndromedaPkgTokenSpaceGuid.PcdSmbiosSystemRetailSku|"6"

gAndromedaPkgTokenSpaceGuid.PcdABLProduct|"Pineapple"

[PcdsDynamicDefault.common]
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1600
gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|2560
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1600
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|2560
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|99  # = 1600 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|126    # = 2560 / EFI_GLYPH_HEIGHT(19)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutColumn|99       # = 1600 / EFI_GLYPH_WIDTH(8)
gEfiMdeModulePkgTokenSpaceGuid.PcdConOutRow|126         # = 2560 / EFI_GLYPH_HEIGHT(19)
