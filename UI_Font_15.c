#include <arduino.h>
#include "UI_Font_15.h"


//
// Sans Serif font, height = 15 (including the decenders)
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
  const byte UI_Font_15[] = {
#else
  const PROGMEM byte UI_Font_15[] = {
#endif

  0x0F, 0x01, 0x11, 0x02, 0x00, 

  0xC5, 0x00, 0xD0, 0x00, 0xD7, 0x00, 0xE2, 0x00, 0xF5, 0x00, 0x06, 0x01, 
  0x21, 0x01, 0x36, 0x01, 0x3B, 0x01, 0x44, 0x01, 0x4D, 0x01, 0x58, 0x01, 
  0x69, 0x01, 0x70, 0x01, 0x79, 0x01, 0x80, 0x01, 0x89, 0x01, 0x9A, 0x01, 
  0xAB, 0x01, 0xBC, 0x01, 0xCD, 0x01, 0xDE, 0x01, 0xEF, 0x01, 0x00, 0x02, 
  0x11, 0x02, 0x22, 0x02, 0x33, 0x02, 0x38, 0x02, 0x3D, 0x02, 0x4E, 0x02, 
  0x5F, 0x02, 0x70, 0x02, 0x81, 0x02, 0xA2, 0x02, 0xB7, 0x02, 0xCC, 0x02, 
  0xE3, 0x02, 0xFA, 0x02, 0x0F, 0x03, 0x22, 0x03, 0x39, 0x03, 0x4E, 0x03, 
  0x53, 0x03, 0x62, 0x03, 0x77, 0x03, 0x88, 0x03, 0xA1, 0x03, 0xB6, 0x03, 
  0xCD, 0x03, 0xE2, 0x03, 0xF9, 0x03, 0x0E, 0x04, 0x23, 0x04, 0x36, 0x04, 
  0x4B, 0x04, 0x60, 0x04, 0x7F, 0x04, 0x96, 0x04, 0xA9, 0x04, 0xBC, 0x04, 
  0xC5, 0x04, 0xCE, 0x04, 0xD5, 0x04, 0xE4, 0x04, 0xF7, 0x04, 0xFE, 0x04, 
  0x0F, 0x05, 0x20, 0x05, 0x2F, 0x05, 0x40, 0x05, 0x51, 0x05, 0x5A, 0x05, 
  0x6B, 0x05, 0x7A, 0x05, 0x7F, 0x05, 0x84, 0x05, 0x95, 0x05, 0x9A, 0x05, 
  0xB3, 0x05, 0xC2, 0x05, 0xD3, 0x05, 0xE4, 0x05, 0xF5, 0x05, 0x00, 0x06, 
  0x0F, 0x06, 0x18, 0x06, 0x27, 0x06, 0x36, 0x06, 0x4D, 0x06, 0x5C, 0x06, 
  0x6B, 0x06, 0x7A, 0x06, 0x85, 0x06, 0x8A, 0x06, 0x95, 0x06, 0xA6, 0x06,

  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0xFF, 0x0B, 0x05, 0x00, 0x00, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x09, 0x10, 0x01, 0x10, 0x0F, 0xF8, 0x01, 
  0x17, 0x01, 0x10, 0x01, 0x10, 0x0F, 0xF8, 0x01, 0x17, 0x01, 0x10, 0x01, 
  0x08, 0x00, 0x00, 0x1C, 0x02, 0x22, 0x04, 0x21, 0x08, 0xFF, 0x1F, 0x41, 
  0x08, 0x41, 0x04, 0x86, 0x03, 0x0D, 0x00, 0x00, 0x1E, 0x00, 0x21, 0x00, 
  0x21, 0x00, 0x21, 0x0C, 0x1E, 0x03, 0xC0, 0x00, 0x38, 0x00, 0x86, 0x07, 
  0x41, 0x08, 0x40, 0x08, 0x40, 0x08, 0x80, 0x07, 0x0A, 0x00, 0x00, 0x80, 
  0x03, 0x4E, 0x04, 0x31, 0x08, 0x61, 0x08, 0x91, 0x08, 0x0E, 0x05, 0x00, 
  0x02, 0x00, 0x05, 0x80, 0x08, 0x02, 0x00, 0x00, 0x0F, 0x00, 0x04, 0x00, 
  0x00, 0xF0, 0x07, 0x0E, 0x38, 0x01, 0x40, 0x04, 0x00, 0x00, 0x01, 0x40, 
  0x0E, 0x38, 0xF0, 0x07, 0x05, 0x02, 0x00, 0x1A, 0x00, 0x07, 0x00, 0x1A, 
  0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 
  0xF8, 0x03, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x04, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x00, 0x0C, 0xC0, 0x03, 
  0x3C, 0x00, 0x03, 0x00, 0x08, 0x00, 0x00, 0xFC, 0x03, 0x02, 0x04, 0x01, 
  0x08, 0x01, 0x08, 0x01, 0x08, 0x02, 0x04, 0xFC, 0x03, 0x08, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x02, 0x00, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0x04, 0x08, 0x02, 0x0C, 0x01, 0x0A, 0x01, 
  0x09, 0x81, 0x08, 0x63, 0x08, 0x1C, 0x08, 0x08, 0x00, 0x00, 0x04, 0x06, 
  0x02, 0x04, 0x21, 0x08, 0x21, 0x08, 0x31, 0x08, 0x5E, 0x04, 0x80, 0x03, 
  0x08, 0x80, 0x01, 0x40, 0x01, 0x20, 0x01, 0x18, 0x01, 0x04, 0x01, 0x02, 
  0x01, 0xFF, 0x0F, 0x00, 0x01, 0x08, 0x00, 0x00, 0x38, 0x02, 0x17, 0x04, 
  0x11, 0x08, 0x11, 0x08, 0x11, 0x08, 0x21, 0x04, 0xC1, 0x03, 0x08, 0x00, 
  0x00, 0xFC, 0x03, 0x22, 0x04, 0x11, 0x08, 0x11, 0x08, 0x11, 0x08, 0x22, 
  0x04, 0xC4, 0x03, 0x08, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x0E, 
  0xE1, 0x01, 0x19, 0x00, 0x07, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00, 0x8C, 
  0x03, 0x52, 0x04, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x52, 0x04, 0x8C, 
  0x03, 0x08, 0x00, 0x00, 0x3C, 0x02, 0x42, 0x04, 0x81, 0x08, 0x81, 0x08, 
  0x81, 0x08, 0x42, 0x04, 0xFC, 0x03, 0x02, 0x00, 0x00, 0x08, 0x08, 0x02, 
  0x00, 0x00, 0x08, 0x38, 0x08, 0x00, 0x00, 0x40, 0x00, 0xA0, 0x00, 0xA0, 
  0x00, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x08, 0x02, 0x08, 0x00, 0x00, 
  0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 
  0x10, 0x01, 0x08, 0x00, 0x00, 0x08, 0x02, 0x10, 0x01, 0x10, 0x01, 0x10, 
  0x01, 0xA0, 0x00, 0xA0, 0x00, 0x40, 0x00, 0x08, 0x00, 0x00, 0x0C, 0x00, 
  0x02, 0x00, 0x01, 0x00, 0x81, 0x0B, 0x41, 0x00, 0x22, 0x00, 0x1C, 0x00, 
  0x10, 0x00, 0x00, 0xE0, 0x07, 0x18, 0x08, 0x04, 0x10, 0xC2, 0x23, 0x22, 
  0x24, 0x11, 0x48, 0x09, 0x48, 0x09, 0x48, 0x09, 0x44, 0x91, 0x4F, 0x79, 
  0x48, 0x02, 0x48, 0x02, 0x24, 0x0C, 0x22, 0xF0, 0x11, 0x0A, 0x00, 0x00, 
  0x00, 0x0C, 0x80, 0x03, 0xF0, 0x00, 0x8E, 0x00, 0x81, 0x00, 0x8E, 0x00, 
  0xF0, 0x00, 0x80, 0x03, 0x00, 0x0C, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0x21, 
  0x08, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x53, 
  0x04, 0x8C, 0x03, 0x0B, 0x00, 0x00, 0xF8, 0x01, 0x04, 0x02, 0x02, 0x04, 
  0x01, 0x08, 0x01, 0x08, 0x01, 0x08, 0x01, 0x08, 0x01, 0x08, 0x02, 0x04, 
  0x04, 0x02, 0x0B, 0x00, 0x00, 0xFF, 0x0F, 0x01, 0x08, 0x01, 0x08, 0x01, 
  0x08, 0x01, 0x08, 0x01, 0x08, 0x01, 0x08, 0x02, 0x04, 0x04, 0x02, 0xF8, 
  0x01, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 
  0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x21, 0x08, 0x01, 0x08, 0x09, 0x00, 
  0x00, 0xFF, 0x0F, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 
  0x00, 0x41, 0x00, 0x01, 0x00, 0x0B, 0x00, 0x00, 0xF8, 0x01, 0x04, 0x02, 
  0x02, 0x04, 0x01, 0x08, 0x01, 0x08, 0x41, 0x08, 0x41, 0x08, 0x42, 0x04, 
  0x44, 0x02, 0xC0, 0x01, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0x20, 0x00, 0x20, 
  0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0xFF, 
  0x0F, 0x02, 0x00, 0x00, 0xFF, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 
  0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0xFF, 0x07, 0x0A, 0x00, 0x00, 
  0xFF, 0x0F, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x70, 0x00, 0x88, 0x00, 
  0x04, 0x03, 0x02, 0x04, 0x01, 0x08, 0x08, 0x00, 0x00, 0xFF, 0x0F, 0x00, 
  0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x0C, 
  0x00, 0x00, 0xFF, 0x0F, 0x06, 0x00, 0x18, 0x00, 0x60, 0x00, 0x80, 0x03, 
  0x00, 0x0C, 0x80, 0x03, 0x60, 0x00, 0x18, 0x00, 0x06, 0x00, 0xFF, 0x0F, 
  0x0A, 0x00, 0x00, 0xFF, 0x0F, 0x02, 0x00, 0x0C, 0x00, 0x10, 0x00, 0x60, 
  0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x04, 0xFF, 0x0F, 0x0B, 0x00, 0x00, 
  0xF8, 0x01, 0x04, 0x02, 0x02, 0x04, 0x01, 0x08, 0x01, 0x08, 0x01, 0x08, 
  0x01, 0x08, 0x02, 0x04, 0x04, 0x02, 0xF8, 0x01, 0x0A, 0x00, 0x00, 0xFF, 
  0x0F, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 0x00, 0x41, 
  0x00, 0x22, 0x00, 0x1C, 0x00, 0x0B, 0x00, 0x00, 0xF8, 0x01, 0x04, 0x02, 
  0x02, 0x04, 0x01, 0x08, 0x01, 0x08, 0x01, 0x0A, 0x01, 0x0A, 0x02, 0x04, 
  0x04, 0x0E, 0xF8, 0x0B, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0x41, 0x00, 0x41, 
  0x00, 0x41, 0x00, 0x41, 0x00, 0xC1, 0x00, 0x41, 0x03, 0x22, 0x04, 0x1C, 
  0x08, 0x0A, 0x00, 0x00, 0x0C, 0x02, 0x12, 0x04, 0x21, 0x08, 0x21, 0x08, 
  0x21, 0x08, 0x41, 0x08, 0x41, 0x08, 0x42, 0x04, 0x84, 0x03, 0x09, 0x01, 
  0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0x0F, 0x01, 0x00, 0x01, 
  0x00, 0x01, 0x00, 0x01, 0x00, 0x0A, 0x00, 0x00, 0xFF, 0x03, 0x00, 0x04, 
  0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 
  0xFF, 0x03, 0x0A, 0x00, 0x00, 0x03, 0x00, 0x1C, 0x00, 0xE0, 0x00, 0x00, 
  0x03, 0x00, 0x0C, 0x00, 0x03, 0xE0, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x0F, 
  0x03, 0x00, 0x3C, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x80, 0x03, 0x70, 0x00, 
  0x0E, 0x00, 0x01, 0x00, 0x0E, 0x00, 0x70, 0x00, 0x80, 0x03, 0x00, 0x0C, 
  0xC0, 0x03, 0x3C, 0x00, 0x03, 0x00, 0x0B, 0x00, 0x08, 0x01, 0x04, 0x02, 
  0x02, 0x8C, 0x01, 0x50, 0x00, 0x20, 0x00, 0x50, 0x00, 0x8C, 0x01, 0x02, 
  0x02, 0x01, 0x04, 0x00, 0x08, 0x09, 0x01, 0x00, 0x06, 0x00, 0x08, 0x00, 
  0x30, 0x00, 0xC0, 0x0F, 0x30, 0x00, 0x08, 0x00, 0x06, 0x00, 0x01, 0x00, 
  0x09, 0x00, 0x08, 0x01, 0x0C, 0x01, 0x0B, 0x81, 0x08, 0x61, 0x08, 0x11, 
  0x08, 0x0D, 0x08, 0x03, 0x08, 0x01, 0x08, 0x04, 0x00, 0x00, 0xFF, 0x7F, 
  0x01, 0x40, 0x01, 0x40, 0x04, 0x03, 0x00, 0x3C, 0x00, 0xC0, 0x03, 0x00, 
  0x0C, 0x03, 0x01, 0x40, 0x01, 0x40, 0xFF, 0x7F, 0x07, 0x20, 0x00, 0x18, 
  0x00, 0x06, 0x00, 0x01, 0x00, 0x06, 0x00, 0x18, 0x00, 0x20, 0x00, 0x09, 
  0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 
  0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x03, 0x00, 0x00, 0x01, 0x00, 0x02, 
  0x00, 0x08, 0x00, 0x00, 0x20, 0x07, 0x90, 0x08, 0x88, 0x08, 0x88, 0x08, 
  0x48, 0x08, 0x48, 0x04, 0xF0, 0x0F, 0x08, 0x00, 0x00, 0xFF, 0x0F, 0x10, 
  0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0xE0, 0x03, 0x07, 
  0x00, 0x00, 0xE0, 0x03, 0x10, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
  0x10, 0x04, 0x08, 0x00, 0x00, 0xE0, 0x03, 0x10, 0x04, 0x08, 0x08, 0x08, 
  0x08, 0x08, 0x08, 0x10, 0x04, 0xFF, 0x0F, 0x08, 0x00, 0x00, 0xE0, 0x03, 
  0x90, 0x04, 0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x90, 0x04, 0xE0, 0x02, 
  0x04, 0x08, 0x00, 0xFE, 0x0F, 0x09, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 
  0xE0, 0x23, 0x10, 0x44, 0x08, 0x48, 0x08, 0x48, 0x08, 0x48, 0x10, 0x24, 
  0xF8, 0x1F, 0x07, 0x00, 0x00, 0xFF, 0x0F, 0x10, 0x00, 0x08, 0x00, 0x08, 
  0x00, 0x08, 0x00, 0xF0, 0x0F, 0x02, 0x00, 0x00, 0xF9, 0x0F, 0x02, 0x00, 
  0x40, 0xF9, 0x3F, 0x08, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x01, 0x80, 0x00, 
  0xC0, 0x00, 0x20, 0x03, 0x10, 0x04, 0x08, 0x08, 0x02, 0x00, 0x00, 0xFF, 
  0x0F, 0x0C, 0x00, 0x00, 0xF8, 0x0F, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 
  0x08, 0x00, 0xF0, 0x0F, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 
  0xF0, 0x0F, 0x07, 0x00, 0x00, 0xF8, 0x0F, 0x10, 0x00, 0x08, 0x00, 0x08, 
  0x00, 0x08, 0x00, 0xF0, 0x0F, 0x08, 0x00, 0x00, 0xE0, 0x03, 0x10, 0x04, 
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0xE0, 0x03, 0x08, 0x00, 
  0x00, 0xF8, 0x7F, 0x10, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 
  0x04, 0xE0, 0x03, 0x08, 0x00, 0x00, 0xE0, 0x03, 0x10, 0x04, 0x08, 0x08, 
  0x08, 0x08, 0x08, 0x08, 0x10, 0x04, 0xF8, 0x7F, 0x05, 0x00, 0x00, 0xF8, 
  0x0F, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0x07, 0x00, 0x00, 0x70, 0x04, 
  0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x88, 0x08, 0x10, 0x07, 0x04, 0x08, 
  0x00, 0xFE, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x00, 0xF8, 0x07, 
  0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x04, 0xF8, 0x0F, 0x07, 0x18, 
  0x00, 0x60, 0x00, 0x80, 0x03, 0x00, 0x0C, 0x80, 0x03, 0x60, 0x00, 0x18, 
  0x00, 0x0B, 0x18, 0x00, 0xE0, 0x03, 0x00, 0x0C, 0x80, 0x03, 0x60, 0x00, 
  0x18, 0x00, 0x60, 0x00, 0x80, 0x03, 0x00, 0x0C, 0xE0, 0x03, 0x18, 0x00, 
  0x07, 0x08, 0x08, 0x10, 0x04, 0x60, 0x03, 0x80, 0x00, 0x60, 0x03, 0x10, 
  0x04, 0x08, 0x08, 0x07, 0x38, 0x00, 0xC0, 0x40, 0x00, 0x47, 0x00, 0x38, 
  0x00, 0x07, 0xE0, 0x00, 0x18, 0x00, 0x07, 0x08, 0x08, 0x08, 0x0C, 0x08, 
  0x0B, 0x88, 0x08, 0x68, 0x08, 0x18, 0x08, 0x08, 0x08, 0x05, 0x80, 0x00, 
  0x80, 0x00, 0x7E, 0x3F, 0x01, 0x40, 0x01, 0x40, 0x02, 0x00, 0x00, 0xFF, 
  0x7F, 0x05, 0x01, 0x40, 0x01, 0x40, 0x7E, 0x3F, 0x80, 0x00, 0x80, 0x00, 
  0x08, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x40, 0x00, 0x40, 
  0x00, 0x40, 0x00, 0x20, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x0F, 
  0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 
  0xFC, 0x0F
};

