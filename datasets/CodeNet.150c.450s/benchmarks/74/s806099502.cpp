#include<stdio.h>

#include<algorithm>


using namespace std ;



int use[ 50000 + 1 ] ;


int coin[ 20 ] ;



int main()
{
	int n ,m ;
	scanf( "%d %d" ,&n ,&m ) ;


	int i ,j ;
	for( i = 0 ; i < m ; ++i )
	{
		scanf( "%d" ,&coin[ i ] ) ;


		++use[ coin[ i ] ] ;
	}


	i = 1 ;
	while( i < n )
	{
		if( use[ i ] > 0 )
		{
			for( j = 0 ; j < m ; ++j )
			{
				if( i + coin[ j ] <= n )
				{
					if( use[ i + coin[ j ] ] != 0 )
					{
						use[ i + coin[ j ] ] = min( use[ i ] + 1 ,use[ i + coin[ j ] ] ) ;
					}

					else
					{
						use[ i + coin[ j ] ] = use[ i ] + 1 ;
					}
				}
			}
		}


		++i ;
	}


	printf( "%d\n" ,use[ n ] ) ;


	return 0 ;
}