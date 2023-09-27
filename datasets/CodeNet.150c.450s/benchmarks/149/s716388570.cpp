// DSL_1 A
#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int par[10000], rank[10000];

void init( int n )
{
	rep( i, n )
		par[i] = i, rank[i] = 0;

	return;
}

int find( int x )
{
	if( x == par[x] )
		return x;
	else
		return par[x] = find( par[x] );
}

void unite( int x, int y )
{
	x = find( x );
	y = find( y );
	if( x == y )
		return;

	if( rank[x] > rank[y] )
		par[y] = x;
	else
	{
		par[x] = y;
		if( rank[x] == rank[y] )
			++rank[y];
	}

	return;
}

bool same( int x, int y )
{
	return find( x ) == find( y );
}

int main()
{
	int n, q;
	scanf( "%d%d", &n, &q );
	init( n );

	rep( i, q )
	{
		char com[2];
		int x, y;
		scanf( "%s%d%d", com, &x, &y );

		if( *com == '0' )
			unite( x, y );
		else
			printf( "%d\n", same( x, y ) );
	}

	return 0;
}