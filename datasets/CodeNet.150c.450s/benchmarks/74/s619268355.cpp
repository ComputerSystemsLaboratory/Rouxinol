#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int i, j, n, m, c[21], dp[50002] = {};

	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> c[i];
	}

	for (i = 0; i < m; i++) {
		j = 0;
		while (j + c[i] <= n) {
			if(dp[j + c[i]])dp[j + c[i]] = min(dp[j + c[i]], dp[j] + 1);
			else dp[j + c[i]] = dp[j] + 1;
			j++;
		}
	}

	cout << dp[n] << endl;



	return 0;
}