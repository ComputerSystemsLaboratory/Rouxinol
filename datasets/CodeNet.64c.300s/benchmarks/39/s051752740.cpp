#include<iostream>

int main( void )
{
	int n, count;

	while( std::cin >> n ){
		count = 0;

		for( int a = 0; a < 10; a++ ){
			for( int b = 0; b < 10; b++ ){
				for( int c = 0; c < 10; c++ ){
					for( int d = 0; d < 10; d++ ){
						if( n == a + b + c + d ){
							count++;
							break;
						}
					}
				}
			}
		}

		std::cout << count << std::endl;
	}

	return 0;
}