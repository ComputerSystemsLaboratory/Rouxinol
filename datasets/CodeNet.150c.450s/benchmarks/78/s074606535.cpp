#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int lim = 1000000;
	int dp[lim],odp[lim];
	for (int i = 0; i < lim; ++i) {
		dp[i] = i;
		odp[i] = i;
	}

	int num = 4;
	for (int now = 2; num < lim; ++now) {
		for (int i = num; i < lim; ++i) {
			dp[i] = min(dp[i],dp[i-num]+1);
		}
		if (num%2 == 1) {
			for (int i = num; i < lim; ++i) {
				odp[i] = min(odp[i],odp[i-num]+1);
			}
		}
		num = ((now+1)*(now+2)*(now+3))/6;
	}

	int n;
	while (cin >> n, n) {
		cout << dp[n] << " " << odp[n] << endl;
	}

	return 0;
}