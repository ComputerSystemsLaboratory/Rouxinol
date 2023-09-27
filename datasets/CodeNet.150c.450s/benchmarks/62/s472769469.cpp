#include<iostream>

int a = 0 , b = 0 , c = 0 , i = 0 , j = 0 ;

int main()
{
	std::cin >> a >> b >> c ;
	for(;i == 0;)
	{
		i = 1 ;
		if(a > b)
		{
			j = a ;
			a = b ;
			b = j ;
			i = 0 ;
		}
		if(b > c)
		{
			j = b ;
			b = c ;
			c = j ;
			i = 0 ;
		}
	}
	std::cout << a << " " << b << " " << c << std::endl ;
}