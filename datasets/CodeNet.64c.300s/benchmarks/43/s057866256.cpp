#include <stdio.h>

int main ( )
{
	int a ;
	int b ;
	int t ;
	while ( scanf ( "%d" , &t ) == 1 ) {
		a = t ;
		b = 0 ;
		for ( int i = 0 ; i < 3 ; i++ ) {
			scanf ( "%d" , &t ) ;
			a += t ;
		}
		for ( int i = 0 ; i < 4 ; i++ ) {
			scanf ( "%d" , &t ) ;
			b += t ;
		}
		printf ( "%d\n" , ( a > b ) ? a : b ) ;
	}
	return 0 ;
}