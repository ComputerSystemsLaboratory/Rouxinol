#include<iostream>

int W = 0 , H = 0 , x = 0 , y = 0 , r = 0 ;

int main()
{
	std::cin >> W >> H >> x >> y >> r ;
	if(( x - r >= 0 ) && ( x + r <= W ) && ( y - r >= 0 ) && ( y + r <= H ))
	{
		std::cout<< "Yes" << std::endl ;
	}
	else
	{
		std::cout << "No" << std::endl ;
        }
}