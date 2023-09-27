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
    int N, a, b, c, x;
    while( cin >> N >> a >> b >> c >> x, N | a | b | c | x ){
        vector<int> ran( N );
        REP( i, N ) cin >> ran[i];

        int ans = -1;
        int reel = 0;
        REP( i, 10001 ){
            if( x == ran[reel] ) reel++;
            if( reel == N ){
                ans = i;
                break;
            }
            x = ( a * x + b ) % c;
        }

        cout << ans << endl;
    }
}

