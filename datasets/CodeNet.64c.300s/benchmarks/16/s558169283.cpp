#include <stdio.h>
#include <limits.h>

int main( int argc , char** argv )
{
	long data_count;
	scanf( "%ld" , &data_count );

	long data_l;
	scanf( "%ld" , &data_l );
	long data_r;
	scanf( "%ld" , &data_r );

	long diff_current = data_r - data_l;
	long diff_max = diff_current;

	for( int i = 2 ; i < data_count ; i++ )
	{

		long data_current;
		scanf( "%ld" , &data_current );

		if( data_l < data_r )
		{
			if( data_r < data_current )
			{
				data_r = data_current;
			}
			else if( data_current < data_l )
			{
				data_l = data_r;
				data_r = data_current;
			}
		}
		else
		{
			data_l = data_r;
			data_r = data_current;
		}

		diff_current = data_r - data_l;
		if( diff_max < diff_current )
		{
			diff_max = diff_current;
		}

	}

	printf( "%ld\n" , diff_max );
	return 0;
}