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

int ans;

void dfs( int n, int s, int i ) {
	if( i > 9 ) {
		if( n == 0 && s == 0 ) ans++;
		return;
	}

	dfs( n - 1, s - i, i + 1 );
	dfs( n, s, i + 1 );
	
}

signed main() {
	int n, s;
	while( cin >> n >> s, n ) {
		ans = 0;
		dfs( n, s, 0 );
		cout << ans << endl;
	}
}
