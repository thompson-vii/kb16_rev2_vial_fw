/* Copyright 2022 DOIO
 * Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#ifdef OLED_ENABLE
    /* Mapping I2C2 for OLED */
    #define I2C1_SCL_PIN B10
    #define I2C1_SDA_PIN B11
    #define I2C_DRIVER I2CD2

    /* Use the custom font */
    #define OLED_FONT_H "./lib/glcdfont.c"
#endif

/* OLED Settings */
#define OLED_TIMEOUT 60000 // number of milliseconds to wait until OLED automatically turns off

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 10240
#define WEAR_LEVELING_BACKING_SIZE 20480

#ifdef RGB_MATRIX_ENABLE
    /* RGB Matrix config */
	#define RGB_MATRIX_LED_COUNT 16
	#define RGB_MATRIX_SLEEP
	#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
	#define RGB_MATRIX_KEYPRESSES
	#define RGB_MATRIX_TIMEOUT 60000 // number of milliseconds to wait until rgb automatically turns off	
#endif
