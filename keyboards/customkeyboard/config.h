#pragma once

// I2C Driver mapping for RP2040 based on your schematic
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP28
#define I2C1_SCL_PIN GP29

// OLED Configuration
#define OLED_DISPLAY_128X32
#define OLED_BRIGHTNESS 128

#pragma once

// Unique ID required by Vial GUI framework to recognize layout adjustments
#define VIAL_KEYBOARD_UID {0xBE, 0xEF, 0x42, 0x01}
