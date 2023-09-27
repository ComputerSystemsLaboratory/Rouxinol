
#include <cstdio>

using namespace std;

#define FOR( i, n ) for( int i = 0; i < n; ++i )

int main( void )
{

	while( 1 )
	{

		int point_a = 0;
		int point_b = 0;

		int n;
		scanf( "%d", &n );

		if( n == 0 )
			break;

		FOR( i, n )
		{
			int a, b;
			scanf( "%d %d", &a, &b );

			if( a > b )
			{
				// AÌ¿
				point_a += a+b;
			}
			else
			{
				if( a == b )
				{
					// ø«ª¯
					point_a += a;
					point_b += b;
				}
				else
				{
					// BÌ¿
					point_b += a+b;
				}
			}

		}

		// Ê
		printf( "%d %d\n", point_a, point_b );

	}

	return 0;
}