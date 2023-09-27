#include<iostream>
#include<stdio.h>

int main()
{
	int n;
	double x[4], y[4];
	std::cin >> n;
	while( n-- ){
		for( int i = 0; i < 4; i++ ){
	 		std::cin >> x[i] >> y[i];
		}
		
		if( ( x[1] - x[0] ) * ( y[3] - y[2] ) == ( x[3] - x[2] ) * ( y[1] - y[0] ) ) puts("YES");
		else if( x[0] == x[1] && x[2] == x[3] ) puts("YES");
		else if( y[0] == y[1] && y[2] == y[3] ) puts("YES");
		else puts("NO");
	}

 	return 0;
}