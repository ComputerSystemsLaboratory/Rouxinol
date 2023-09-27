#include <stdio.h>

long long int ans[22] ;

void init ( ) ;

int main ( )
{
	long long int s ;
	init ( ) ;
	while ( scanf ( "%lld" , &s ) == 1 ) {
		printf ( "%lld\n" , ans[s] ) ;
	}
	return 0 ;
}

void init ( )
{
	ans[0] = 0 ;
	ans[1] = 1 ;
	for ( long long int i = 2 ; i <= 20 ; i++ ) {
		ans[i] = ans[i-1] * i ;
	}
}