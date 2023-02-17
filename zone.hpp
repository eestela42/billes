#ifndef ZONE_HPP
# define ZONE_HPP

# include <vector>
# include "bille.hpp"

class zone
{
	private :
		std::vector<bille*>	content;
		int					dimension[4];
		zone				*next[4];
		

	public	:
		~zone();
		zone(int x1, int x2, int y1, int y2);
		bool	is_in(bille *bille);
		void	place(bille *bille);
};

#endif