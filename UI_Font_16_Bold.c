#include <arduino.h>
#include "UI_Font_16_Bold.h"


//
// Sans Serif Bold font, height = 15 (including the decenders)
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
  const byte UI_Font_16_Bold[] = {
#else
  const PROGMEM byte UI_Font_16_Bold[] = {
#endif

  0x0F, 0x01, 0x11, 0x02, 0x00, 

  0xC5, 0x00, 0xD4, 0x00, 0xDD, 0x00, 0xEC, 0x00, 0x03, 0x01, 0x18, 0x01, 
  0x37, 0x01, 0x50, 0x01, 0x57, 0x01, 0x64, 0x01, 0x6F, 0x01, 0x7E, 0x01, 
  0x93, 0x01, 0x9C, 0x01, 0xA7, 0x01, 0xB0, 0x01, 0xB9, 0x01, 0xCC, 0x01, 
  0xDF, 0x01, 0xF2, 0x01, 0x05, 0x02, 0x18, 0x02, 0x2B, 0x02, 0x3E, 0x02, 
  0x51, 0x02, 0x64, 0x02, 0x77, 0x02, 0x80, 0x02, 0x89, 0x02, 0x9E, 0x02, 
  0xB1, 0x02, 0xC6, 0x02, 0xD9, 0x02, 0xF2, 0x02, 0x0B, 0x03, 0x20, 0x03, 
  0x35, 0x03, 0x4A, 0x03, 0x5F, 0x03, 0x72, 0x03, 0x89, 0x03, 0xA0, 0x03, 
  0xA9, 0x03, 0xBC, 0x03, 0xD7, 0x03, 0xEA, 0x03, 0x05, 0x04, 0x1C, 0x04, 
  0x33, 0x04, 0x48, 0x04, 0x5F, 0x04, 0x76, 0x04, 0x8B, 0x04, 0xA2, 0x04, 
  0xB9, 0x04, 0xD2, 0x04, 0xF3, 0x04, 0x0C, 0x05, 0x23, 0x05, 0x38, 0x05, 
  0x45, 0x05, 0x4E, 0x05, 0x59, 0x05, 0x6C, 0x05, 0x7D, 0x05, 0x86, 0x05, 
  0x9B, 0x05, 0xB0, 0x05, 0xC5, 0x05, 0xDA, 0x05, 0xEF, 0x05, 0xFC, 0x05, 
  0x11, 0x06, 0x26, 0x06, 0x2F, 0x06, 0x38, 0x06, 0x4F, 0x06, 0x58, 0x06, 
  0x75, 0x06, 0x8A, 0x06, 0x9F, 0x06, 0xB4, 0x06, 0xC9, 0x06, 0xD8, 0x06, 
  0xEB, 0x06, 0xF8, 0x06, 0x0D, 0x07, 0x20, 0x07, 0x3F, 0x07, 0x56, 0x07, 
  0x69, 0x07, 0x7A, 0x07, 0x87, 0x07, 0x8E, 0x07, 0x9B, 0x07, 0xB0, 0x07,

  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xFF, 0x0E, 0xFF, 0x0E, 0xFF, 0x0E, 
  0x07, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x0F, 
  0x00, 0x0F, 0x00, 0x0B, 0x18, 0x03, 0x18, 0x0F, 0xF8, 0x0F, 0xFF, 0x03, 
  0x1F, 0x03, 0x18, 0x03, 0x18, 0x0F, 0xF8, 0x0F, 0xFF, 0x03, 0x1F, 0x03, 
  0x18, 0x03, 0x0A, 0x00, 0x00, 0x1C, 0x02, 0x3E, 0x06, 0x7F, 0x0E, 0x73, 
  0x0C, 0xFF, 0x1F, 0xE3, 0x0C, 0xE7, 0x0F, 0xC6, 0x07, 0x86, 0x03, 0x0F, 
  0x00, 0x00, 0x1E, 0x00, 0x3F, 0x00, 0x21, 0x00, 0x21, 0x08, 0x3F, 0x06, 
  0x1E, 0x01, 0xC0, 0x00, 0x30, 0x00, 0x88, 0x07, 0xC6, 0x0F, 0x41, 0x08, 
  0x40, 0x08, 0xC0, 0x0F, 0x80, 0x07, 0x0C, 0x00, 0x00, 0x80, 0x03, 0xC0, 
  0x07, 0xCE, 0x0F, 0xFF, 0x0C, 0x7F, 0x0C, 0xF3, 0x0C, 0xDF, 0x0F, 0x9F, 
  0x07, 0xCE, 0x07, 0xC0, 0x0F, 0xC0, 0x0E, 0x03, 0x0F, 0x00, 0x0F, 0x00, 
  0x0F, 0x00, 0x06, 0x00, 0x00, 0xF0, 0x07, 0xFC, 0x1F, 0xFE, 0x3F, 0x0F, 
  0x78, 0x01, 0x40, 0x05, 0x01, 0x40, 0x0F, 0x78, 0xFE, 0x3F, 0xFC, 0x1F, 
  0xF0, 0x07, 0x07, 0x00, 0x00, 0x04, 0x00, 0x34, 0x00, 0x1F, 0x00, 0x1F, 
  0x00, 0x34, 0x00, 0x04, 0x00, 0x0A, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 
  0xE0, 0x00, 0xFC, 0x07, 0xFC, 0x07, 0xFC, 0x07, 0xE0, 0x00, 0xE0, 0x00, 
  0xE0, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6E, 0x00, 0x3E, 0x00, 0x1E, 0x05, 
  0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x01, 0x04, 0x00, 
  0x00, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x04, 0x00, 0x0C, 0xC0, 0x03, 
  0x3C, 0x00, 0x03, 0x00, 0x09, 0x00, 0x00, 0xFC, 0x03, 0xFE, 0x07, 0xFF, 
  0x0F, 0x03, 0x0C, 0x03, 0x0C, 0xFF, 0x0F, 0xFE, 0x07, 0xFC, 0x03, 0x09, 
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x38, 0x00, 0x1C, 0x00, 0xFF, 0x0F, 
  0xFF, 0x0F, 0xFF, 0x0F, 0x00, 0x00, 0x09, 0x00, 0x00, 0x0C, 0x0C, 0x0E, 
  0x0E, 0x0F, 0x0F, 0x83, 0x0F, 0xC3, 0x0D, 0xFF, 0x0C, 0x7E, 0x0C, 0x3C, 
  0x0C, 0x09, 0x00, 0x00, 0x04, 0x03, 0x0E, 0x07, 0x0F, 0x0F, 0x63, 0x0C, 
  0x63, 0x0C, 0xFF, 0x0F, 0xFE, 0x07, 0x9C, 0x03, 0x09, 0x00, 0x00, 0xC0, 
  0x01, 0xE0, 0x01, 0xF8, 0x01, 0x9C, 0x01, 0x8E, 0x01, 0xFF, 0x0F, 0xFF, 
  0x0F, 0xFF, 0x0F, 0x09, 0x00, 0x00, 0x78, 0x03, 0x7F, 0x07, 0x7F, 0x0F, 
  0x33, 0x0C, 0x33, 0x0C, 0xF3, 0x0F, 0xE3, 0x07, 0xC3, 0x03, 0x09, 0x00, 
  0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFF, 0x0F, 0x23, 0x0C, 0x33, 0x0C, 0xF7, 
  0x0F, 0xE7, 0x07, 0xC6, 0x03, 0x09, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 
  0x03, 0x0E, 0xC3, 0x0F, 0xF3, 0x0F, 0xFB, 0x00, 0x0F, 0x00, 0x03, 0x00, 
  0x09, 0x00, 0x00, 0x9C, 0x03, 0xFE, 0x07, 0xFF, 0x0F, 0x63, 0x0C, 0x63, 
  0x0C, 0xFF, 0x0F, 0xFE, 0x07, 0x9C, 0x03, 0x09, 0x00, 0x00, 0x3C, 0x06, 
  0x7E, 0x0E, 0xFF, 0x0E, 0xC3, 0x0C, 0x43, 0x0C, 0xFF, 0x0F, 0xFE, 0x07, 
  0xF8, 0x01, 0x04, 0x00, 0x00, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x0E, 0x04, 
  0x00, 0x00, 0x38, 0x6E, 0x38, 0x3E, 0x38, 0x1E, 0x0A, 0x00, 0x00, 0xF0, 
  0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF8, 0x03, 0xB8, 0x03, 0xB8, 0x03, 0xB8, 
  0x03, 0x1C, 0x07, 0x1C, 0x07, 0x09, 0x00, 0x00, 0xB8, 0x03, 0xB8, 0x03, 
  0xB8, 0x03, 0xB8, 0x03, 0xB8, 0x03, 0xB8, 0x03, 0xB8, 0x03, 0xB8, 0x03, 
  0x0A, 0x00, 0x00, 0x1C, 0x07, 0x1C, 0x07, 0xB8, 0x03, 0xB8, 0x03, 0xB8, 
  0x03, 0xF8, 0x03, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x09, 0x00, 0x00, 
  0x0C, 0x00, 0x0E, 0x00, 0xCF, 0x0E, 0xE3, 0x0E, 0xF3, 0x0E, 0x7F, 0x00, 
  0x3E, 0x00, 0x1C, 0x00, 0x0C, 0xF0, 0x03, 0x0C, 0x0C, 0xE2, 0x13, 0xFA, 
  0x17, 0x1D, 0x24, 0x05, 0x24, 0x05, 0x26, 0xF9, 0x27, 0xFD, 0x27, 0x3E, 
  0x14, 0x04, 0x1B, 0xF8, 0x08, 0x0C, 0x00, 0x0E, 0xC0, 0x0F, 0xF0, 0x07, 
  0xFC, 0x03, 0x7F, 0x03, 0x0F, 0x03, 0x7F, 0x03, 0xFC, 0x03, 0xF0, 0x07, 
  0xC0, 0x0F, 0x00, 0x0E, 0x00, 0x08, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 
  0x0F, 0xFF, 0x0F, 0x63, 0x0C, 0x63, 0x0C, 0x7F, 0x0C, 0xDE, 0x0F, 0xCC, 
  0x0F, 0x80, 0x03, 0x0A, 0x00, 0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFF, 0x0F, 
  0x07, 0x0E, 0x03, 0x0C, 0x07, 0x0E, 0x8F, 0x0F, 0x0E, 0x07, 0x04, 0x03, 
  0x0A, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x03, 0x0C, 0x03, 
  0x0C, 0x07, 0x0E, 0xFF, 0x0F, 0xFE, 0x07, 0xF8, 0x01, 0x0A, 0x00, 0x00, 
  0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x63, 0x0C, 0x63, 0x0C, 0x63, 0x0C, 
  0x63, 0x0C, 0x63, 0x0C, 0x03, 0x0C, 0x09, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 
  0x0F, 0xFF, 0x0F, 0x63, 0x00, 0x63, 0x00, 0x63, 0x00, 0x63, 0x00, 0x03, 
  0x00, 0x0B, 0x00, 0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFE, 0x07, 0x07, 0x0E, 
  0x03, 0x0C, 0x63, 0x0C, 0x67, 0x0E, 0xEF, 0x0F, 0xEE, 0x07, 0xE4, 0x07, 
  0x0B, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x60, 0x00, 0x60, 
  0x00, 0x60, 0x00, 0x60, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x04, 
  0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x09, 0x00, 0x03, 0x80, 
  0x07, 0x80, 0x0F, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x0C, 0xFF, 0x0F, 0xFF, 
  0x07, 0xFF, 0x03, 0x0D, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 
  0x60, 0x00, 0x70, 0x00, 0x78, 0x00, 0xFC, 0x00, 0xEE, 0x03, 0x87, 0x0F, 
  0x03, 0x0F, 0x01, 0x0C, 0x00, 0x08, 0x09, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 
  0x0F, 0xFF, 0x0F, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 
  0x0C, 0x0D, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x1F, 0x00, 
  0xFC, 0x01, 0xC0, 0x0F, 0xC0, 0x0F, 0xFC, 0x01, 0x1F, 0x00, 0xFF, 0x0F, 
  0xFF, 0x0F, 0xFF, 0x0F, 0x0B, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 
  0x0F, 0x3E, 0x00, 0xF8, 0x00, 0xF0, 0x01, 0xC0, 0x07, 0xFF, 0x0F, 0xFF, 
  0x0F, 0xFF, 0x0F, 0x0B, 0x00, 0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFE, 0x07, 
  0x07, 0x0E, 0x03, 0x0C, 0x03, 0x0C, 0x07, 0x0E, 0xFE, 0x07, 0xFE, 0x07, 
  0xF8, 0x01, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x63, 
  0x00, 0x63, 0x00, 0x63, 0x00, 0x7F, 0x00, 0x3F, 0x00, 0x1E, 0x00, 0x0B, 
  0x00, 0x00, 0xF8, 0x01, 0xFE, 0x07, 0xFE, 0x07, 0x07, 0x0E, 0x03, 0x0C, 
  0x03, 0x0F, 0x07, 0x0E, 0xFE, 0x0F, 0xFE, 0x0F, 0xF8, 0x19, 0x0B, 0x00, 
  0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x63, 0x00, 0x63, 0x00, 0xE3, 
  0x01, 0xFF, 0x07, 0xBF, 0x0F, 0x1E, 0x0E, 0x00, 0x08, 0x0A, 0x00, 0x00, 
  0x1C, 0x03, 0x3E, 0x07, 0x7F, 0x0F, 0x73, 0x0E, 0x73, 0x0C, 0xF7, 0x0C, 
  0xEF, 0x0F, 0xEE, 0x07, 0xCC, 0x03, 0x0B, 0x03, 0x00, 0x03, 0x00, 0x03, 
  0x00, 0x03, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x03, 0x00, 0x03, 
  0x00, 0x03, 0x00, 0x03, 0x00, 0x0B, 0x00, 0x00, 0xFF, 0x03, 0xFF, 0x07, 
  0xFF, 0x0F, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0E, 0xFF, 0x0F, 
  0xFF, 0x07, 0xFF, 0x03, 0x0C, 0x0F, 0x00, 0x7F, 0x00, 0xFE, 0x01, 0xF8, 
  0x0F, 0xC0, 0x0F, 0x00, 0x0E, 0xC0, 0x0F, 0xF8, 0x0F, 0xFE, 0x01, 0x7F, 
  0x00, 0x0F, 0x00, 0x01, 0x00, 0x10, 0x7F, 0x00, 0xFF, 0x07, 0xFC, 0x0F, 
  0x80, 0x0F, 0xC0, 0x0F, 0xFC, 0x03, 0xFF, 0x00, 0x1F, 0x00, 0xFF, 0x00, 
  0xFC, 0x03, 0xC0, 0x0F, 0x80, 0x0F, 0xFC, 0x0F, 0xFF, 0x07, 0x7F, 0x00, 
  0x03, 0x00, 0x0C, 0x03, 0x0C, 0x0F, 0x0F, 0x9E, 0x07, 0xFC, 0x03, 0xF8, 
  0x01, 0xF0, 0x00, 0xF8, 0x01, 0xFC, 0x03, 0x9E, 0x07, 0x0F, 0x0F, 0x03, 
  0x0C, 0x01, 0x08, 0x0B, 0x01, 0x00, 0x07, 0x00, 0x0F, 0x00, 0x3F, 0x00, 
  0xFC, 0x0F, 0xF0, 0x0F, 0xFC, 0x0F, 0x3F, 0x00, 0x0F, 0x00, 0x07, 0x00, 
  0x01, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0E, 0x03, 0x0F, 0x83, 0x0F, 0xE3, 
  0x0D, 0xF3, 0x0C, 0x7B, 0x0C, 0x1F, 0x0C, 0x0F, 0x0C, 0x07, 0x0C, 0x06, 
  0x00, 0x00, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0x03, 0x60, 0x03, 0x60, 
  0x04, 0x03, 0x00, 0x3C, 0x00, 0xC0, 0x03, 0x00, 0x0C, 0x05, 0x03, 0x60, 
  0x03, 0x60, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0x09, 0x00, 0x00, 0x20, 
  0x00, 0x38, 0x00, 0x3E, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x3E, 0x00, 0x38, 
  0x00, 0x20, 0x00, 0x08, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 
  0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x04, 0x00, 0x00, 0x01, 
  0x00, 0x03, 0x00, 0x02, 0x00, 0x0A, 0x00, 0x00, 0x20, 0x07, 0xB0, 0x0F, 
  0xB8, 0x0F, 0x98, 0x0D, 0xD8, 0x0C, 0xD8, 0x04, 0xF8, 0x0F, 0xF8, 0x0F, 
  0xF0, 0x0F, 0x0A, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x30, 
  0x06, 0x18, 0x0C, 0x18, 0x0C, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0x0A, 
  0x00, 0x00, 0xE0, 0x03, 0xF0, 0x07, 0xF8, 0x0F, 0x38, 0x0E, 0x18, 0x0C, 
  0x18, 0x0C, 0x38, 0x0E, 0x30, 0x06, 0x20, 0x02, 0x0A, 0x00, 0x00, 0xE0, 
  0x03, 0xF0, 0x07, 0xF8, 0x0F, 0x18, 0x0C, 0x18, 0x0C, 0x30, 0x06, 0xFF, 
  0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x0A, 0x00, 0x00, 0xE0, 0x03, 0xF0, 0x07, 
  0xF8, 0x0F, 0xD8, 0x0E, 0xD8, 0x0C, 0xD8, 0x0C, 0xF8, 0x0E, 0xF0, 0x06, 
  0xE0, 0x02, 0x06, 0x18, 0x00, 0xFE, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x1B, 
  0x00, 0x1B, 0x00, 0x0A, 0x00, 0x00, 0xE0, 0x23, 0xF0, 0x67, 0xF8, 0x6F, 
  0x18, 0x6C, 0x18, 0x6C, 0x30, 0x66, 0xF8, 0x7F, 0xF8, 0x3F, 0xF8, 0x1F, 
  0x0A, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x10, 0x00, 0x18, 
  0x00, 0x18, 0x00, 0xF8, 0x0F, 0xF8, 0x0F, 0xF0, 0x0F, 0x04, 0x00, 0x00, 
  0xFB, 0x0F, 0xFB, 0x0F, 0xFB, 0x0F, 0x04, 0x00, 0x60, 0xFB, 0x7F, 0xFB, 
  0x7F, 0xFB, 0x3F, 0x0B, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 
  0xE0, 0x01, 0xF0, 0x00, 0xF8, 0x03, 0xF8, 0x0F, 0x18, 0x0F, 0x08, 0x0E, 
  0x00, 0x08, 0x04, 0x00, 0x00, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0x0E, 
  0x00, 0x00, 0xF8, 0x0F, 0xF8, 0x0F, 0xF8, 0x0F, 0x10, 0x00, 0x18, 0x00, 
  0xF8, 0x0F, 0xF8, 0x0F, 0xF0, 0x0F, 0x10, 0x00, 0x18, 0x00, 0xF8, 0x0F, 
  0xF8, 0x0F, 0xF0, 0x0F, 0x0A, 0x00, 0x00, 0xF8, 0x0F, 0xF8, 0x0F, 0xF8, 
  0x0F, 0x10, 0x00, 0x18, 0x00, 0x18, 0x00, 0xF8, 0x0F, 0xF8, 0x0F, 0xF0, 
  0x0F, 0x0A, 0x00, 0x00, 0xE0, 0x03, 0xF0, 0x07, 0xF8, 0x0F, 0x38, 0x0E, 
  0x18, 0x0C, 0x38, 0x0E, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0x0A, 0x00, 
  0x00, 0xF8, 0x7F, 0xF8, 0x7F, 0xF8, 0x7F, 0x30, 0x06, 0x18, 0x0C, 0x18, 
  0x0C, 0xF8, 0x0F, 0xF0, 0x07, 0xE0, 0x03, 0x0A, 0x00, 0x00, 0xE0, 0x03, 
  0xF0, 0x07, 0xF8, 0x0F, 0x18, 0x0C, 0x18, 0x0C, 0x10, 0x06, 0xF8, 0x7F, 
  0xF8, 0x7F, 0xF8, 0x7F, 0x07, 0x00, 0x00, 0xF8, 0x0F, 0xF8, 0x0F, 0xF8, 
  0x0F, 0x10, 0x00, 0x18, 0x00, 0x08, 0x00, 0x09, 0x00, 0x00, 0x70, 0x04, 
  0xF8, 0x0C, 0xF8, 0x0D, 0xC8, 0x09, 0xC8, 0x09, 0xD8, 0x0F, 0x98, 0x0F, 
  0x10, 0x07, 0x06, 0x18, 0x00, 0xFE, 0x07, 0xFE, 0x0F, 0xFF, 0x0F, 0x18, 
  0x0C, 0x18, 0x0C, 0x0A, 0x00, 0x00, 0xF8, 0x07, 0xF8, 0x0F, 0xF8, 0x0F, 
  0x00, 0x0C, 0x00, 0x0C, 0x00, 0x04, 0xF8, 0x0F, 0xF8, 0x0F, 0xF8, 0x0F, 
  0x09, 0x08, 0x00, 0x78, 0x00, 0xF8, 0x03, 0xE0, 0x0F, 0x00, 0x0E, 0xF0, 
  0x0F, 0xF8, 0x03, 0x78, 0x00, 0x08, 0x00, 0x0F, 0x08, 0x00, 0x78, 0x00, 
  0xF8, 0x03, 0xF0, 0x0F, 0x00, 0x0F, 0x80, 0x07, 0xF8, 0x01, 0x78, 0x00, 
  0xF8, 0x01, 0x80, 0x07, 0x00, 0x0F, 0xF0, 0x0F, 0xF8, 0x03, 0x78, 0x00, 
  0x08, 0x00, 0x0B, 0x08, 0x08, 0x18, 0x0C, 0x38, 0x0F, 0xF0, 0x07, 0xE0, 
  0x03, 0xC0, 0x01, 0xE0, 0x03, 0xF0, 0x07, 0x38, 0x0F, 0x18, 0x0C, 0x08, 
  0x08, 0x09, 0x08, 0x60, 0x78, 0x60, 0xF8, 0x63, 0xE0, 0x7F, 0x00, 0x7E, 
  0xE0, 0x1F, 0xF8, 0x07, 0xF8, 0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x18, 
  0x0E, 0x18, 0x0F, 0x98, 0x0F, 0xF8, 0x0D, 0xF8, 0x0C, 0x78, 0x0C, 0x18, 
  0x0C, 0x06, 0x80, 0x01, 0x80, 0x01, 0xFE, 0x3F, 0xFF, 0x7F, 0x7F, 0x7E, 
  0x03, 0x60, 0x03, 0x00, 0x00, 0xFF, 0x7F, 0xFF, 0x7F, 0x06, 0x03, 0x60, 
  0x7F, 0x7E, 0xFF, 0x7F, 0xFE, 0x3F, 0x80, 0x01, 0x80, 0x01, 0x0A, 0x00, 
  0x00, 0xE0, 0x00, 0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xF0, 0x00, 0xE0, 
  0x00, 0xE0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x08, 0xFC, 0x0F, 0x04, 0x08, 
  0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0x04, 0x08, 0xFC, 0x0F
};

