// GRL_2_A
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

	bool operator< ( const edge& e ) const
	{
		return cost < e.cost;
	}
};

int v, e;
std::vector<edge> es;

int par[10000], rank[10000];

void init()
{
	rep( i, v )
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
}

bool same( int x, int y )
{
	return find( x ) == find( y );
}

int main()
{
	scanf( "%d%d", &v, &e );
	rep( i, e )
	{
		int s, t, w;
		scanf( "%d%d%d", &s, &t, &w );
		es.push_back( edge( s, t, w ) );
	}

	std::sort( es.begin(), es.end() );

	init();

	int ans = 0;
	rep( i, e )
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