#include "bille.hpp"

bille::bille()
{
	x = 0;
	y = 0;
	dir = vector(0,0);
	num = 0;
}

bille::~bille()
{
}

bille::bille(int num)
{
	x = 0;
	y = 0;
	dir = vector(0,0);
	this->num = num;
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

int		bille::get_x()
{
	return (x);
}

int		bille::get_y()
{
	return (y);
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