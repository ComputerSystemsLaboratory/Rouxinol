#include<algorithm>
#include<iostream>

int c[100];

int main()
{
	int a;
	
	while( std::cin >> a ){
		c[a-1]++;
	}
	
	int c_max = 0;
	for( int i = 0; i < 100; i++ ){
		c_max = std::max( c_max, c[i] );
	}
	
	for( int i = 0; i < 100; i++ ){
		if( c[i] == c_max ){
		 	std::cout << i + 1 << std::endl;
		}
	}

 	return 0;
}