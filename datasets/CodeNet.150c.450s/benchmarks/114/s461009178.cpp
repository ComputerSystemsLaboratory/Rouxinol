#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int p[100];
pair<int, int> a[10000];

int root( int m ) {
	if ( p[m] != m )
		p[m] = root( p[m] );
	return p[m];
}

void unit( int x, int y ) {
	p[root( y )] = root( x );
}

bool same( int x, int y ) {
	return root( x ) == root( y );
}

int main() {
	int n, ai, pn, ans;
	cin >> n;
	for ( int i = 0; i < n * n; i++ ) {
		cin >> ai;
		if ( ai == -1 || i % n <= i / n )
			ai = 2001;
		a[i] = make_pair( ai, i );
	}
	sort( a, a + ( n * n ) );
	pn = 0;
	ans = 0;
	for ( int i = 0; i < n; i++ )
		p[i] = i;
	for ( int i = 0; i < n * n; i++ ) {
		if ( ! same( a[i].second % n, a[i].second / n ) ) {
			ans += a[i].first;
			pn++;
			unit( a[i].second % n, a[i].second / n );
			if ( pn >= n - 1 ) break;
		}
	}
	cout << ans << endl;
}