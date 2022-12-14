#include <arduino.h>
#include "UI_Font_13.h"



//
// Sans Serif font, height = 13 (including the decenders)
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
  const byte UI_Font_13[] = {
#else
  const PROGMEM byte UI_Font_13[] = {
#endif

  0x0D, 0x01, 0x0F, 0x02, 0x00, 

  0xC5, 0x00, 0xCE, 0x00, 0xD3, 0x00, 0xDC, 0x00, 0xED, 0x00, 0xFA, 0x00, 
  0x11, 0x01, 0x24, 0x01, 0x29, 0x01, 0x32, 0x01, 0x39, 0x01, 0x44, 0x01, 
  0x55, 0x01, 0x5C, 0x01, 0x63, 0x01, 0x68, 0x01, 0x71, 0x01, 0x7E, 0x01, 
  0x8B, 0x01, 0x98, 0x01, 0xA5, 0x01, 0xB2, 0x01, 0xBF, 0x01, 0xCC, 0x01, 
  0xD9, 0x01, 0xE6, 0x01, 0xF3, 0x01, 0xF8, 0x01, 0xFD, 0x01, 0x0C, 0x02, 
  0x1B, 0x02, 0x2A, 0x02, 0x37, 0x02, 0x50, 0x02, 0x63, 0x02, 0x74, 0x02, 
  0x85, 0x02, 0x96, 0x02, 0xA7, 0x02, 0xB6, 0x02, 0xC9, 0x02, 0xDA, 0x02, 
  0xDF, 0x02, 0xEA, 0x02, 0xFD, 0x02, 0x0C, 0x03, 0x21, 0x03, 0x32, 0x03, 
  0x45, 0x03, 0x56, 0x03, 0x69, 0x03, 0x7A, 0x03, 0x8B, 0x03, 0x9A, 0x03, 
  0xAB, 0x03, 0xBE, 0x03, 0xD9, 0x03, 0xE8, 0x03, 0xF9, 0x03, 0x08, 0x04, 
  0x0F, 0x04, 0x18, 0x04, 0x1F, 0x04, 0x2A, 0x04, 0x39, 0x04, 0x40, 0x04, 
  0x4D, 0x04, 0x5A, 0x04, 0x67, 0x04, 0x74, 0x04, 0x81, 0x04, 0x8A, 0x04, 
  0x97, 0x04, 0xA4, 0x04, 0xA9, 0x04, 0xAE, 0x04, 0xBB, 0x04, 0xC0, 0x04, 
  0xD5, 0x04, 0xE2, 0x04, 0xEF, 0x04, 0xFC, 0x04, 0x09, 0x05, 0x12, 0x05, 
  0x1F, 0x05, 0x26, 0x05, 0x33, 0x05, 0x3E, 0x05, 0x51, 0x05, 0x5E, 0x05, 
  0x6B, 0x05, 0x78, 0x05, 0x7F, 0x05, 0x84, 0x05, 0x8D, 0x05, 0x9C, 0x05,

  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
  0xFF, 0x02, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x08, 
  0x48, 0x00, 0xC8, 0x03, 0x7C, 0x00, 0x4B, 0x00, 0xC8, 0x03, 0x78, 0x00, 
  0x4F, 0x00, 0x48, 0x00, 0x06, 0x00, 0x00, 0x9E, 0x01, 0x11, 0x02, 0xFF, 
  0x07, 0x21, 0x02, 0xE2, 0x01, 0x0B, 0x00, 0x00, 0x0E, 0x00, 0x11, 0x00, 
  0x11, 0x02, 0x8E, 0x01, 0x60, 0x00, 0x18, 0x00, 0xC6, 0x01, 0x21, 0x02, 
  0x20, 0x02, 0xC0, 0x01, 0x09, 0x00, 0x00, 0xC0, 0x01, 0x2E, 0x02, 0x31, 
  0x02, 0x51, 0x02, 0x8E, 0x01, 0x00, 0x01, 0xC0, 0x02, 0x00, 0x02, 0x02, 
  0x00, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0xF8, 0x03, 0x06, 0x0C, 0x01, 
  0x10, 0x03, 0x01, 0x10, 0x06, 0x0C, 0xF8, 0x03, 0x05, 0x02, 0x00, 0x0A, 
  0x00, 0x07, 0x00, 0x0A, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 
  0x20, 0x00, 0x20, 0x00, 0xFC, 0x01, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x03, 0x40, 0x00, 0x40, 0x00, 
  0x40, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x03, 0xE0, 0x00, 
  0x1C, 0x00, 0x03, 0x00, 0x06, 0xFE, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 
  0x02, 0x01, 0x02, 0xFE, 0x01, 0x06, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 
  0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x06, 0x02, 0x02, 0x01, 0x03, 0x81, 
  0x02, 0x41, 0x02, 0x21, 0x02, 0x1E, 0x02, 0x06, 0x02, 0x01, 0x01, 0x02, 
  0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 0x01, 0x06, 0x80, 0x00, 0xE0, 
  0x00, 0x98, 0x00, 0x86, 0x00, 0xFF, 0x03, 0x80, 0x00, 0x06, 0x38, 0x01, 
  0x17, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xE1, 0x01, 0x06, 0xFE, 
  0x01, 0x21, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xE2, 0x01, 0x06, 
  0x01, 0x00, 0x81, 0x03, 0x61, 0x00, 0x19, 0x00, 0x07, 0x00, 0x01, 0x00, 
  0x06, 0xEE, 0x01, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 
  0x01, 0x06, 0x1E, 0x01, 0x21, 0x02, 0x21, 0x02, 0x21, 0x02, 0x11, 0x01, 
  0xFE, 0x00, 0x02, 0x00, 0x00, 0x08, 0x02, 0x02, 0x00, 0x00, 0x08, 0x0E, 
  0x07, 0x00, 0x00, 0x20, 0x00, 0x50, 0x00, 0x50, 0x00, 0x88, 0x00, 0x88, 
  0x00, 0x04, 0x01, 0x07, 0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 
  0x48, 0x00, 0x48, 0x00, 0x48, 0x00, 0x07, 0x00, 0x00, 0x04, 0x01, 0x88, 
  0x00, 0x88, 0x00, 0x50, 0x00, 0x50, 0x00, 0x20, 0x00, 0x06, 0x00, 0x00, 
  0x06, 0x00, 0xC1, 0x02, 0x21, 0x00, 0x11, 0x00, 0x0E, 0x00, 0x0C, 0xF0, 
  0x03, 0x0C, 0x04, 0xE2, 0x09, 0x12, 0x12, 0x09, 0x12, 0x09, 0x12, 0x09, 
  0x11, 0xD1, 0x13, 0x39, 0x12, 0x02, 0x0A, 0x84, 0x09, 0x78, 0x04, 0x09, 
  0x00, 0x03, 0xC0, 0x00, 0x70, 0x00, 0x4E, 0x00, 0x41, 0x00, 0x4E, 0x00, 
  0x70, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x08, 0x00, 0x00, 0xFF, 0x03, 0x11, 
  0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0xEE, 0x01, 0x08, 
  0x00, 0x00, 0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 
  0x02, 0x01, 0x84, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x03, 0x01, 0x02, 0x01, 
  0x02, 0x01, 0x02, 0x01, 0x02, 0x02, 0x01, 0xFC, 0x00, 0x08, 0x00, 0x00, 
  0xFF, 0x03, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 
  0x11, 0x02, 0x07, 0x00, 0x00, 0xFF, 0x03, 0x11, 0x00, 0x11, 0x00, 0x11, 
  0x00, 0x11, 0x00, 0x01, 0x00, 0x09, 0x00, 0x00, 0xFC, 0x00, 0x02, 0x01, 
  0x01, 0x02, 0x01, 0x02, 0x21, 0x02, 0x21, 0x02, 0x22, 0x01, 0xE4, 0x00, 
  0x08, 0x00, 0x00, 0xFF, 0x03, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 
  0x00, 0x10, 0x00, 0xFF, 0x03, 0x02, 0x00, 0x00, 0xFF, 0x03, 0x05, 0x80, 
  0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0xFF, 0x01, 0x09, 0x00, 0x00, 
  0xFF, 0x03, 0x40, 0x00, 0x20, 0x00, 0x30, 0x00, 0x48, 0x00, 0x84, 0x00, 
  0x02, 0x01, 0x01, 0x02, 0x07, 0x00, 0x00, 0xFF, 0x03, 0x00, 0x02, 0x00, 
  0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x0A, 0x00, 0x00, 0xFF, 0x03, 
  0x06, 0x00, 0x18, 0x00, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x18, 0x00, 
  0x06, 0x00, 0xFF, 0x03, 0x08, 0x00, 0x00, 0xFF, 0x03, 0x02, 0x00, 0x0C, 
  0x00, 0x30, 0x00, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x03, 0x09, 0x00, 0x00, 
  0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 
  0x02, 0x01, 0xFC, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x03, 0x21, 0x00, 0x21, 
  0x00, 0x21, 0x00, 0x21, 0x00, 0x21, 0x00, 0x1E, 0x00, 0x09, 0x00, 0x00, 
  0xFC, 0x00, 0x02, 0x01, 0x01, 0x02, 0x01, 0x02, 0x81, 0x02, 0x81, 0x02, 
  0x02, 0x01, 0xFC, 0x02, 0x08, 0x00, 0x00, 0xFF, 0x03, 0x21, 0x00, 0x21, 
  0x00, 0x21, 0x00, 0x61, 0x00, 0xA1, 0x01, 0x1E, 0x02, 0x08, 0x00, 0x00, 
  0x8E, 0x01, 0x11, 0x02, 0x11, 0x02, 0x11, 0x02, 0x21, 0x02, 0x21, 0x02, 
  0xC6, 0x01, 0x07, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0xFF, 0x03, 0x01, 
  0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01, 
  0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x01, 0xFF, 0x00, 0x09, 0x03, 
  0x00, 0x0C, 0x00, 0x30, 0x00, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x30, 
  0x00, 0x0C, 0x00, 0x03, 0x00, 0x0D, 0x03, 0x00, 0x1C, 0x00, 0xE0, 0x00, 
  0x00, 0x03, 0xE0, 0x00, 0x1E, 0x00, 0x01, 0x00, 0x1E, 0x00, 0xE0, 0x00, 
  0x00, 0x03, 0xE0, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x07, 0x01, 0x02, 0x86, 
  0x01, 0x48, 0x00, 0x30, 0x00, 0x48, 0x00, 0x86, 0x01, 0x01, 0x02, 0x08, 
  0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x18, 0x00, 0xE0, 0x03, 0x18, 0x00, 
  0x06, 0x00, 0x01, 0x00, 0x07, 0x00, 0x02, 0x01, 0x03, 0xC1, 0x02, 0x31, 
  0x02, 0x0D, 0x02, 0x03, 0x02, 0x01, 0x02, 0x03, 0x00, 0x00, 0xFF, 0x1F, 
  0x01, 0x10, 0x04, 0x03, 0x00, 0x1C, 0x00, 0xE0, 0x00, 0x00, 0x03, 0x03, 
  0x00, 0x00, 0x01, 0x10, 0xFF, 0x1F, 0x05, 0x20, 0x00, 0x1C, 0x00, 0x02, 
  0x00, 0x1C, 0x00, 0x20, 0x00, 0x07, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 
  0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x03, 0x00, 0x00, 0x01, 
  0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x90, 0x01, 0x48, 0x02, 0x48, 0x02, 
  0x48, 0x01, 0xF0, 0x03, 0x06, 0x00, 0x00, 0xFF, 0x03, 0x10, 0x02, 0x08, 
  0x02, 0x08, 0x02, 0xF0, 0x01, 0x06, 0x00, 0x00, 0xF0, 0x01, 0x08, 0x02, 
  0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0x06, 0x00, 0x00, 0xF0, 0x01, 0x08, 
  0x02, 0x08, 0x02, 0x10, 0x02, 0xFF, 0x03, 0x06, 0x00, 0x00, 0xF0, 0x01, 
  0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x70, 0x01, 0x04, 0x08, 0x00, 0xFE, 
  0x03, 0x09, 0x00, 0x01, 0x00, 0x06, 0x00, 0x00, 0xF0, 0x09, 0x08, 0x12, 
  0x08, 0x12, 0x10, 0x11, 0xF8, 0x0F, 0x06, 0x00, 0x00, 0xFF, 0x03, 0x10, 
  0x00, 0x08, 0x00, 0x08, 0x00, 0xF0, 0x03, 0x02, 0x00, 0x00, 0xF9, 0x03, 
  0x02, 0x00, 0x10, 0xF9, 0x0F, 0x06, 0x00, 0x00, 0xFF, 0x03, 0x40, 0x00, 
  0x60, 0x00, 0x90, 0x01, 0x08, 0x02, 0x02, 0x00, 0x00, 0xFF, 0x03, 0x0A, 
  0x00, 0x00, 0xF8, 0x03, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0xF0, 0x03, 
  0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0xF0, 0x03, 0x06, 0x00, 0x00, 0xF8, 
  0x03, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0xF0, 0x03, 0x06, 0x00, 0x00, 
  0xF0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x08, 0x02, 0xF0, 0x01, 0x06, 0x00, 
  0x00, 0xF8, 0x1F, 0x10, 0x01, 0x08, 0x02, 0x08, 0x02, 0xF0, 0x01, 0x06, 
  0x00, 0x00, 0xF0, 0x01, 0x08, 0x02, 0x08, 0x02, 0x10, 0x01, 0xF8, 0x1F, 
  0x04, 0x00, 0x00, 0xF8, 0x03, 0x10, 0x00, 0x08, 0x00, 0x06, 0x00, 0x00, 
  0x30, 0x01, 0x48, 0x02, 0x48, 0x02, 0x48, 0x02, 0x90, 0x01, 0x03, 0x08, 
  0x00, 0xFE, 0x03, 0x08, 0x02, 0x06, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x02, 
  0x00, 0x02, 0x00, 0x02, 0xF8, 0x03, 0x05, 0x18, 0x00, 0xE0, 0x00, 0x00, 
  0x03, 0xE0, 0x00, 0x18, 0x00, 0x09, 0x18, 0x00, 0xE0, 0x00, 0x00, 0x03, 
  0xE0, 0x00, 0x18, 0x00, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x18, 0x00, 
  0x06, 0x00, 0x00, 0x08, 0x02, 0xB0, 0x01, 0x40, 0x00, 0xB0, 0x01, 0x08, 
  0x02, 0x06, 0x00, 0x00, 0x18, 0x10, 0xE0, 0x10, 0x00, 0x0F, 0xE0, 0x00, 
  0x18, 0x00, 0x06, 0x00, 0x00, 0x08, 0x02, 0x88, 0x03, 0x48, 0x02, 0x38, 
  0x02, 0x08, 0x02, 0x03, 0x40, 0x00, 0xBE, 0x0F, 0x01, 0x10, 0x02, 0x00, 
  0x00, 0xFF, 0x0F, 0x04, 0x00, 0x00, 0x01, 0x10, 0xBE, 0x0F, 0x40, 0x00, 
  0x07, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x30, 0x00, 0x20, 0x00, 0x20, 
  0x00, 0x30, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x03, 0x04, 0x02, 
  0x04, 0x02, 0x04, 0x02, 0x04, 0x02, 0xFC, 0x03
};

