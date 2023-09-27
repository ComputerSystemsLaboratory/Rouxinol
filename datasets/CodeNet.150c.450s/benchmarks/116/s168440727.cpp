#include<stdio.h>

#include<algorithm>


using namespace std ;



int main()
{
	int n ,k ;

	while( 1 )
	{
		scanf( "%d %d" ,&n ,&k ) ;


		if( !( n | k ) )
		{
			return 0 ;
		}


		int if_k = k - 1 ;

		int ans = -10001 ,other[ 100000 ] ;
		
		int sum = 0 ;

		int i ;
		for( i = 0 ; i < n ; ++i )
		{
			scanf( "%d" ,&other[ i ] ) ;

			sum += other[ i ] ;


			if( i > if_k )
			{
				sum -= other[ i - k ] ;
			}

			if( i >= if_k )
			{
				ans = max( ans ,sum ) ;
			}
		}


		printf( "%d\n" ,ans ) ;
	}
}