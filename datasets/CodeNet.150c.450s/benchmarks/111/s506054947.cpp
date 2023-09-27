#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ll;

int main() {
	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; ++i) cin >> v[i];

	ll dp[101][21] = {0};
	dp[1][v[0]] = 1;
	for (int i = 1; i < N-1; ++i) {
		for (int j = 0; j <= 20; ++j) {
			if (dp[i][j]) {
				if (j + v[i] <= 20) dp[i+1][j+v[i]] += dp[i][j];
				if (j - v[i] >= 0) dp[i+1][j-v[i]] += dp[i][j];
			}
		}
	}
	cout << dp[N-1][v[N-1]] << endl;
}