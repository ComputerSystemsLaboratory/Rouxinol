#include<iostream>

int s, t;

int main()
{
	int x;
	for( int i = 0; i < 4; i++ ){
		std::cin >> x;
		s += x;
	}
	
	for( int i = 0; i < 4; i++ ){
		std::cin >> x;
		t += x;
	}
	
	std::cout << std::max( s, t ) << std::endl;
	
 	return 0;
}