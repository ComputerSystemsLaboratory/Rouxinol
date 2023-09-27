#include <stdio.h>
#include <algorithm>

using namespace std ;

int a[4] ;

int main ( )
{
	while ( scanf ( "%d" , &a[0] ) == 1 ) {
		for ( int i = 1 ; i < 5 ; i++ ) {
			scanf ( "%d" , &a[i] ) ;
		}
		sort ( a , a + 5 ) ;
		for ( int i = 4 ; i >= 0 ; i-- ) {
			if ( i != 4 ) putchar ( ' ' ) ;
			printf ( "%d" , a[i] ) ;
		}
		putchar ( '\n' ) ;
	}
	return 0 ;
}