#include "bille.hpp"

bille::bille()
{
	dir = vector(0, 0);
	x = 0;
	y = 0;
	num = 0;
}

bille::~bille()
{
}

bille::bille(int num)
{
	dir = vector(0, 0);
	x = 0;
	y = 0;
	num = num;
}

bille::bille(int x, int y, int num)
{
	dir = vector(0, 0);
	x = x;
	y = y;
	num = num;
}

bille::bille(int x, int y, vector dir, int num)
{
	dir = dir;
	x = x;
	y = y;
	num = num;
}

void	bille::moove(int x, int y)
{
	x = x;
	y = y;
}

void	bille::moove(int nb_frame)
{
	x += dir.get_x() * nb_frame;
	y += dir.get_y() * nb_frame;
}

void	bille::moove(vector v, int nb_frame)
{
	dir = v;
	x += dir.get_x() * nb_frame;
	y += dir.get_y() * nb_frame;
}

void	bille::apply_force(vector v)
{
	dir = dir + v;
}



int		bille::get_x()
{
	return (x);
}

int		bille::get_y()
{
	return (y);
}

void	bille::draw()
{
	DrawCircle(x, y, 2, WHITE);
}

bille&	bille::operator=(bille& b)
{
	if (this == &b)
		return (*this);
	x = b.x;
	y = b.y;
	dir = b.dir;
	num = b.num;
}

bool	bille::operator==(bille& b)
{
	if (x == b.x && y == b.y)
		return (1);
	return (0);
}