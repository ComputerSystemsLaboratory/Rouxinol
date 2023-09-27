#include <stdio.h>

int main( int argc , char** argv )
{
	int number_table[ 6 ];
	scanf( "%d %d %d %d %d %d" ,
		&number_table[ 0 ] ,
		&number_table[ 1 ] ,
		&number_table[ 2 ] ,
		&number_table[ 3 ] ,
		&number_table[ 4 ] ,
		&number_table[ 5 ] );

	int left = 4;
	int bottom = 6;
	int back = 5;

	while( 1 )
	{
		int c = getchar();
		if( c == EOF )
		{
			break;
		}

		if( c == 'E' )
		{
			int temp = left;
			left = bottom;
			bottom = 7 - temp;
		}
		if( c == 'W' )
		{
			int temp = bottom;
			bottom = left;
			left = 7 - temp;
		}
		if( c == 'S' )
		{
			int temp = back;
			back = bottom;
			bottom = 7 - temp;
		}
		if( c == 'N' )
		{
			int temp = bottom;
			bottom = back;
			back = 7 - temp;
		}
	}

	printf( "%d\n" , number_table[ 7 - bottom - 1 ] );


	return 0;
}