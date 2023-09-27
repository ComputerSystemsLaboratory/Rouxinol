#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;

int n, a[100001];
int dp[100001];

//LIS

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	fill(dp, dp + n, INF);
	for (int i = 0; i < n; i++) {
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
	return 0;
}

/*
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i]) {
				dp[i] = max(dp[i], dp[j] + 1);;
			}
		}
		res = max(res, dp[i]);
	}
	cout << res << endl;
	return 0;
}
*/
