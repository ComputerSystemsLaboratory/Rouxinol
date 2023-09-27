#include<bits/stdc++.h>
using namespace std ;

#define MAXN 207

int n ;
long long a[ MAXN ] ;
string s ;

int sz ;
long long f[ MAXN ] ;
int bit[ MAXN ] ;

long long calc ( long long x ) {
    for ( int i = 0 ; i < sz ; ++ i ) {
        if ( ( x & ( 1LL << bit[ i ] ) ) > 0 ) {
            x ^= f[ i ] ;
        }
    }
    return x ;
}

void add ( long long x ) {
    x = calc ( x ) ;
    if ( x != 0 ) {
        f[ sz ] = x ;
        bit[ sz ] = 0 ;
        while ( ( x & ( 1LL << bit[ sz ] ) ) == 0 ) { ++ bit[ sz ] ; }
        for ( int i = 0 ; i < sz ; ++ i ) {
            if ( ( f[ i ] & ( 1LL << bit[ sz ] ) ) > 0 ) {
                f[ i ] ^= f[ sz ] ;
            }
        }
        ++ sz ;
    }
}

void input ( ) {
    cin >> n ;
    for ( int i = 1 ; i <= n ; ++ i ) {
        cin >> a[ i ] ;
    }
    cin >> s ;
}

void solve ( ) {
    sz = 0 ;
    for ( int i = n ; i >= 1 ; -- i ) {
        if ( s[ i - 1 ] == '1' ) {
            if ( calc ( a[ i ] ) != 0 ) {
                cout << "1\n" ;
                return ;
            }
        }
        else {
            add ( a[ i ] ) ;
        }
    }
    cout << "0\n" ;
}

int main ( ) {
    ios_base :: sync_with_stdio ( false ) ;
    cin.tie ( NULL ) ;
    int t ;
    cin >> t ;
    while ( t -- ) {
        input ( ) ;
        solve ( ) ;
    }
    return 0 ;
}
