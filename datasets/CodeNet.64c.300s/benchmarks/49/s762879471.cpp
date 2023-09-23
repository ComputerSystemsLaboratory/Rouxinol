#include<iostream>

int a,b;

int main(void)
{
	while( std::cin >> a >> b ){
		int i,j;
		for( i = 10, j = 1; ( a + b ) / i >= 1; i *= 10, j++){}

		std::cout << j << std::endl;
	}

	return 0;
}