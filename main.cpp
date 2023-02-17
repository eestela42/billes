#include <iostream>
#include "zone.hpp"

int main()
{
	int			dimension[2] = {800, 800};
	Color		color = {0, 0, 0, 255};
	std::vector<bille*> billes;

	InitWindow(dimension[0], dimension[1], "BILLES");
	SetTargetFPS(60);
	
	zone	zone1(0, 800, 0, 800);
	int i = 0;
	int y = 1;
	while(!WindowShouldClose())
	{
		if (!(i % 20))
		{
			std::cout << "new bille" << std::endl;
			bille *bille1 = new bille((i % dimension[0]), (i % dimension[1]), y++);
			zone1.place(bille1);
			billes.push_back(bille1);
		}
		BeginDrawing();
		ClearBackground(color);
		zone1.apply_force_on_all(400, 400, 1);
		for (std::vector<bille*>::iterator it = billes.begin(); it != billes.end(); it++)
		{
			std::cout << "x: " << (*it)->get_x() << " y: " << (*it)->get_y() << std::endl;
			DrawCircle((*it)->get_x(), (*it)->get_y(), 2, WHITE);
		}
		DrawCircle(400, 400, 25, RED);
		EndDrawing();
		std::cout << i << std::endl;
		i++;
	}
	CloseWindow();
}