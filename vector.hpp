#ifndef VECTOR_HPP
# define VECTOR_HPP

class	vector
{
	private :
		int x;
		int	y;
	
	public :
		vector();
		~vector();
		vector(int x, int y);
		vector(vector& v);

		int		get_x();
		int		get_y();

		vector&	operator=(const vector& v);

		bool	operator==(const vector& v);
		vector&	operator+(const vector& v);
		vector&	operator-(const vector& v);

		
};

#endif