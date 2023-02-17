#ifndef BILLE_HPP
# define BILLE_HPP
# include "vector.hpp"

class	bille
{
	private :
		int		x;
		int		y;
		vector	dir;
		int		num;
	
	public	:
		bille();
		~bille();
		bille(int num);

		void		moove(int x, int y);
		void		moove(int nb_frame);
		void		moove(vector v, int nb_frame);

		int			get_x();
		int			get_y();

		bille&		operator=(bille& b)
		bool		operator==(bille& b);
};

#endif