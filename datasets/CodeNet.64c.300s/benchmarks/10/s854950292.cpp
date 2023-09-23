#include<iostream>

int x = 0  , y = 1 ;

int main()
{
	for(;(x != 0) || (y != 0);)
	{
		std::cin >> x  >> y;
		if(( x != 0 ) || ( y != 0 ))
		{
			if(x <= y)
			{
				std::cout << x << " " << y << std::endl ;
			}
			else
			{
				std::cout << y << " " << x << std::endl ;
			}
		}
	}
}