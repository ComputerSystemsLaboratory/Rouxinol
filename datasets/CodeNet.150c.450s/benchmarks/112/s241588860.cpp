#include<iostream>
#include<string.h>

char out[ 100000 + 1 ] ;
char change[ 100000 ] ;

using namespace std ;


int main( void )
{
	char now ,next ;
	
	int n ;
	while( 1 )
	{
		cin >> n ;
		
		if( n == 0 )
		{
			return 0 ;
		}
		
		memset( change ,0 ,sizeof change ) ;
		memset( out ,0 ,sizeof out ) ;
		
		int i ;
		for( i = 0 ; i < n ; ++i )
		{
			cin >> now ;
			cin >> next ;
			
			change[ now ] = next ;
		}
		
		cin >> n ;
		
		for( i = 0 ; i < n ; ++i )
		{
			cin >> now ;
			
			out[ i ] = change[ now ] == '\0' ? now : change[ now ] ;
		}
		
		cout << out << endl ;
	}
}