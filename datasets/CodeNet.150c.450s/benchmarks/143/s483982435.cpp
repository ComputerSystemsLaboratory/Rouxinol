#include<bits/stdc++.h>
using namespace std ;

// Template START
#define endl "\n"
#define async ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
#define all(y) y.begin(), y.end()
#define present( x, y ) (x.find( y ) != x.end())
const int mod = (int)1e9 + 7 ;
template<class T>
auto matrix( int r, int c, T v ){
    return vector<vector<T>>( r, vector<T>( c, v ) ) ;
}
template<class T>
auto matrix( int o1, int o2, int o3, T v ){ 
    return vector<vector<vector<T>>>( o1, vector<vector<T>>( o2, vector<T>( o3, v ) ) ) ;
}
#define v vector
// Template END

int power( int x, int n ){
    if( n == 0 ) return 1 ;
    else if( n & 1 ) return ( x * power( (x*x) % mod, n / 2 ) ) % mod ;
    return power( (x*x) % mod, n / 2 ) % mod ;
}

const int mxn = (int)1e5 ;
signed main(){
    int n ; cin >> n ;
    int sum = 0, x ;
    vector<int> cnt( mxn + 1, 0 ) ;
    for( int i = 0 ; i < n ; i++ ) {
        cin >> x ;
        sum += x ;
        cnt[x]++ ;
    }
    int q, l, r ;
    cin >> q ;
    for( int i = 0 ; i < q ; i++ ){
        cin >> l >> r ;
        int f = cnt[l] ;
        cnt[l] = 0 ;
        cnt[r] += f ;
        sum -= f * l ;
        sum += f * r ;
        cout << sum << endl ;
    }
    return 0 ;   
}          