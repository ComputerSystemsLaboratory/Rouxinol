#include <bits/stdc++.h>

#define int             long long
#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define REPR( i, m )    for( int (i) = (m); (i) >= 0; (i)-- )
#define REPONE( i, n )  FOR( i, 1, n + 1 )
#define ALL( a )        (a).begin(), (a).end()
#define MP              make_pair

using namespace std;
using P = pair<int, int>;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int MOD = 1e9 + 7;

signed main(){
    int N, M, sum;
    while( cin >> N >> M, N | M ){
        sum = 0;
        vector<P> d( N );
        REP( i, N ) {
            cin >> d[i].second >> d[i].first;
            sum += d[i].first * d[i].second;
        }

        sort( ALL( d ), greater<P>() );

        REP( i, N ){
            if( M >= d[i].second ){
                M -= d[i].second;
                sum -= d[i].second * d[i].first;
            }else{
                sum -= d[i].first * M;
                break;
            }
        }

        cout << sum << endl;
    }
}
