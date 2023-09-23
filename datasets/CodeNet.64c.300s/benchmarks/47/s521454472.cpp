#include <stdio.h>
#include <string.h>

int n ;
int p ;
int max ;
int ans[110] ;
int count[110] ;

int main ( )
{
	memset ( count , 0 , sizeof ( count ) ) ;
	max = 1 ;
	p = 0 ;
	while ( scanf ( "%d" , &n ) == 1 ) {
		count[n]++ ;
	}
	for ( int i = 0 ; i < 110 ; i++ ) {
		if ( count[i] > max ) {
			max = count[i] ;
			p = 0 ;
			ans[p++] = i ;
		}
		else if ( count[i] == max ) {
			ans[p++] = i ;
		}
	}
	for ( int i = 0 ; i < p ; i++ ) {
		printf ( "%d\n" , ans[i] ) ;
	}
	return 0 ;
}