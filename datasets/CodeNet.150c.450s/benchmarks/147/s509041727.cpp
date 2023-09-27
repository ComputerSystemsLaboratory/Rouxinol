#include<bits/stdc++.h>
#define del(a,i) memset(a,i,sizeof(a))
#define ll long long
#define inl inline
#define il inl void
#define it inl int
#define ill inl ll
#define re register
#define ri re int
#define rl re ll
#define mid ((l+r)>>1)
#define lowbit(x) (x&(-x))
#define INF 0x3f3f3f3f
using namespace std ;
template< class T > inl T read() {
	T x = 0 ; int f = 1 ; char k = getchar() ;
	for( ; k > '9' || k < '0'; k = getchar() ) if( k == '-' ) f = -1 ;
	for( ; k >= '0' && k <= '9'; k = getchar() ) x = x * 10 + k - '0' ;
	return x * f ;
}
template< class T > inl T read( T &x ) { return x = read<T>() ; }
int _num, _buf[20];
template< class T > il print( T x ) {
   	if( x == 0 ) return putchar( '0' ) ,void() ;
	if( x < 0 ) putchar( '-' ), x = -x ;
	while( x ) _buf[++_num] = x % 10, x /= 10 ;
	while( _num ) putchar( _buf[_num--] + '0' ) ;
}
ll mul( ll a, ll b, ll mod ) { long double c = 1. ; return ( a * b - (ll)( c * a * b / mod ) * mod ) % mod ; }
it qpow( int x, int m, int mod ) {
	int res = 1, bas = x ;
	while(m) {
		if( m & 1 ) res = ( 1ll * res * bas ) % mod ;
		bas = ( 1ll * bas * bas ) % mod, m >>= 1 ;
	}
	return res ;
}
const int N = 1e4 + 5 ;
int n, ans[N];
int main() {
//	freopen( ".in", "r", stdin ) ;
//	freopen( ".out", "w", stdout ) ;
	n = read<int>() ;
	for( ri i = 1; ( i + 1 ) * ( i + 1 ) + 4 <= 2 * n; ++i )
		for( ri j = 1; ( i + j ) * ( i + j ) + ( i + 1 ) * ( i + 1 ) + ( j + 1 ) * ( j + 1 ) <= 2 * n; ++j )
			for( ri k = 1; ( i + j ) * ( i + j ) + ( i + k ) * ( i + k ) + ( j + k ) * ( j + k ) <= 2 * n; ++k ) {
				int tmp = ( i + j ) * ( i + j ) + ( i + k ) * ( i + k ) + ( j + k ) * ( j + k ) ;
				if( tmp & 1 )
					continue ;
				ans[tmp / 2] += 1 ;
			}
	for( ri i = 1; i <= n; ++i )
		print( ans[i] ), puts( "" ) ;
	cerr << 1. * clock() / CLOCKS_PER_SEC << "\n" ;
	return 0;
}