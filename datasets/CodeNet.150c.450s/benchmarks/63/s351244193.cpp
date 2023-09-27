#include <bits/stdc++.h>
using namespace std;

#define int				long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )	for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )	FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP				make_pair
#define X				first.first
#define Y				first.second

typedef pair<int, int> P;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

struct Edge {
	int to, cost;
};

vector<Edge> G[100001];
int d[100001];
int V, E;

signed main() {
	int r;
	cin >> V >> E >> r;
	REP( i, E ) {
		int from, to, cost; cin >> from >> to >> cost;
		G[from].emplace_back( Edge{ to, cost } );
	}

	fill( d, d + 100001, INF );
	d[r] = 0;

	priority_queue<P, vector<P>, greater<P> > que;
	que.emplace( 0, r );
	while( !que.empty() ) {
		P p = que.top(); que.pop();
		int v = p.second;

		if( d[v] < p.first ) continue;

		REP( i, G[v].size() ) {
			Edge e = G[v][i];
			if( chmin( d[e.to], d[v] + e.cost ) ) {
				que.emplace( d[e.to], e.to );
			}
		}
	}

	REP( i, V ) {
		if( d[i] != INF) cout << d[i] << endl;
		else			 cout << "INF" << endl;
	}

}
