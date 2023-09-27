#include <stdio.h>

int ans ;
int sum ;
int n ;
int p ;
int q ;
int num[5010] ;

int main()
{
	while ( scanf ( "%d" , &n ) == 1 && n ) {
		for ( int i = 0 ; i < n ; i++ ) {
			scanf ( "%d" , &num[i] ) ;
		}
		ans = -2147483647 ;
		sum = 0 ;
		for ( int i = 0 ; i < n ; i++ ) {
			sum += num[i] ;
			if ( sum > ans ) {
				ans = sum ;	
				q = i ;
			}
			if ( sum < 0 ) {
				sum = 0 ;
				p = i + 1 ;	
			}
		}
		printf ( "%d\n" , ans ) ;
	}
	return 0 ;
}