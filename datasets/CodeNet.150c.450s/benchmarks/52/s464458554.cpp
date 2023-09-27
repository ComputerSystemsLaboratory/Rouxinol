#include <stdio.h>

int n ;
int p ;
int stack[15] ;

int main ( )
{
	p = 0 ;
	while ( scanf ( "%d" , &n ) == 1 ) {
		if ( n == 0 ) {
			printf ( "%d\n" , stack[p-1] ) ;
			p-- ;
		}
		else {
			stack[p++] = n ;
		}
	}
	return 0 ;
}