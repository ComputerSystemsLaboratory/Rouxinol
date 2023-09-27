#include <iostream>
using namespace std;

int p[10000];

int root( int n ) {
	if ( p[n] != n )
		p[n] = root( p[n] );
	return p[n];
}

void unit( int x, int y ) {
	p[root( y )] = p[root( x )];
}

void same( int x, int y ) {
	if ( root( x ) == root( y ) )
		cout << 1 << endl;
	else
		cout << 0 << endl;
}

int main() {
	int n, q, com, x, y;
	cin >> n >> q;
	for ( int i = 0; i < n; i++ )
		p[i] = i;
	for ( int i = 0; i < q; i++ ) {
		cin >> com >> x >> y;
		if ( com == 0 )
			unit( x, y );
		else
			same( x, y );
	}
}