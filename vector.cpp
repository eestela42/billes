#include "vector.hpp"

vector::vector()
{
	x = 0;
	y = 0;
}

vector::~vector()
{
}

vector::vector(int x, int y)
{
	this->x = x;
	this->y = y;
}

int		vector::get_x()
{
	return (x);
}

int		vector::get_y()
{
	return (y);
}

vector&	vector::operator=(vector& v)
{
	if (this == &v)
		return (*this);
	x = v.x;
	y = v.y;
}

bool	vector::operator==(vector& v)
{
	if (x == v.x && y == v.y)
		return (1);
	return (0);
}

vector&	vector::operator+(vector& v)
{
	x += v.x;
	y += v.y;
}

vector&	vector::operator-(vector& v)
{
	x -= v.x;
	y -= v.y;
}
