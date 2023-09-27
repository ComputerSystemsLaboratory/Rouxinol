#include<iostream>
#include<cstdio>

/*
 * Wrong Answer
 * 2015-06-26 02:00
 */

int main(void)
{
	double a, b, c, d, e, f, x, y;

	while( std::cin >> a >> b >> c >> d >> e >> f ){
		y = ( a * f - c * d ) / ( a * e - b * d );
		x = ( c - b * (( a * f - c * d ) / ( a * e - b * d ))) / a;
		printf("%.3f %.3f\n", x, y );
	}

	return 0;
}