#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main() {
	int x, y, s;
	while( 1 ) {
		cin >> x >> y >> s;
		if( x == 0 && y == 0 && s == 0 ) break;

		int tmax = 0;
		int m1, m2;
		FOR( i, 1, s / 2 + s % 2 + 1 ) {
			for( int j = s - i;; j-- ) {
				m1 = i * ( 100 + x ) / 100;
				m2 = j * ( 100 + x ) / 100;
				if( m1 + m2 < s ) break;
				if( m1 + m2 == s ) {
					m1 = i * ( 100 + y ) / 100;
					m2 = j * ( 100 + y ) / 100;
					tmax = max( m1 + m2, tmax );
				}
			}
		}

		cout << tmax << endl;
	}
	
}
