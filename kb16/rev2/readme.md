# KB16-01 (Revision 2)

![KB16-01](https://i.imgur.com/lpq47ELh.png)

A macropad that have 16-key keyboard made by DOIO, which controlled by an APM32F103CBT6 chipset. The keyboard features per-key RGB, 3 encoder and an OLED screen for displaying useful information.

* QMK Keyboard Maintainer: [HorrorTroll](https://github.com/HorrorTroll)
* Hardware Supported: APM32F103CBT6

Make example for this keyboard (after setting up your **vial-qmk** build environment in MSYS):

    make doio/kb16/rev2:vial

## Bootloader

Enter the bootloader with **Bootmagic reset**: Hold down the key at (0,0) in the matrix (1! key) and plug in the keyboard
