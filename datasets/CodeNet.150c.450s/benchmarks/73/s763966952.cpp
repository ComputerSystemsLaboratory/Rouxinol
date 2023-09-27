#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int n, q;
int a[100001];

void add( int i, int x )
{
	while( i <= n )
	{
		a[i] += x;
		i += i & (-i);
	}

	return;
}

int sum( int i )
{
	int sum = 0;
	while( i > 0 )
	{
		sum += a[i];
		i -= i & (-i);
	}

	return sum;
}

int main()
{
	scanf( "%d%d", &n, &q );
	rep( i, q )
	{
		char com[2];
		int x, y;
		scanf( "%s%d%d", com, &x, &y );
	
		if( *com == '0' )
			add( x, y );
		else
			printf( "%d\n", sum( y ) - sum( x-1 ) );
	}

	return 0;
}