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
		vector&	operator=(vector& v);
		vector&	operator+(vector& v);
		vector&	operator-(vector& v);
};

#endif