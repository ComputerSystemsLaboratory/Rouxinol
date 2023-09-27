// PKU 3325
#include<algorithm>
#include<cstdio>
#define rep( i, a ) for( int i = 0; i != (a); ++i )

int main()
{
	int n;
	while( scanf( "%d", &n ), n )
	{
		int ma = 0, mi = 1 << 30, sum = 0;
		rep( i, n )
		{
			int a;
			scanf( "%d", &a );

			sum += a;
			ma = std::max( ma, a );
			mi = std::min( mi, a );
		}

		printf( "%d\n", (sum - ma - mi) / (n - 2) );
	}

	return 0;
}