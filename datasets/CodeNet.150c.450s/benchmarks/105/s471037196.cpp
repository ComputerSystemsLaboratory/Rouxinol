#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 210;
int _w;

int n;
ll a[N];
char s[N];

namespace Basis {
	ll b[62];
	void init() {
		memset(b, 0, sizeof b);
	}
	void insert( ll x ) {
		for( ll i = 61; i >= 0; --i )
			if( x & (1LL << i) ) {
				if( b[i] ) x ^= b[i];
				else {
					b[i] = x;
					break;
				}
			}
	}
	bool check( ll x ) {
		for( ll i = 61; i >= 0; --i )
			if( x & (1LL << i) ) {
				if( b[i] ) x ^= b[i];
				else return false;
			}
		return x == 0;
	}
}

int main() {
	int T;
	_w = scanf( "%d", &T );
	while( T-- ) {
		_w = scanf( "%d", &n );
		for( int i = 1; i <= n; ++i )
			_w = scanf( "%lld", a+i );
		_w = scanf( "%s", s+1 );
		Basis::init();
		bool flag = true;
		for( int i = n; i >= 1; --i )
			if( s[i] == '0' ) {
				Basis::insert( a[i] );
			} else {
				if( Basis::check( a[i] ) == false ) {
					flag = false;
					break;
				}
			}
		puts( flag ? "0" : "1" );
	}
	return 0;
}
