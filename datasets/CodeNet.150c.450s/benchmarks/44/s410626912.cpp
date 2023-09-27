#include <bits/stdc++.h>
using namespace std;

bool input( int a[], int b[], int n ) {
	for( int i = 0; i < n; ++i ) {
		if( !(cin >> a[i]) ) { return false; }
	}

	for( int i = 0; i < n; ++i ) {
		if( !(cin >> b[i]) ) { return false; }
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio( false );

	constexpr int N = 4;
	int a[N];
	int b[N];

	while( input( a, b, N ) ) {
		int hit = 0;
		int blow = 0;

		for( int i = 0; i < N; ++i ) {
			for( int j = 0; j < N; ++j ) {
				if( b[i] == a[j] ) {
					if( i == j ) {
						hit += 1;
					}
					else {
						blow += 1;
					}
				}
			}
		}

		cout << hit << ' ' << blow << '\n';
	}
}

