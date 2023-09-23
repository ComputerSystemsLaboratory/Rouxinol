#include <iostream>
#include <algorithm>
#include <limits>

#define rep(X, Y) for( int X = 0; X < Y; ++X )
#define repi(X, Y, Z) for( int X = Y; X < Z; ++X )

int n;
long long array[5001];
long long max;

int main(){
	while( std::cin >> n, n ){
		max = std::numeric_limits<long long>::min();

		rep( i, n ) std::cin >> array[i + 1];

		rep( i, n ) array[i + 1] += array[i];

		rep( i, n + 1 ) repi( l, i + 1, n + 1 ){
			max = std::max( max, array[l] - array[i] );
		}

		std::cout << max << std::endl;
	}

	return 0;
}