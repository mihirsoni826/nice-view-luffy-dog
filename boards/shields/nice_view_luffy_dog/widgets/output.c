#include <zephyr/kernel.h>
#include "output.h"
#include "../assets/custom_fonts.h"

static void draw_status_text(lv_obj_t *canvas, const char *text) {
    lv_draw_label_dsc_t label_dsc;
    init_label_dsc(
        &label_dsc,
        LVGL_FOREGROUND,
        &pixel_operator_mono_small,
        LV_TEXT_ALIGN_RIGHT
    );

    lv_canvas_draw_text(canvas, 43, 3, 24, &label_dsc, text);
}

void draw_output_status(lv_obj_t *canvas, const struct status_state *state) {
#if !IS_ENABLED(CONFIG_ZMK_SPLIT) || IS_ENABLED(CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    switch (state->selected_endpoint.transport) {
    case ZMK_TRANSPORT_USB:
        draw_status_text(canvas, "USB");
        break;

    case ZMK_TRANSPORT_BLE:
        if (state->active_profile_bonded) {
            if (state->active_profile_connected) {
                draw_status_text(canvas, "BT");
            } else {
                draw_status_text(canvas, "DISC");
            }
        } else {
            draw_status_text(canvas, "PAIR");
        }
        break;
    }
#else
    if (state->connected) {
        draw_status_text(canvas, "BT");
    } else {
        draw_status_text(canvas, "DISC");
    }
#endif
}
