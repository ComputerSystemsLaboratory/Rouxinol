#include <bits/stdc++.h>
using namespace std;

#define int				long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )	for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )	FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define P				pair<int, int>
#define MP				make_pair

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char city[1001][1001];
int d[1001][1001];
char goal = '1';
int H, W, N;

P bfs( P& s ) {
	fill( d[0], d[1001], INF );
	d[s.first][s.second] = 0;

	queue<P> que;
	que.push( s );
	while( !que.empty() ) {
		P p = que.front(); que.pop();
		if( city[p.first][p.second] == goal ) return p;

		REP( i, 4 ) {
			P now( p.first + dx[i], p.second + dy[i] );
			if( now.first >= 0 && now.first < W && now.second >= 0 && now.second < H && city[now.first][now.second] != 'X' && d[now.first][now.second] == INF ) {
				que.push( now );
				d[now.first][now.second] = d[p.first][p.second] + 1;
			}
		}
	}
}

signed main() {
	cin >> H >> W >> N;
	P s;
	REP( i, H ) {
		REP( j, W ) {
			cin >> city[j][i];
			if( city[j][i] == 'S' ) {
				s.first = j;
				s.second = i;
				city[j][i] = '.';
			}
		}
	}

	int ans = 0;
	REP( i, N ) {
		P t = bfs( s );
		ans += d[t.first][t.second];
		s = t;
		goal++;
	}


	cout << ans << endl;
}
