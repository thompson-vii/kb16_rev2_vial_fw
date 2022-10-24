![](./layer.jpg)

# kb16_rev2_vial_fw
compiled firmware for doio's kb16 rev2 

Not compatible with via. Must use vial. Not compatible with rev1

Use qmk toolbox, hold top left key while plugging it in. 
Pick the bin file and click on flash. After flashing reconnect the usb cable. 
If everything goes well, you should see RGB pattern. 

compiled with following flag, layer count increased to 12. Added custom graphics so oled can display up to 12 layers.
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

EEPROM_DRIVER = vendor
```

keymap config.h

```
#define STM32_ONBOARD_EEPROM_SIZE 4098
#define DYNAMIC_KEYMAP_LAYER_COUNT 12
```

Advantage over stock firmware.
- Embeded layout so no need for sideloading json
- Native encoder layout
- Vial specific feature like macro delay
- RGB
- the knob now correctly emits 20 pulse per revolution, matching the dedent. 

using code from this pr https://github.com/qmk/qmk_firmware/pull/18699

Credit:
- HorrorTroll: QMK port
- PHSC138: Pin schematic
- Kolloom: Vial port, graphics, layout
