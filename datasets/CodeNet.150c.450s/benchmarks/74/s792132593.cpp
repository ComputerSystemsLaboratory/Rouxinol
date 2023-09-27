#include<stdio.h>

#include<algorithm>


using namespace std ;



int ans[ 50000 + 1 ] ;

int coin[ 20 ] ;


int main()
{
	int n ,m ;
	scanf( "%d %d" ,&n ,&m ) ;


	int i ,j ;
	for( i = 0 ; i < m ; ++i )
	{
		scanf( "%d" ,&coin[ i ] ) ;

		++ans[ coin[ i ] ] ;
	}

	
	for( i = 1 ; i < n ; ++i )
	{
		for( j = 0 ; j < m ; ++j )
		{
			if( i + coin[ j ] <= n )
			{
				ans[ i + coin[ j ] ] = ans[ i + coin[ j ] ] ? min( ans[ i + coin[ j ] ] ,ans[ i ] + 1 ) : ans[ i ] + 1 ;
			}
		}
	}


	printf( "%d\n" ,ans[ n ] ) ;


	return 0 ;
}