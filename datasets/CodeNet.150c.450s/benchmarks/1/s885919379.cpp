#include<iostream>
#include<algorithm>
#define INF 1000000009
using namespace std;
int main() {
	int dp[100000];
	int n;
	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	fill(dp, dp + n, INF);
	for (int i = 0; i<n; i++) {
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
	return 0;
}
