#include <stdio.h>

int N ;
int a ;
int b ;
int point[2] ;

void init ( ) ;

int main ( )
{
	while ( scanf ( "%d" , &N ) == 1 && N ) {
		init ( ) ;
		for ( int i = 0 ; i < N ; i++ ) {
			scanf ( "%d %d" , &a , &b ) ;
			if ( a > b ) {
				point[0] += ( a + b ) ;
			}
			else if ( a == b ) {
				point[0] += a ;
				point[1] += b ;
			}
			else {
				point[1] += ( a + b ) ;
			}
		}
		printf ( "%d %d\n" , point[0] , point[1] ) ;
	}
	return 0 ;
}

void init ( )
{
	point[0] = point[1] = 0 ;
}