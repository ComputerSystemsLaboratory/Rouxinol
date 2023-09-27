#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int N;
	while( cin >> N, N ) {
		long long int ans = 0;
		vector<vector<long long int>>d( N + 1, vector<long long int>( 5 ) );
		for( size_t i = 1; i <= N; i++ ) {
			for( size_t j = 0; j < 5; j++ ) {
				cin >> d[i][j];
				ans += d[i][j];
			}
		}
		bool f = true;
		while( f ) {
			f = false;
			for( size_t i = 1; i <= N; i++ ) {
				if( d[i][2] ) {
					int now = d[i][2];
					int count = 1;
					int j = 3, k = 1;
					while( j < 5 && now == d[i][j] ) j++;
					while( k >= 0 && now == d[i][k] ) k--;
					if( j - k >3 ) {
						f = true;
						for( size_t l = k + 1; l < j; l++ ) {
							d[i][l] = 0;
						}
					}
				}
			}
			for( int i = N; i >= 1; i-- ) {
				for( size_t j = 0; j < 5; j++ ) {
					if( !d[i][j] ) {
						int k = i;
						while( k > 0 && !d[k][j] ) k--;
						if( k != 0 ) swap( d[i][j], d[k][j] );
					}
				}
			}
		}
		for( size_t i = 0; i <= N; i++ ) {
			for( size_t j = 0; j < 5; j++ ) {
				ans -= d[i][j];
			}
		}
		cout << ans << endl;
	}
}