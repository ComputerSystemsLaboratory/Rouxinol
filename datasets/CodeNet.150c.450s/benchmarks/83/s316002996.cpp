#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int N, W;
	cin >> N >> W;
	vector<vector<long long int>>dp( N + 1, vector<long long int>( W + 1 ) );
	dp[0][0] = 1;
	for( size_t i = 0; i < N; i++ ) {
		long long int v, w;
		cin >> v >> w;
		for( size_t j = 0; j <= W; j++ ) {
			dp[i + 1][j] = max( dp[i + 1][j], dp[i][j] );
			if( j + w <= W&&dp[i][j] ) {
				dp[i + 1][j + w] = max( dp[i + 1][j + w], dp[i][j] + v );
			}
		}
	}
	for( size_t i = 0; i < W; i++ ) {
		dp[N][i + 1] = max( dp[N][i], dp[N][i + 1] );
	}
	cout << max( dp[N][W] - 1, 0LL ) << endl;
}