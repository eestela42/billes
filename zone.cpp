#include "zone.hpp"

zone::zone(int x1, int x2, int y1, int y2)
{
	dimension[0] = x1;
	dimension[1] = x2;
	dimension[2] = y1;
	dimension[3] = y2;
	next[0] = NULL;
	next[1] = NULL;
	next[2] = NULL;
	next[3] = NULL;
}

zone::~zone()
{
}

bool	zone::is_in(bille* bille)
{
	int x = bille->get_x();
	int y = bille->get_y();
	if (x >= dimension[0] && x <= dimension[1] && y >= dimension[2] && y <= dimension[3])
		return (1);
	return (0);
};

void	zone::place(bille *bille)
{
	if (is_in(bille))
		content.push_back(bille);
	
	if (next[0] && next[0]->is_in(bille))
		next[0]->place(bille);
	else if (next[1] && next[1]->is_in(bille))
		next[1]->place(bille);
	else if (next[2] && next[2]->is_in(bille))
		next[2]->place(bille);
	else if (next[3] && next[3]->is_in(bille))
		next[3]->place(bille);
}

void	zone::apply_force_on_all(vector v)
{
	for (std::vector<bille*>::iterator it = content.begin(); it != content.end(); it++)
		(*it)->apply_force(v);
}

void zone::apply_force_on_all(int x, int y, int ratio)
{
	for (std::vector<bille*>::iterator it = content.begin(); it != content.end(); it++)
	{
		vector v2((*it)->get_x() - x, (*it)->get_y() - y);
		(*it)->apply_force(v2);
	}
}
