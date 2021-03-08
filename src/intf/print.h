#pragma once

#include <stdint.h>
#include <stddef.h>
#define VIDEO_ADDRESS 0xB8000

// Terminal sizes by default
#define MAX_ROWS 25
#define MAX_COLS 80

// Attribute byte for text
// Foreground color is in its lowest 4 bits
// Background color is in its highest 3 bits
#define WHITE_ON_BLACK 0x0F

// Indexed registers for read\write from\in port
#define REG_SCREEN_CTRL 0x3D4
#define REG_SCREEN_DATA 0x3D5

enum {
	
    PRINT_COLOR_BLACK = 0,
	PRINT_COLOR_BLUE = 1,
	PRINT_COLOR_GREEN = 2,
	PRINT_COLOR_CYAN = 3,
	PRINT_COLOR_RED = 4,
	PRINT_COLOR_MAGENTA = 5,
	PRINT_COLOR_BROWN = 6,
	PRINT_COLOR_LIGHT_GRAY = 7,
	PRINT_COLOR_DARK_GRAY = 8,
	PRINT_COLOR_LIGHT_BLUE = 9,
	PRINT_COLOR_LIGHT_GREEN = 10,
	PRINT_COLOR_LIGHT_CYAN = 11,
	PRINT_COLOR_LIGHT_RED = 12,
	PRINT_COLOR_PINK = 13,
	PRINT_COLOR_YELLOW = 14,
	PRINT_COLOR_WHITE = 15,
};

void print_clear();
void print_char(char character);
void print_str(char* string);
void print_set_color(uint8_t foreground, uint8_t background);

