// AOJ ALDS 1_12_A
#include<cstdio>
#include<algorithm>
#include<vector>
#define rep(i,a) for( int i = 0; i != (a); ++i )

struct edge
{
	int from, to, cost;

	edge( int from, int to, int cost )
	:	from( from ), to( to ), cost( cost )
	{}
};

int n;
std::vector<edge> es;

int par[100], rank[100];

void init()
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

	if( rank[x] < rank[y] )
		par[x] = y;
	else
	{
		par[y] = x;
		if( rank[x] == rank[y] )
			++rank[x];
	}

	return;
}

bool same( int x, int y )
{
	return find( x ) == find( y );
}

int main()
{
	scanf( "%d", &n );
	rep( i, n )
	{
		rep( j, n )
		{
			int a;
			scanf( "%d", &a );
			if( ~a )
				es.push_back( edge( i, j, a ) );
		}
	}

	std::sort( es.begin(), es.end(), []( const edge& e1, const edge& e2 ){ return e1.cost < e2.cost; } );

	init();

	int ans = 0;
	rep( i, es.size() )
	{
		if( !same( es[i].from, es[i].to ) )
		{
			ans += es[i].cost;
			unite( es[i].from, es[i].to );
		}
	}

	printf( "%d\n", ans );

	return 0;
}