# kb16_rev2_vial_fw
compiled firmware for doio's kb16 rev2 

Not compatible with via. Must use vial.

Use qmk toolbox, hold top left key while plugging it in. 
Pick the bin file and click on flash. 

compiled with following flag, layer count increased to 8

```
VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes

# Encoder enabled
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes

COMMAND_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes 
MOUSEKEY_ENABLE = yes
COMBO_ENABLE = yes
SEND_STRING_ENABLE = yes
TAP_DANCE_ENABLE = yes
```

using code from this pr https://github.com/qmk/qmk_firmware/pull/18699
