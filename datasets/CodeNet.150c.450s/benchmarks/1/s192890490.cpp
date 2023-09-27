#include <iostream>
#include <algorithm>
using namespace std;

const int INF = (int)1e9;

int A[100000];
int dp[100000];

int main() {
	ios::sync_with_stdio(false);
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];
	fill(dp, dp + n, INF);
	for (int i = 0; i < n; i++) {
		*lower_bound(dp, dp + n, A[i]) = A[i];
	}
	cout << (lower_bound(dp, dp + n, INF) - dp) << endl;
}