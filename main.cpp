#include "raylib.h"
#include <iostream>

int main()
{
	int			dimension[2] = {240, 240};
	color		color = {120, 100, 185, 255};

	InitWindow(dimension[0], dimension[1], "BILLES");
	SetTargetFPS(60);
	clearBackGround(color);
	while(!WindowShouldClose())
	{
		
	}
	CloseWindow();
}