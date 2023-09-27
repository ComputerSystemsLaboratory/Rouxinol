#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int N;
	cin >> N;
	vector<long long int>dp( N + 1, LLONG_MAX / 6 );
	dp[0] = LLONG_MIN;
	for( size_t i = 0; i < N; i++ ) {
		long long int a;
		cin >> a;
		for( size_t j = lower_bound( dp.begin(), dp.end(), a ) - dp.begin() - 1; j < N; j++ ) {
			if( dp[j] < a ) {
				dp[j + 1] = min( dp[j + 1], a );
			} else {
				break;
			}
		}
	}
	long long int ans = 0;
	for( size_t i = 0; i < N + 1; i++ ) {
		if( dp[i] != LLONG_MAX / 6 ) {
			ans = i;
		} else {
			break;
		}
	}
	cout << ans << endl;
}