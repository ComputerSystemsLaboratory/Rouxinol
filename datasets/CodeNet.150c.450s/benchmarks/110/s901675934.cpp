#include<stdio.h>
#include<string.h>

#include<iostream>
#include<queue>


using namespace std ;


#define y .first
#define x .second


pair< int ,int > p ,cpy ;


char route[ 1000 + 1 ][ 1000 + 1 ] ;

int came[ 1000 + 1 ][ 1000 + 1 ] ;


bool check( pair< int ,int > now,int h,int w ) ;

#define size sizeof came


int mx[] = { 1 ,0 ,0 ,-1 } ;
int my[] = { 0 ,1 ,-1 ,0 } ;


int main()
{
	int h ,w ,n ;
	scanf( "%d %d %d" ,&h ,&w ,&n ) ;

	char end = '0' + n ,cheese = '1' ;

	scanf( "%c" ,&route[ 0 ][ 0 ] ) ;

	int i ,j ;
	for( i = 0 ; i < h ; ++i )
	{
		for( j = 0 ; j <= w ; ++j )
		{
			scanf( "%c" ,&route[ i ][ j ] ) ;

			if( route[ i ][ j ] == 'S' )
			{
				p y = i ;
				p x = j ;
			}
		}
	}

	int ans = 0 ;
	
	do
	{
		queue< pair< int ,int > > que ;

		memset( came ,0 ,size ) ;

		while( route[ p y ][ p x ] != cheese )
		{
			int i ;
			for( i = 0 ; i < 4 ; ++i )
			{
				cpy y = p y + my[ i ] ;
				cpy x = p x + mx[ i ] ;

				if( route[ cpy y ][ cpy x ] != 'X' && check( cpy ,h ,w ) == true )
				{
					came[ cpy y ][ cpy x ] = came[ p y ][ p x ] + 1 ;

					que.push( cpy ) ;
				}
			}

			came[ p y ][ p x ] = 1 ;

			p = que.front() ;

			que.pop() ;
		}

		++cheese ;

		ans += came[ p y ][ p x ] ;

	}while( cheese <= end ) ;

	printf( "%d\n" ,ans ) ;


	return 0 ;
}


bool check( pair< int ,int > now ,int h ,int w )
{
	if( now y >= h || now x >= w || now y < 0 || now x < 0 )
		return false ;

	else if( came[ now y ][ now x ] > 0 )
		return false ;

	return true ;
}