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

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

char orchard[101][101];
int H, W;

void dfs( int sx, int sy, char f ) {
	REP( i, 4 ) {
		int nx = sx + dx[i];
		int ny = sy + dy[i];

		if( nx >= 0 && nx < W && ny >= 0 && ny < H && orchard[nx][ny] == f ) {
			orchard[nx][ny] = '.';
			dfs( nx, ny, f );
		}
	}
}

signed main() {

	while( cin >> H >> W ) {
		if( H == 0 && W == 0 ) break;

		REP( i, H ) {
			REP( j, W ) {
				cin >> orchard[j][i];
			}
		}

		int ans = 0;
		REP( i, H ) {
			REP( j, W ) {
				if( orchard[j][i] != '.' ) {
					dfs( j, i, orchard[j][i] );
					ans++;
				}
			}
		}

		cout << ans << endl;

	}
}
