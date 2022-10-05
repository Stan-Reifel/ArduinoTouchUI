#include <arduino.h>
#include "UI_Font_11_Bold.h"


//
// Sans Serif Bold font, height = 11 (including the decenders)
//     The font table contains 3 sections: Header, Table Of Character Indexes, Pixel data
//
//     The Header contains two bytes:
//         Byte0 = Font height (including decenders)
//         Byte1 = Number of additional pixels that should be drawn right of char
//         Byte2 = Recommended line spacing
//         Byte3 = Height of decenders
//         Byte4 = Unused byte
//
//     The Table Of Character Indexes, is a table of 2 byte words that index to the pixel data within this table
//         Word0 = Index into this table to the pixels for ASCII char 0x20
//         Word1 = Index into this table to the pixels for ASCII char 0x21
//         Word2 = Index into this table to the pixels for ASCII char 0x22
//         ...
//         Word95 = Index into this table to the pixels for ASCII char 0x7F
//
//     The Pixel data table contains the bitmap for each character
//     Data is written in columns of pixels, each column is 16 bits (2 bytes)
//         Byte0 = width of the ASCII 0x20 character in pixels
//         Byte1 = pixel data for the 0x20 char's 1st top column, bit 0 is the top pixel, bit 7 is the 8th pixel down from the top
//         Byte2 = pixel data for the 0x20 char's 1st bottom column, bit 0 is the 9th pixel
//         Byte5 = pixel data for the 0x20 char's 2nd top column
//         Byte6 = pixel data for the 0x20 char's 2nd bottom column
//         ...   = remaining pairs of bytes of the columns in the 0x20 char
//         ...   = width of the 0x21 char in pixels
//         ...   = pixel data for the 0x21 char
//         ...
//
#if defined(ARDUINO_ARCH_RP2040)
  const byte UI_Font_11_Bold[] = {
#else
  const PROGMEM byte UI_Font_11_Bold[] = {
#endif

	0x0B, 0x00, 0x0E, 0x02, 0x00, 

	0xC5, 0x00, 0xCE, 0x00, 0xD5, 0x00, 0xE2, 0x00, 0xF3, 0x00, 0x02, 0x01, 
	0x15, 0x01, 0x24, 0x01, 0x2B, 0x01, 0x34, 0x01, 0x3D, 0x01, 0x48, 0x01, 
	0x57, 0x01, 0x60, 0x01, 0x69, 0x01, 0x70, 0x01, 0x7D, 0x01, 0x8C, 0x01, 
	0x9B, 0x01, 0xAA, 0x01, 0xB9, 0x01, 0xC8, 0x01, 0xD7, 0x01, 0xE6, 0x01, 
	0xF5, 0x01, 0x04, 0x02, 0x13, 0x02, 0x1A, 0x02, 0x23, 0x02, 0x30, 0x02, 
	0x3F, 0x02, 0x4C, 0x02, 0x5B, 0x02, 0x74, 0x02, 0x85, 0x02, 0x94, 0x02, 
	0xA5, 0x02, 0xB6, 0x02, 0xC5, 0x02, 0xD4, 0x02, 0xE5, 0x02, 0xF6, 0x02, 
	0xFD, 0x02, 0x08, 0x03, 0x19, 0x03, 0x28, 0x03, 0x3B, 0x03, 0x4C, 0x03, 
	0x5D, 0x03, 0x6E, 0x03, 0x7F, 0x03, 0x90, 0x03, 0x9F, 0x03, 0xAE, 0x03, 
	0xBF, 0x03, 0xD0, 0x03, 0xE9, 0x03, 0xFA, 0x03, 0x0B, 0x04, 0x1C, 0x04, 
	0x25, 0x04, 0x32, 0x04, 0x3B, 0x04, 0x4A, 0x04, 0x59, 0x04, 0x62, 0x04, 
	0x71, 0x04, 0x80, 0x04, 0x8F, 0x04, 0x9E, 0x04, 0xAD, 0x04, 0xB6, 0x04, 
	0xC5, 0x04, 0xD4, 0x04, 0xDB, 0x04, 0xE2, 0x04, 0xF1, 0x04, 0xF8, 0x04, 
	0x0B, 0x05, 0x1A, 0x05, 0x29, 0x05, 0x38, 0x05, 0x47, 0x05, 0x50, 0x05, 
	0x5D, 0x05, 0x66, 0x05, 0x75, 0x05, 0x84, 0x05, 0x97, 0x05, 0xA4, 0x05, 
	0xB1, 0x05, 0xBE, 0x05, 0xC9, 0x05, 0xD0, 0x05, 0xDB, 0x05, 0xEC, 0x05,

	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 
	0x7F, 0x01, 0x7F, 0x01, 0x06, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 
	0x00, 0x07, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x44, 0x00, 0xFF, 0x01, 
	0xFF, 0x01, 0x44, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x44, 0x00, 0x07, 0x00, 
	0x00, 0x8C, 0x00, 0x9E, 0x01, 0xFF, 0x03, 0xFF, 0x03, 0xE6, 0x01, 0xC4, 
	0x00, 0x09, 0x00, 0x00, 0x82, 0x00, 0xC7, 0x00, 0x65, 0x00, 0xB7, 0x00, 
	0xDA, 0x01, 0x4C, 0x01, 0xC6, 0x01, 0x82, 0x00, 0x07, 0x00, 0x00, 0xE6, 
	0x00, 0xFF, 0x01, 0x3F, 0x01, 0xE6, 0x01, 0xE0, 0x01, 0x20, 0x01, 0x03, 
	0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0xFE, 0x03, 0xFF, 
	0x07, 0x01, 0x04, 0x04, 0x00, 0x00, 0x01, 0x04, 0xFF, 0x07, 0xFE, 0x03, 
	0x05, 0x00, 0x00, 0x0A, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0A, 0x00, 0x07, 
	0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x20, 0x00, 
	0x20, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x03, 0x00, 0x01, 0x04, 
	0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x01, 0x06, 0x00, 0x00, 0x80, 0x01, 0xE0, 0x01, 0x78, 0x00, 
	0x1F, 0x00, 0x07, 0x00, 0x07, 0x00, 0x00, 0xFE, 0x00, 0xFF, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0xFF, 0x01, 0xFE, 0x00, 0x07, 0x00, 0x00, 0x02, 0x00, 
	0x02, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 
	0x00, 0x82, 0x01, 0xC3, 0x01, 0x61, 0x01, 0x31, 0x01, 0x1F, 0x01, 0x0E, 
	0x01, 0x07, 0x00, 0x00, 0x82, 0x00, 0x83, 0x01, 0x11, 0x01, 0x11, 0x01, 
	0xFF, 0x01, 0xEE, 0x00, 0x07, 0x00, 0x00, 0x60, 0x00, 0x78, 0x00, 0x5E, 
	0x00, 0xFF, 0x01, 0xFF, 0x01, 0x40, 0x00, 0x07, 0x00, 0x00, 0x9F, 0x00, 
	0x9F, 0x01, 0x09, 0x01, 0x09, 0x01, 0xF9, 0x01, 0xF1, 0x00, 0x07, 0x00, 
	0x00, 0xFE, 0x00, 0xFF, 0x01, 0x11, 0x01, 0x11, 0x01, 0xF3, 0x01, 0xE2, 
	0x00, 0x07, 0x00, 0x00, 0x01, 0x00, 0xC1, 0x01, 0xF1, 0x01, 0x3D, 0x00, 
	0x0F, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0xEE, 0x00, 0xFF, 0x01, 0x11, 
	0x01, 0x11, 0x01, 0xFF, 0x01, 0xEE, 0x00, 0x07, 0x00, 0x00, 0x8E, 0x00, 
	0x9F, 0x01, 0x11, 0x01, 0x11, 0x01, 0xFF, 0x01, 0xFE, 0x00, 0x03, 0x00, 
	0x00, 0x08, 0x01, 0x08, 0x01, 0x04, 0x00, 0x00, 0x00, 0x02, 0x08, 0x03, 
	0x08, 0x01, 0x06, 0x00, 0x00, 0x20, 0x00, 0x70, 0x00, 0xD8, 0x00, 0x8C, 
	0x01, 0x04, 0x01, 0x07, 0x00, 0x00, 0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 
	0x50, 0x00, 0x50, 0x00, 0x50, 0x00, 0x06, 0x00, 0x00, 0x04, 0x01, 0x8C, 
	0x01, 0xD8, 0x00, 0x70, 0x00, 0x20, 0x00, 0x07, 0x00, 0x00, 0x02, 0x00, 
	0x03, 0x00, 0x61, 0x01, 0x71, 0x01, 0x1F, 0x00, 0x0E, 0x00, 0x0C, 0x00, 
	0x00, 0x78, 0x00, 0xFE, 0x01, 0x86, 0x01, 0x33, 0x03, 0x79, 0x02, 0x49, 
	0x02, 0x79, 0x02, 0x7B, 0x02, 0x46, 0x02, 0x7E, 0x00, 0x78, 0x00, 0x08, 
	0x80, 0x01, 0xF0, 0x01, 0x7C, 0x00, 0x4F, 0x00, 0x4F, 0x00, 0x7C, 0x00, 
	0xF0, 0x01, 0x80, 0x01, 0x07, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x11, 
	0x01, 0x11, 0x01, 0xFF, 0x01, 0xEE, 0x00, 0x08, 0x00, 0x00, 0xFE, 0x00, 
	0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x83, 0x01, 0x82, 0x00, 
	0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x83, 
	0x01, 0xFE, 0x00, 0x7C, 0x00, 0x07, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 
	0x11, 0x01, 0x11, 0x01, 0x11, 0x01, 0x01, 0x01, 0x07, 0x00, 0x00, 0xFF, 
	0x01, 0xFF, 0x01, 0x11, 0x00, 0x11, 0x00, 0x11, 0x00, 0x01, 0x00, 0x08, 
	0x00, 0x00, 0xFE, 0x00, 0xFF, 0x01, 0x01, 0x01, 0x11, 0x01, 0x91, 0x01, 
	0xF3, 0x01, 0xF2, 0x01, 0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x10, 
	0x00, 0x10, 0x00, 0x10, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x03, 0x00, 0x00, 
	0xFF, 0x01, 0xFF, 0x01, 0x05, 0xC0, 0x00, 0xC0, 0x01, 0x00, 0x01, 0xFF, 
	0x01, 0xFF, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x3C, 0x00, 
	0x66, 0x00, 0xC3, 0x00, 0x81, 0x01, 0x00, 0x01, 0x07, 0x00, 0x00, 0xFF, 
	0x01, 0xFF, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x09, 
	0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x3C, 0x00, 0xF0, 0x00, 0xF0, 0x00, 
	0x3C, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 
	0x01, 0x1E, 0x00, 0x38, 0x00, 0xE0, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x08, 
	0x00, 0x00, 0xFE, 0x00, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0xFF, 0x01, 0xFE, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x11, 
	0x00, 0x11, 0x00, 0x11, 0x00, 0x1F, 0x00, 0x0E, 0x00, 0x08, 0x00, 0x00, 
	0xFE, 0x00, 0xFF, 0x01, 0x01, 0x01, 0x41, 0x01, 0xC1, 0x01, 0xFF, 0x03, 
	0xFE, 0x02, 0x08, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x11, 0x00, 0x11, 
	0x00, 0x11, 0x00, 0xFF, 0x01, 0xEE, 0x01, 0x07, 0x00, 0x00, 0x8E, 0x00, 
	0x9F, 0x01, 0x11, 0x01, 0x11, 0x01, 0xF3, 0x01, 0xE2, 0x00, 0x07, 0x00, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x01, 0x00, 0x01, 
	0x00, 0x08, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0xFF, 0x01, 0xFF, 0x00, 0x08, 0x03, 0x00, 0x1F, 0x00, 0x7C, 
	0x00, 0xE0, 0x01, 0xE0, 0x01, 0x7C, 0x00, 0x1F, 0x00, 0x03, 0x00, 0x0C, 
	0x03, 0x00, 0x1F, 0x00, 0x7C, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0x7C, 0x00, 
	0x7C, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0x7C, 0x00, 0x1F, 0x00, 0x03, 0x00, 
	0x08, 0x83, 0x01, 0xC7, 0x01, 0x6C, 0x00, 0x38, 0x00, 0x38, 0x00, 0x6C, 
	0x00, 0xC7, 0x01, 0x83, 0x01, 0x08, 0x03, 0x00, 0x07, 0x00, 0x0C, 0x00, 
	0xF8, 0x01, 0xF8, 0x01, 0x0C, 0x00, 0x07, 0x00, 0x03, 0x00, 0x08, 0x81, 
	0x01, 0xC1, 0x01, 0x61, 0x01, 0x31, 0x01, 0x19, 0x01, 0x0D, 0x01, 0x07, 
	0x01, 0x03, 0x01, 0x04, 0x00, 0x00, 0xFF, 0x07, 0xFF, 0x07, 0x01, 0x04, 
	0x06, 0x00, 0x00, 0x07, 0x00, 0x1F, 0x00, 0x78, 0x00, 0xE0, 0x01, 0x80, 
	0x01, 0x04, 0x00, 0x00, 0x01, 0x04, 0xFF, 0x07, 0xFF, 0x07, 0x07, 0x00, 
	0x00, 0x02, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x02, 
	0x00, 0x07, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 
	0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x02, 
	0x00, 0x07, 0x00, 0x00, 0xC0, 0x00, 0xE8, 0x01, 0x28, 0x01, 0x28, 0x01, 
	0xF8, 0x01, 0xF0, 0x01, 0x07, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x08, 
	0x01, 0x08, 0x01, 0xF8, 0x01, 0xF0, 0x00, 0x07, 0x00, 0x00, 0xF0, 0x00, 
	0xF8, 0x01, 0x08, 0x01, 0x08, 0x01, 0x98, 0x01, 0x90, 0x00, 0x07, 0x00, 
	0x00, 0xF0, 0x00, 0xF8, 0x01, 0x08, 0x01, 0x08, 0x01, 0xFF, 0x01, 0xFF, 
	0x01, 0x07, 0x00, 0x00, 0xF0, 0x00, 0xF8, 0x01, 0x28, 0x01, 0x28, 0x01, 
	0xB8, 0x01, 0xB0, 0x00, 0x04, 0x00, 0x00, 0xFE, 0x01, 0xFF, 0x01, 0x09, 
	0x00, 0x07, 0x00, 0x00, 0xF0, 0x04, 0xF8, 0x05, 0x08, 0x05, 0x08, 0x05, 
	0xF8, 0x07, 0xF8, 0x03, 0x07, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x18, 
	0x00, 0x08, 0x00, 0xF8, 0x01, 0xF0, 0x01, 0x03, 0x00, 0x00, 0xF9, 0x01, 
	0xF9, 0x01, 0x03, 0x00, 0x00, 0xF9, 0x07, 0xF9, 0x07, 0x07, 0x00, 0x00, 
	0xFF, 0x01, 0xFF, 0x01, 0x70, 0x00, 0xD8, 0x00, 0x88, 0x01, 0x00, 0x01, 
	0x03, 0x00, 0x00, 0xFF, 0x01, 0xFF, 0x01, 0x09, 0x00, 0x00, 0xF8, 0x01, 
	0xF8, 0x01, 0x08, 0x00, 0xF8, 0x01, 0xF8, 0x01, 0x08, 0x00, 0xF8, 0x01, 
	0xF0, 0x01, 0x07, 0x00, 0x00, 0xF8, 0x01, 0xF8, 0x01, 0x18, 0x00, 0x08, 
	0x00, 0xF8, 0x01, 0xF0, 0x01, 0x07, 0x00, 0x00, 0xF0, 0x00, 0xF8, 0x01, 
	0x08, 0x01, 0x08, 0x01, 0xF8, 0x01, 0xF0, 0x00, 0x07, 0x00, 0x00, 0xF8, 
	0x07, 0xF8, 0x07, 0x08, 0x01, 0x08, 0x01, 0xF8, 0x01, 0xF0, 0x00, 0x07, 
	0x00, 0x00, 0xF0, 0x00, 0xF8, 0x01, 0x08, 0x01, 0x08, 0x01, 0xF8, 0x07, 
	0xF8, 0x07, 0x04, 0x00, 0x00, 0xF8, 0x01, 0xF8, 0x01, 0x08, 0x00, 0x06, 
	0x00, 0x00, 0x90, 0x00, 0xB8, 0x01, 0x68, 0x01, 0xD8, 0x01, 0x90, 0x00, 
	0x04, 0x00, 0x00, 0xFE, 0x00, 0xFE, 0x01, 0x08, 0x01, 0x07, 0x00, 0x00, 
	0xF8, 0x00, 0xF8, 0x01, 0x00, 0x01, 0x80, 0x01, 0xF8, 0x01, 0xF8, 0x01, 
	0x07, 0x00, 0x00, 0x18, 0x00, 0x78, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0x78, 
	0x00, 0x18, 0x00, 0x09, 0x00, 0x00, 0x78, 0x00, 0xF8, 0x01, 0xE0, 0x01, 
	0x78, 0x00, 0x78, 0x00, 0xE0, 0x01, 0xF8, 0x01, 0x78, 0x00, 0x06, 0x00, 
	0x00, 0x98, 0x01, 0xF8, 0x01, 0x60, 0x00, 0xF8, 0x01, 0x98, 0x01, 0x06, 
	0x00, 0x04, 0x78, 0x04, 0xF8, 0x07, 0x80, 0x03, 0xF8, 0x00, 0x78, 0x00, 
	0x06, 0x00, 0x00, 0x88, 0x01, 0xC8, 0x01, 0x68, 0x01, 0x38, 0x01, 0x18, 
	0x01, 0x05, 0x00, 0x00, 0x10, 0x00, 0xFF, 0x01, 0xEF, 0x03, 0x00, 0x02, 
	0x03, 0x00, 0x00, 0xFF, 0x03, 0xFF, 0x03, 0x05, 0x00, 0x00, 0x00, 0x02, 
	0xEF, 0x03, 0xFF, 0x01, 0x10, 0x00, 0x08, 0x00, 0x00, 0x04, 0x00, 0x06, 
	0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x06, 0x00, 0x02, 0x00, 0x04, 
	0x00, 0x00, 0xFE, 0x03, 0xFE, 0x03, 0xFE, 0x03
};

