#include <stdio.h>
#include <string.h>

bool vis[35] ;

int main ( )
{
	int t ;
	while ( scanf ( "%d" , &t ) == 1 ) {
		memset ( vis , false , 35 * sizeof ( bool ) ) ;
		vis[t] = true ;
		for ( int i = 0 ; i < 27 ; i++ ) {
			scanf ( "%d" , &t ) ;
			vis[t] = true ;
		}
		for ( int i = 1 ; i < 31 ; i++ ) {
			if ( vis[i] == false ) {
				printf ( "%d\n" , i ) ;
			}
		}
	}
	return 0 ;
}