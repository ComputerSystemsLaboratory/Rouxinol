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

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

char tile[21][21];
int W, H;
int ans;

void dfs( int x, int y ) {
	REP( i, 4 ) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if( nx >= 0 && nx < W && ny >= 0 && ny < H && tile[nx][ny] == '.' ) {
			tile[nx][ny] = '#';
			ans++;
			dfs( nx, ny );
		}
	}
}

signed main() {
	while( cin >> W >> H, W, H ) {
		
		int sx, sy;
		REP( i, H ) {
			REP( j, W ) {
				cin >> tile[j][i];
				if( tile[j][i] == '@' ) {
					sx = j;
					sy = i;
					tile[j][i] = '#';
				}
			}
		}

		
		ans = 1;
		dfs( sx, sy );
		cout << ans << endl;
		
	}
}
