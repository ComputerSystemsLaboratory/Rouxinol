#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#define rep(i,a) for( int i = 0; i != (a); ++i ) 

const int INF = 1 << 30;

struct edge
{
	int from, to, cost;

	edge( int from, int to, int cost )
	:	from( from ), to( to ), cost( cost )
	{}
};

int v, e, r;
std::vector<edge> es;
int d[1000];

void bellman_ford()
{
	std::fill( d, d+v, INF );
	d[r] = 0;

	int cnt = 0;
	while( true )
	{
		bool update = false;

		rep( i, e )
		{
			edge &e = es[i];

			if( d[e.from] != INF && d[e.to] > d[e.from]+e.cost )
				d[e.to] = d[e.from]+e.cost, update = true;
		}

		if( !update )
			break;

		++cnt;

		if( cnt > v )
		{
			puts("NEGATIVE CYCLE");
			return;
		}
	}

	rep( i, v )
	{
		if( d[i] == INF )
			puts("INF");
		else
			printf( "%d\n", d[i] );
	}
}

int main()
{
	scanf( "%d%d%d", &v, &e, &r );
	rep( i, e )
	{
		int s, t, ds;
		scanf( "%d%d%d", &s, &t, &ds );
		es.push_back( edge( s, t, ds ) );
	}

	bellman_ford();

	return 0;
}