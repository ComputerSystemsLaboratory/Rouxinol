// GRL_1_A
#include<cstdio>
#include<algorithm>
#include<functional>
#include<vector>
#include<queue>
#include<utility>
#define rep(i,a) for( int i = 0; i != (a); ++i )

typedef std::pair<int, int> P;
const int INF = 1 << 30;

std::vector<P> G[100000];
int d[100000];

int main()
{
	int v, e, r;
	scanf( "%d%d%d", &v, &e, &r );
	rep( i, e )
	{
		int s, t, d;
		scanf( "%d%d%d", &s, &t, &d );
		G[s].push_back( P( t, d ) );
	}

	std::priority_queue<P, std::vector<P>, std::greater<P> > pque;
	std::fill( d, d+v, INF );
	d[r] = 0;
	pque.push( P( 0, r ) );
	while( !pque.empty() )
	{
		P p = pque.top(); pque.pop();
		int dist = p.first, v = p.second;

		if( d[v] < dist )
			continue;

		rep( i, G[v].size() )
		{
			P &e = G[v][i];

			if( d[e.first] > d[v]+e.second )
			{
				d[e.first] = d[v]+e.second;
				pque.push( P( d[e.first], e.first ) );
			}
		}
	}

	rep( i, v )
	{
		if( d[i] == INF )
			puts("INF");
		else
			printf( "%d\n", d[i] );
	}

	return 0;
}