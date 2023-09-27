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
using PP = pair<int, pair<int, int> >;

template<class T>bool chmax( T& a, const T& b ) { if( a < b ) { a = b; return 1; } return 0; }
template<class T>bool chmin( T& a, const T& b ) { if( a > b ) { a = b; return 1; } return 0; }

const int INF = 1e9;
const int INFLL = 1e18;
const int MOD = 1e9 + 7;

const int MAX_V = 1001;

struct Edge{
    int from, to, cost;
};

int d[MAX_V];

signed main(){
    int V, E, r; cin >> V >> E >> r;
    vector<Edge> e( E );
    REP( i, E ){
        cin >> e[i].from >> e[i].to >> e[i].cost;
    }

    fill( d, d + MAX_V, INF );
    d[r] = 0;

    bool negative = false;
    REP( i, V ){
        REP( j, E ){
            if( d[e[j].from] != INF && chmin( d[e[j].to], d[e[j].from] + e[j].cost ) ){
                if( i == V - 1 ) negative = true;
            }
        }
    }

    if( negative ) cout << "NEGATIVE CYCLE" << endl;
    else{
        REP( i, V ){
            if( d[i] != INF ) cout << d[i] << endl;
            else cout << "INF" << endl;
        }
    }
}

