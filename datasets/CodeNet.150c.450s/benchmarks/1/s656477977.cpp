# include <iostream>
# include <algorithm>

using namespace std;
int N;
const int MAX_N = 100000, INF = 1000000000;
int a[MAX_N];
int dp[MAX_N]; //dp????????????

void solve() {
	fill(dp, dp + N, INF);
	for (int i = 0; i < N; i++) {
		*lower_bound(dp, dp + N, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + N, INF) - dp << endl;
}

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	solve();
	return 0;
}