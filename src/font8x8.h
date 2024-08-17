// Copyright 2012 by Thomas Singer
// Licensed under GPL v3, http://opensource.org/licenses/GPL-3.0



/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : 8x8.h
 * Date                : 17.07.2011
 * Font size in bytes  : 6246
 * Font width          : 8
 * Font height         : -8
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT8x8_H
#define FONT8x8_H
/*
#define NEW_FONT_WIDTH 8
#define NEW_FONT_HEIGHT -8

static uint8_t new_Font[] PROGMEM = {
*/
// according to http://gcc.gnu.org/bugzilla/show_bug.cgi?id=34734 this will produce a warning
const static uint8_t FONT8x8[] PROGMEM = {
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, // 2 [ | ]
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, // 3 [---]
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, // 4 [/  ]
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, // 5 [  \]
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, // 6 [  /]
    0x38, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, // 7 [\  ]
    0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, // 8 [_|_]
    0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, // 9 [-|-]
    0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, // A [-| ]
    0x00, 0x00, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, // B [ |-]
    0x00, 0x7E, 0xFF, 0xE7, 0xE7, 0xFF, 0x7E, 0x00, // C red
    0x00, 0x7E, 0xFF, 0xFF, 0xF9, 0xF9, 0x7E, 0x00, // D green
    0x00, 0x7E, 0x9F, 0x9F, 0xF9, 0xF9, 0x7E, 0x00, // E green-yellow
    0x00, 0x7E, 0xDF, 0xE7, 0xE7, 0xFB, 0x7E, 0x00, // F red-white
    0x14, 0x0A, 0x05, 0xFF, 0xFF, 0x00, 0x00, 0x00, // 10 [/|| ]
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x05, 0x0A, 0x14, // 11 [ ||\]
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA0, 0x50, 0x28, // 12 [ ||/]
    0x28, 0x50, 0xA0, 0xFF, 0xFF, 0x00, 0x00, 0x00, // 13 [\|| ]
    0x1C, 0x0E, 0x07, 0xAB, 0xD5, 0x00, 0x00, 0x00, // 14 [//| ]
    0x00, 0x00, 0x00, 0xD5, 0xAB, 0x07, 0x0E, 0x1C, // 15 [  |\\]
    0x00, 0x00, 0x00, 0xAB, 0xD5, 0xE0, 0x70, 0x38, // 16 [  |//]
    0x38, 0x70, 0xE0, 0xD5, 0xAB, 0x00, 0x00, 0x00, // 17 [\\|  ]
    0x1C, 0x1A, 0x1D, 0x1A, 0x19, 0x18, 0x18, 0x18, // 18 [/= ]
    0x18, 0x18, 0x18, 0x19, 0x1A, 0x1D, 0x1A, 0x1C, // 19 [ =\]
    0x18, 0x18, 0x18, 0x98, 0x58, 0xB8, 0x58, 0x38, // 1A [ =/]
    0x38, 0x58, 0xB8, 0x58, 0x98, 0x18, 0x18, 0x18, // 1B [\= ]
    0x1C, 0x0E, 0x17, 0x0B, 0x11, 0x08, 0x10, 0x18, // 1C [//-  ]
    0x18, 0x10, 0x08, 0x11, 0x0B, 0x17, 0x0E, 0x1C, // 1D [  -\\]
    0x18, 0x08, 0x10, 0x88, 0xD0, 0xE8, 0x70, 0x38, // 1E [  -//]
    0x38, 0x70, 0xE8, 0xD0, 0x88, 0x10, 0x08, 0x18, // 1F [\\-  ]
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0x00, 0x00, 0x5F, 0x5F, 0x00, 0x00, 0x00, // 33
    0x00, 0x05, 0x03, 0x00, 0x05, 0x03, 0x00, 0x00, // 34
    0x20, 0x74, 0x2E, 0x24, 0x74, 0x2E, 0x04, 0x00, // 35
    0x26, 0x6F, 0x49, 0x7F, 0x49, 0x7B, 0x32, 0x00, // 36
    0x43, 0x23, 0x10, 0x08, 0x04, 0x62, 0x61, 0x00, // 37
    0x36, 0x7F, 0x49, 0x5F, 0x36, 0x60, 0x40, 0x00, // 38
    0x00, 0x00, 0x00, 0x05, 0x03, 0x00, 0x00, 0x00, // 39
    0x00, 0x00, 0x3E, 0x7F, 0x41, 0x00, 0x00, 0x00, // 40
    0x00, 0x00, 0x41, 0x7F, 0x3E, 0x00, 0x00, 0x00, // 41
    0x08, 0x2A, 0x3E, 0x1C, 0x3E, 0x2A, 0x08, 0x00, // 42
    0x00, 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, // 43
    0x00, 0x00, 0x00, 0xA0, 0x60, 0x00, 0x00, 0x00, // 44
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, // 45
    0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x70, 0x7C, 0x1F, 0x07, 0x00, 0x00, // 47
    0x3E, 0x7F, 0x51, 0x49, 0x45, 0x7F, 0x3E, 0x00, // 48
    0x00, 0x00, 0x42, 0x7F, 0x7F, 0x40, 0x00, 0x00, // 49
    0x62, 0x73, 0x51, 0x59, 0x49, 0x4F, 0x46, 0x00, // 50
    0x22, 0x63, 0x41, 0x49, 0x49, 0x7F, 0x36, 0x00, // 51
    0x1C, 0x1E, 0x13, 0x79, 0x78, 0x10, 0x10, 0x00, // 52
    0x20, 0x6F, 0x4F, 0x49, 0x49, 0x79, 0x31, 0x00, // 53
    0x3C, 0x7E, 0x4B, 0x49, 0x49, 0x79, 0x30, 0x00, // 54
    0x01, 0x01, 0x71, 0x79, 0x0D, 0x07, 0x03, 0x00, // 55
    0x36, 0x7F, 0x49, 0x49, 0x49, 0x7F, 0x36, 0x00, // 56
    0x06, 0x4F, 0x49, 0x49, 0x69, 0x3F, 0x1E, 0x00, // 57
    0x00, 0x00, 0x00, 0x36, 0x36, 0x00, 0x00, 0x00, // 58
    0x00, 0x00, 0x00, 0xB6, 0x76, 0x00, 0x00, 0x00, // 59
    0x00, 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, // 60
    0x00, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x00, // 61
    0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00, // 62
    0x02, 0x03, 0x01, 0x59, 0x59, 0x07, 0x06, 0x00, // 63
    0x7E, 0x81, 0xB9, 0xA5, 0x9D, 0xA1, 0x3E, 0x00, // 64
    0x78, 0x7C, 0x16, 0x13, 0x16, 0x7C, 0x78, 0x00, // 65
    0x41, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00, // 66
    0x3E, 0x7F, 0x41, 0x41, 0x41, 0x63, 0x22, 0x00, // 67
    0x41, 0x7F, 0x7F, 0x41, 0x41, 0x7F, 0x3E, 0x00, // 68
    0x41, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00, // 69
    0x41, 0x7F, 0x7F, 0x49, 0x09, 0x09, 0x01, 0x00, // 70
    0x3E, 0x7F, 0x41, 0x49, 0x49, 0x7B, 0x3A, 0x00, // 71
    0x00, 0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00, // 72
    0x00, 0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00, 0x00, // 73
    0x00, 0x20, 0x60, 0x41, 0x7F, 0x3F, 0x01, 0x00, // 74
    0x41, 0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x41, 0x00, // 75
    0x00, 0x7F, 0x7F, 0x40, 0x40, 0x40, 0x60, 0x00, // 76
    0x7F, 0x7F, 0x06, 0x0C, 0x06, 0x7F, 0x7F, 0x00, // 77
    0x7F, 0x7F, 0x0E, 0x1C, 0x38, 0x7F, 0x7F, 0x00, // 78
    0x3E, 0x7F, 0x41, 0x41, 0x41, 0x7F, 0x3E, 0x00, // 79
    0x41, 0x7F, 0x7F, 0x49, 0x09, 0x0F, 0x06, 0x00, // 80
    0x3E, 0x7F, 0x41, 0x41, 0x41, 0xFF, 0xBE, 0x00, // 81
    0x01, 0x7F, 0x7F, 0x19, 0x39, 0x6F, 0x46, 0x00, // 82
    0x26, 0x6F, 0x49, 0x49, 0x49, 0x7B, 0x32, 0x00, // 83
    0x00, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x00, // 84
    0x3F, 0x7F, 0x40, 0x40, 0x40, 0x7F, 0x3F, 0x00, // 85
    0x0F, 0x1F, 0x30, 0x60, 0x30, 0x1F, 0x0F, 0x00, // 86
    0x3F, 0x7F, 0x30, 0x1C, 0x30, 0x7F, 0x3F, 0x00, // 87
    0x63, 0x77, 0x1C, 0x08, 0x1C, 0x77, 0x63, 0x00, // 88
    0x00, 0x07, 0x4F, 0x78, 0x78, 0x4F, 0x07, 0x00, // 89
    0x00, 0x63, 0x71, 0x59, 0x4D, 0x47, 0x63, 0x00, // 90
    0x00, 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, // 91
    0x00, 0x00, 0x03, 0x1F, 0x7C, 0x60, 0x00, 0x00, // 92
    0x00, 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, // 93
    0x00, 0x04, 0x06, 0x03, 0x06, 0x04, 0x00, 0x00, // 94
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, // 95
    0x00, 0x00, 0x00, 0x03, 0x05, 0x00, 0x00, 0x00, // 96
    0x30, 0x7A, 0x4A, 0x4A, 0x3E, 0x7C, 0x40, 0x00, // 97
    0x40, 0x7F, 0x7F, 0x44, 0x44, 0x7C, 0x38, 0x00, // 98
    0x38, 0x7C, 0x44, 0x44, 0x44, 0x6C, 0x28, 0x00, // 99
    0x38, 0x7C, 0x44, 0x44, 0x3F, 0x7F, 0x40, 0x00, // 100
    0x38, 0x7C, 0x54, 0x54, 0x54, 0x5C, 0x08, 0x00, // 101
    0x00, 0x04, 0xFE, 0xFF, 0x05, 0x00, 0x00, 0x00, // 102
    0x18, 0xBC, 0xA4, 0xA4, 0xA4, 0xF8, 0x7C, 0x00, // 103
    0x00, 0x7F, 0x7F, 0x04, 0x04, 0x7C, 0x78, 0x00, // 104
    0x00, 0x00, 0x44, 0x7D, 0x7D, 0x40, 0x00, 0x00, // 105
    0x00, 0x00, 0x84, 0xFD, 0x7D, 0x00, 0x00, 0x00, // 106
    0x00, 0x7F, 0x7F, 0x10, 0x38, 0x6C, 0x44, 0x00, // 107
    0x00, 0x00, 0x01, 0x7F, 0x7F, 0x00, 0x00, 0x00, // 108
    0x7C, 0x7C, 0x0C, 0x1C, 0x0C, 0x7C, 0x78, 0x00, // 109
    0x7C, 0x7C, 0x04, 0x04, 0x04, 0x7C, 0x78, 0x00, // 110
    0x38, 0x7C, 0x44, 0x44, 0x44, 0x7C, 0x38, 0x00, // 111
    0xFC, 0xFC, 0x24, 0x24, 0x24, 0x3C, 0x18, 0x00, // 112
    0x18, 0x3C, 0x24, 0x24, 0x24, 0xF8, 0xFC, 0x00, // 113
    0x44, 0x7C, 0x78, 0x44, 0x04, 0x0C, 0x08, 0x00, // 114
    0x48, 0x5C, 0x54, 0x54, 0x54, 0x74, 0x20, 0x00, // 115
    0x00, 0x00, 0x04, 0x3F, 0x7F, 0x44, 0x00, 0x00, // 116
    0x3C, 0x7C, 0x40, 0x40, 0x40, 0x3C, 0x7C, 0x00, // 117
    0x0C, 0x1C, 0x30, 0x60, 0x30, 0x1C, 0x0C, 0x00, // 118
    0x3C, 0x7C, 0x60, 0x38, 0x60, 0x7C, 0x3C, 0x00, // 119
    0x00, 0x44, 0x6C, 0x38, 0x38, 0x6C, 0x44, 0x00, // 120
    0x04, 0x8C, 0xD8, 0x70, 0x30, 0x1C, 0x0C, 0x00, // 121
    0x44, 0x64, 0x74, 0x54, 0x5C, 0x4C, 0x44, 0x00, // 122
    0x00, 0x00, 0x08, 0x3E, 0x77, 0x41, 0x00, 0x00, // 123
    0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, // 124
    0x00, 0x00, 0x41, 0x77, 0x3E, 0x08, 0x00, 0x00, // 125
    0x08, 0x0C, 0x04, 0x08, 0x10, 0x18, 0x08, 0x00, // 126
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
