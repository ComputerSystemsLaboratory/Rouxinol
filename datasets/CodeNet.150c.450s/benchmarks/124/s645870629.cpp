#include<stdio.h>
#include<limits.h>

#define rep( i ,end ) for( int i = 0 ; i < end ; ++i )
#define Nmax 100
#define INF ( INT_MAX / 10 )

int Node[ Nmax ][ Nmax ] ;

int min( int a ,int b )
{
	return a > b ? b : a ;
}

void Init( int NODE[ Nmax ][ Nmax ] ,int N )
{
	rep( i ,N )
	{
		rep( j ,N )
		{
			NODE[ i ][ j ] = ( i == j ) ? 0 : INF ;
		}
	}
}



int main( void )
{
	int N ,V ,K ;
	int v ,cost ;
	scanf( "%d" ,&N ) ;

	Init( Node ,N ) ;

	rep( i ,N )
	{
		scanf( "%d %d" ,&V ,&K ) ;

		rep( j ,K )
		{
			scanf( "%d %d" ,&v ,&cost ) ;

			Node[ V ][ v ] = cost ;
		}
	}

	rep( u ,N )
	{
		rep( i ,N )
		{
			rep( j ,N )
			{
				Node[ i ][ j ] = min( Node[ i ][ j ] ,Node[ i ][ u ] + Node[ u ][ j ] ) ;
			}
		}
	}

	rep( u ,N )
	{
		printf( "%d %d\n" ,u ,Node[ 0 ][ u ] ) ;
	}

	return 0 ;
}
