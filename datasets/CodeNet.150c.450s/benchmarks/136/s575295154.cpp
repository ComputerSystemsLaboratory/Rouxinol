#include<iostream>
#include<algorithm>

int gcd( unsigned int, unsigned int );
int main(void)
{
	unsigned int a, b, g, l;

	while( std::cin >> a >> b ){
		g = gcd( a, b );
		l = ( a / g ) * b;
		std::cout << g << ' ' << l << std::endl;
	}

	return 0;
}

int gcd( unsigned int a, unsigned int b ){
	int n, i;
	unsigned int tmp[3];

	tmp[0] = std::max( a, b );
	tmp[1] = std::min( a, b );

	for( n = 0;; n++ ){
		for( i = 1;; i++ ){
			tmp[( n + 2 ) % 3 ] = tmp[ n % 3 ] - tmp[( n + 1 ) % 3 ] * i;
			if( tmp[( n + 2 ) % 3 ] == 0 ){
				return tmp[( n + 1 ) % 3 ];
			}else if( tmp[( n + 2 ) % 3 ] < tmp[( n + 1 ) % 3 ] ){
				break;
			}
		}
	}

	return -1;
}