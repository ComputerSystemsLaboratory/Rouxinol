#include<iostream>

int h = 0 , m = 0 , s = 0 ;

int main()
{
	std::cin >> s ;
	for(;s >= 60;)
	{
		m += 1 ;
		s -= 60 ;
	}
	for(;m >= 60;)
	{
		h += 1 ;
		m -= 60 ;
	}
	std::cout << h << ":" << m << ":" << s <<std::endl ;
}