#include <stdio.h>
#include <string.h>

int n ;
int s ;
int ans ;
int sum ;
bool vis[12] ;

void init ( ) ;
void DFS ( int source , int k ) ;

int main ( )
{
	while ( scanf ( "%d %d" , &n , &s ) == 2 ) {
		if ( n == 0 && s == 0 ) break ;
		init ( ) ;
		DFS ( 0 , 0 ) ;
		printf ( "%d\n" , ans ) ;
	}
	return 0 ;
}

void init ( )
{
	memset ( vis , false , sizeof ( vis ) ) ;
	ans = 0 ;
	sum = 0 ;
}

void DFS ( int source , int k )
{
	if ( source == n ) {
		if ( sum == s ) {
			ans++ ;
		}
		return ;
	}
	for ( int i = k ; i <= 9 ; i++ ) {
		if ( vis[i] == false ) {
			vis[i] = true ;
			sum += i ;
			DFS ( source + 1 , i ) ;
			vis[i] = false ;
			sum -= i ;
		}
	}
}