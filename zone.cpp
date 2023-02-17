#include "cluster.hpp"

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

bool	zone::is_in()
{
	if (bille->get_x() >= dimension[0] && bille->get_x() <= dimension[1] && bille->get_y() >= dimension[2] && bille->get_y() <= dimension[3])
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
