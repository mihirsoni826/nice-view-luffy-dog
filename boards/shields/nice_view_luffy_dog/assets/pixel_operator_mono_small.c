/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --font ../../Downloads/pixel_operator/PixelOperatorMono.ttf --size 10 --format lvgl --bpp 1 --range 0x20-0x7F --no-compress --lv-font-name pixel_operator_mono_small -o boards/shields/nice_luffy_gear_five/assets/pixel_operator_mono_small.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include <lvgl.h>
#endif

#ifndef PIXEL_OPERATOR_MONO_SMALL
#define PIXEL_OPERATOR_MONO_SMALL 1
#endif

#if PIXEL_OPERATOR_MONO_SMALL

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfc,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x57, 0xd4, 0xaf, 0xa8,

    /* U+0024 "$" */
    0x4b, 0xe4, 0xfa, 0x40,

    /* U+0025 "%" */
    0x6, 0x88, 0xa2, 0x88,

    /* U+0026 "&" */
    0xf1, 0x5a, 0xc0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x6a, 0x50,

    /* U+0029 ")" */
    0x95, 0xa0,

    /* U+002A "*" */
    0xfd, 0x0,

    /* U+002B "+" */
    0x5d, 0x0,

    /* U+002C "," */
    0x60,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0xfc,

    /* U+0030 "0" */
    0xf7, 0xda, 0x80,

    /* U+0031 "1" */
    0xd9, 0x25, 0xc0,

    /* U+0032 "2" */
    0xe1, 0x9, 0xc0,

    /* U+0033 "3" */
    0xf1, 0x21, 0x96,

    /* U+0034 "4" */
    0x35, 0x9f, 0x11,

    /* U+0035 "5" */
    0xf3, 0x9a, 0x80,

    /* U+0036 "6" */
    0xf3, 0x5a, 0x80,

    /* U+0037 "7" */
    0xe5, 0x9, 0x0,

    /* U+0038 "8" */
    0xf5, 0x5a, 0x80,

    /* U+0039 "9" */
    0xf5, 0x9a, 0x80,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x40, 0x60,

    /* U+003C "<" */
    0x5d,

    /* U+003D "=" */
    0xfc,

    /* U+003E ">" */
    0x96,

    /* U+003F "?" */
    0xe1, 0x20, 0x80,

    /* U+0040 "@" */
    0xfd, 0x7b, 0xdb, 0x38,

    /* U+0041 "A" */
    0x56, 0xfb, 0x40,

    /* U+0042 "B" */
    0xf7, 0x5b, 0x80,

    /* U+0043 "C" */
    0xf8, 0x88, 0x96,

    /* U+0044 "D" */
    0xf6, 0xdb, 0x80,

    /* U+0045 "E" */
    0xf8, 0xc8, 0x8f,

    /* U+0046 "F" */
    0xf8, 0xc8, 0x88,

    /* U+0047 "G" */
    0xf2, 0xda, 0xc0,

    /* U+0048 "H" */
    0xb7, 0xdb, 0x40,

    /* U+0049 "I" */
    0xe9, 0x25, 0xc0,

    /* U+004A "J" */
    0x38, 0x84, 0x29, 0x30,

    /* U+004B "K" */
    0xb3, 0x69, 0x40,

    /* U+004C "L" */
    0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0x8e, 0xeb, 0x18, 0xc4,

    /* U+004E "N" */
    0xb7, 0xdb, 0x40,

    /* U+004F "O" */
    0xf6, 0xda, 0x80,

    /* U+0050 "P" */
    0xf7, 0x49, 0x0,

    /* U+0051 "Q" */
    0x42, 0xde, 0xc0,

    /* U+0052 "R" */
    0xf7, 0x69, 0x40,

    /* U+0053 "S" */
    0xf1, 0x1a, 0x80,

    /* U+0054 "T" */
    0xe9, 0x24, 0x80,

    /* U+0055 "U" */
    0xb6, 0xda, 0x80,

    /* U+0056 "V" */
    0xb6, 0xda, 0x80,

    /* U+0057 "W" */
    0x8d, 0x6b, 0x5a, 0xa8,

    /* U+0058 "X" */
    0xb5, 0xb, 0x40,

    /* U+0059 "Y" */
    0xb4, 0x24, 0x80,

    /* U+005A "Z" */
    0xe5, 0x9, 0xc0,

    /* U+005B "[" */
    0xea, 0xb0,

    /* U+005C "\\" */
    0xfc,

    /* U+005D "]" */
    0xd5, 0x70,

    /* U+005E "^" */
    0xd4,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x55, 0xd6,

    /* U+0062 "b" */
    0x9a, 0xdb, 0x80,

    /* U+0063 "c" */
    0x69, 0x89, 0x60,

    /* U+0064 "d" */
    0x2e, 0xda, 0xc0,

    /* U+0065 "e" */
    0x57, 0xd4,

    /* U+0066 "f" */
    0x2b, 0xa4, 0x80,

    /* U+0067 "g" */
    0xf6, 0xba, 0x80,

    /* U+0068 "h" */
    0x9a, 0x5b, 0x40,

    /* U+0069 "i" */
    0x59, 0x25, 0xc0,

    /* U+006A "j" */
    0x13, 0x11, 0x19, 0x60,

    /* U+006B "k" */
    0x89, 0xac, 0xa9,

    /* U+006C "l" */
    0xc9, 0x25, 0xc0,

    /* U+006D "m" */
    0xd4, 0x2b, 0x5a, 0x80,

    /* U+006E "n" */
    0xd2, 0xda,

    /* U+006F "o" */
    0x56, 0xd4,

    /* U+0070 "p" */
    0xd6, 0xdd, 0x0,

    /* U+0071 "q" */
    0x76, 0xd6, 0x40,

    /* U+0072 "r" */
    0xbc, 0x88, 0x80,

    /* U+0073 "s" */
    0x55, 0x54,

    /* U+0074 "t" */
    0x5d, 0x24, 0x40,

    /* U+0075 "u" */
    0xb6, 0x84,

    /* U+0076 "v" */
    0xb6, 0x84,

    /* U+0077 "w" */
    0xad, 0x6a, 0x5, 0x0,

    /* U+0078 "x" */
    0xa1, 0xa,

    /* U+0079 "y" */
    0xb6, 0xba, 0x80,

    /* U+007A "z" */
    0xe5, 0x4e,

    /* U+007B "{" */
    0x6a, 0x24, 0x40,

    /* U+007C "|" */
    0xfc,

    /* U+007D "}" */
    0xc8, 0xa5, 0x0,

    /* U+007E "~" */
    0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 80, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 80, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 11, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 80, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 19, .adv_w = 80, .box_w = 2, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 80, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 25, .adv_w = 80, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 27, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 28, .adv_w = 80, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 29, .adv_w = 80, .box_w = 1, .box_h = 1, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 80, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 80, .box_w = 1, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 80, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 64, .adv_w = 80, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 65, .adv_w = 80, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 66, .adv_w = 80, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 67, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 80, .box_w = 2, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 80, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 80, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 80, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 161, .adv_w = 80, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 162, .adv_w = 80, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 163, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 182, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 80, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 192, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 209, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 212, .adv_w = 80, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 233, .adv_w = 80, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 80, .box_w = 1, .box_h = 6, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 80, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 80, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t pixel_operator_mono_small = {
#else
lv_font_t pixel_operator_mono_small = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if PIXEL_OPERATOR_MONO_SMALL*/

