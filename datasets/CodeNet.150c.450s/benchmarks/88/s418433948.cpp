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

struct Diag{
    int h, w, d;
    Diag( int h, int w ) : w( w ), h( h ){
        d = w * w + h * h;
    }

    bool operator< ( const Diag& rhs ) const {
        if( d < rhs.d ) return true;
        if( d > rhs.d ) return false;
        return h < rhs.h;
    }
};

signed main(){
    vector<Diag> rect;
    REPONE( i, 150 ){
        FOR( j, i + 1, 151 ){
            rect.emplace_back( i, j );
        }
    }

    sort( ALL( rect ) );

    int H, W;
    while( cin >> H >> W, H | W ){
        Diag in = Diag( H, W );
        in = *( ++lower_bound( ALL( rect ), in ) );
        cout << in.h << " " << in.w << endl;
    }

}

