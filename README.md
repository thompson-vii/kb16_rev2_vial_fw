# kb16_rev2_vial_fw
compiled firmware for doio's kb16 rev2 

Not compatible with via. Must use vial.

Use qmk toolbox, hold top left key while plugging it in. 
Pick the bin file and click on flash. After flashing reconnect the usb cable. 
If everything goes well, you should see RGB pattern. 

compiled with following flag, layer count increased to 8. OLED doesn't display layer beyond 4. No plan to fix. 

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

- You no longer need to sideload json in via
- sensible encoder layout
- Vial specific feature like macro delay
- RGB
- the knob now correctly emits 20 pulse per revolution, matching the dedent. 

using code from this pr https://github.com/qmk/qmk_firmware/pull/18699
