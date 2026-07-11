#pragma once

// I2C Driver mapping for RP2040 based on your schematic
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP28
#define I2C1_SCL_PIN GP29

// OLED Configuration
#define OLED_DISPLAY_128X32
#define OLED_BRIGHTNESS 128

// Vial Security Configuration
#define VIAL_KEYBOARD_UID {0x4E, 0xA2, 0x8D, 0x1F, 0x6B, 0x3C, 0x99, 0x55}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 6, 5 } // Maps to SW1 and SW2