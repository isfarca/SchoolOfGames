#include "stdafx.h"
#include <Windows.h>

// Set the text color.
void SetTextColor(int colorValue)
{
	// Execute the text color value.
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorValue);
}

// Set the text size.
void SetTextSize(int size)
{
	// Declare variables
	CONSOLE_FONT_INFOEX consoleFontInfoex;

	// Set the font values.
	consoleFontInfoex.cbSize = sizeof(consoleFontInfoex);
	consoleFontInfoex.nFont = 0;
	consoleFontInfoex.dwFontSize.X = 0;
	consoleFontInfoex.dwFontSize.Y = size;

	// Execute the text size value.
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &consoleFontInfoex);
}