#include <bits/stdc++.h>
using namespace std;

#define int             long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )    for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )  FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP              make_pair

typedef pair<int, int> P;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

signed main(){
    int N;
    while( cin >> N, N ){
        vector<int> a( N );
        REP( i, N ) cin >> a[i];

        sort( ALL( a ) );

        int ans = INF;
        REP( i, N - 1 ){
            chmin( ans, a[i + 1] - a[i] );
        }
        cout << ans << endl;
    }
}

