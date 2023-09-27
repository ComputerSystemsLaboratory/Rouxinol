#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int N, M;
	cin >> N >> M;
	vector<long long int>c( M );
	vector<long long int>dp( N + 1 );
	dp[0] = 1;
	for( size_t i = 0; i < M; i++ ) {
		cin >> c[i];
		for( size_t j = 0; j < N + 1; j++ ) {
			if( dp[j] && j + c[i] < N + 1 ) {
				if( dp[j + c[i]] )
					dp[j + c[i]] = min( dp[j + c[i]], dp[j] + 1 );
				else
					dp[j + c[i]] = dp[j] + 1;
			}
		}
	}
	cout << dp[N] - 1 << endl;
}