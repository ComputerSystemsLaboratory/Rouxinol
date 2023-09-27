#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
	int n;
	while ( cin >> n, n ) {
		bool used[21][21] = {{0}};
		for ( int i = 0; i < n; i++ ) {
			int x, y;
			cin >> x >> y;
			used[y][x] = 1;
		}

		int m;
		cin >> m;
		int nx = 10, ny = 10;
		used[ny][nx] = 0;
		for ( int i = 0; i < m; i++ ) {
			char c;
			int d;
			cin >> c >> d;
			if ( c == 'N' ) {
				for ( int i = 0; i < d; i++ ) {
					used[++ny][nx] = 0;
				}
			}
			if ( c == 'E' ) {
				for ( int i = 0; i < d; i++ ) {
					used[ny][++nx] = 0;
				}
			}
			if ( c == 'S' ) {
				for ( int i = 0; i < d; i++ ) {
					used[--ny][nx] = 0;
				}
			}
			if ( c == 'W' ) {
				for ( int i = 0; i < d; i++ ) {
					used[ny][--nx] = 0;
				}
			}			
		}
		int cnt = 0;
		for ( int i = 0; i < 21; i++ ) {
			for ( int j = 0; j < 21; j++ ) cnt += used[i][j];
		}

		if ( cnt ) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}

