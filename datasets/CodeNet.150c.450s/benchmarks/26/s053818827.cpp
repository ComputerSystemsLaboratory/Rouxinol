#include<iostream>

int a = 0 , b = 0 ;

int main()
{
	std::cin >> a >> b ;
	if( a == b )
	{
		std::cout << "a == b" <<std::endl ;
	}
	else if( a > b )
	{
		std::cout << "a > b" <<std::endl ;
	}
	else if( a < b)
	{
		std::cout << "a < b" <<std::endl ;
	}
}