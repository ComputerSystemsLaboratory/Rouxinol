#include<stdio.h>


#include<queue>



using namespace std ;



struct NoeSis
{
	int x ;
	int y ;
} Sis ;



int mx[] = { 0 ,1 } ;
int my[] = { 1 ,0 } ;


int ans ;




int over_check( int ,int ,int ) ;



int main()
{
	int i ,j ;


	int w ,h ;

	int n ;

	int stop_x ,stop_y ;

	while( scanf( "%d %d" ,&w ,&h ) ,w | h )
	{
		NoeSis Noe = { 1 ,1 } ;


		bool map[ 16 + 1 ][ 16 + 1 ] = { false } ;


		ans = 0 ;


		scanf( "%d" ,&n ) ;


		for( i = 0 ; i < n ; ++i )
		{
			scanf( "%d %d" ,&stop_x ,&stop_y ) ;


			map[ stop_y ][ stop_x ] = true ;
		}



		queue< NoeSis > que ;


		que.push( Noe ) ;



		while( ! que.empty() )
		{
			Sis = que.front() ;

			que.pop() ;


			if( Sis.x == w && Sis.y == h )
			{
				++ans ;
			}


			else
			{
				for( i = 0 ; i < 2 ; ++i )
				{
					if( over_check( w ,h ,i ) & map[ Sis.y + my[ i ] ][ Sis.x + mx[ i ] ] == false )
					{
						Noe = Sis ;

						Noe.x += mx[ i ] ;
						Noe.y += my[ i ] ;


						que.push( Noe ) ;
					}
				}
			}
		}



		printf( "%d\n" ,ans ) ;
	}



	return 0 ;
}





int over_check( int w ,int h ,int i )
{
	++w ;
	++h ;

	return ( ( Sis.x + mx[ i ] < w ) + ( Sis.y + my[ i ] < h ) ) / 2 ;
}