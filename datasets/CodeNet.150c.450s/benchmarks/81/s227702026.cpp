#include<stdio.h>


#define rep( i ,end ) for( int i = 0 ; i < end ; ++i )

#define CityN 10
#define INF 1000000

void Init( int NODE[ CityN ][ CityN ] ,int N )
{
	rep( i ,N )
	{
		rep( j ,N )
		{
			NODE[ i ][ j ] = ( i == j ) ? 0 : INF ;
		}
	}
}

int min( int a ,int b )
{
	return a > b ? b : a ;
}

int max( int a ,int b )
{
	return a > b ? a : b ;
}


int Node[ CityN ][ CityN ] ;

int main( void )
{
	int N ,n ,a ,b ,cost ;
	do
	{
		scanf( "%d" ,&N ) ;

		if( N == 0 )
		{
			return 0 ;
		}

		n = 0 ;
		Init( Node ,CityN ) ;

		rep( i ,N )
		{
			scanf( "%d %d %d" ,&a ,&b ,&cost ) ;
			
			Node[ a ][ b ] = Node[ b ][ a ] = cost ;

			n = max( n ,max( a ,b ) ) ;
		}

		N = n + 1 ;

		rep( k ,N )
		{
			rep( i ,N )
			{
				rep( j ,N )
				{
					Node[ i ][ j ] = min( Node[ i ][ j ] ,Node[ i ][ k ] + Node[ k ][ j ] ) ;
				}
			}
		}

		int Min = INF ,V ;
		rep( i ,N )
		{
			int sum = 0 ;

			rep( j ,N )
			{
				sum += Node[ i ][ j ] ;
			}

			if( Min > sum )
			{
				V = i ;
				
				Min = sum ;
			}
		}

		printf( "%d %d\n" ,V ,Min ) ;

	}while( 1 ) ;
}
