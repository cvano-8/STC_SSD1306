#ifndef _ASCII_FONT_H_
#define _ASCII_FONT_H_

#include <stdint.h>




// Prints ASCII string using 5x8 font at specified coordinates
// Return next caret x position
uint8_t Print_Ascii_5x8(uint8_t x,uint8_t y,const uint8_t * srt);








#endif
