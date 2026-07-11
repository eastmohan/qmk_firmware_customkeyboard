#include "quantum.h"

#ifdef OLED_ENABLE
// Adjust between OLED_ROTATION_270 or OLED_ROTATION_90 here depending on orientation preference
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270; 
}

static void render_status(void) {
    // Active Layer Identification
    oled_write_P(PSTR("LAYER\n"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("BASE \n"), false);
            break;
        case 1:
            oled_write_P(PSTR("FN   \n"), false);
            break;
        default:
            oled_write_P(PSTR("MISC \n"), false);
            break;
    }
    oled_write_P(PSTR("\n"), false);

    // Host LED Lock Status Indicators
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock ? PSTR("CAPS \n") : PSTR("caps \n"), led_state.caps_lock);
    oled_write_P(led_state.num_lock ? PSTR("NUM  \n") : PSTR("num  \n"), led_state.num_lock);
    oled_write_P(led_state.scroll_lock ? PSTR("SCRL \n") : PSTR("scrl \n"), led_state.scroll_lock);
}

bool oled_task_user(void) {
    render_status();
    return false;
}
#endif