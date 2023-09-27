#include <stdio.h>

struct chars {
	char ori ;
	char aft ;
} data[100000] ;

int n ;

int main ( )
{
	while ( scanf ( "%d" , &n ) == 1 && n ) {
		getchar ( ) ;
		for ( int i = 0 ; i < n ; i++ ) {
			scanf ( "%c%*c%c%*c" , &data[i].ori , &data[i].aft ) ;
		}
		int m ;
		char c ;
		scanf ( "%d" , &m ) ;
		getchar ( ) ;
		for ( int i = 0 ; i < m ; i++ ) {
			c = getchar ( ) ;
			getchar ( ) ;
			for ( int j = 0 ; j < n ; j++ ) {
				if ( data[j].ori == c ) {
					c = data[j].aft ;
					break ;
				}
			}
			putchar ( c ) ;
		}
		putchar ( '\n' ) ;
	}
	return 0 ;
}