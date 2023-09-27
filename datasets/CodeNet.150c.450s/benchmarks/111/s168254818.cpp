#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, s;
vector<int> a;
LL dp[ 100 ][ 21 ];
LL solve( int now, int f ) {
    if ( dp[ now ][ f ] >= 0 ) {
        return dp[ now ][ f ];
    }
    LL res = 0;
    if ( now == n - 1 ) {
        res = s == f;
    }
    else {
        if ( f + a[ now ] <= 20 ) {
            res += solve( now + 1, f + a[ now ] );
        }
        if ( f - a[ now ] >= 0 ) {
            res += solve( now + 1, f - a[ now ] );
        }
    }
    return dp[ now ][ f ] = res;
}
int main() {
    scanf( "%d", &n );
    a.resize( n - 1 );
    for ( int i = 0; i < n - 1; i++ ) {
        scanf( "%d", &a[ i ] );
    }
    scanf( "%d", &s );
    memset( dp, -1, sizeof( dp ) );
    printf( "%lld\n", solve( 1, a[ 0 ] ) );
    return 0;
}