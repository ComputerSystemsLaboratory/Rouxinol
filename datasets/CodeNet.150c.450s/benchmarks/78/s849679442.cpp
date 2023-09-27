#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
int tri[200];
int dp[MAX], o_dp[MAX];

int main()
{
	for (int i = 0; i < 200; i++) {
		tri[i] = i*(i + 1)*(i + 2) / 6;
	}

	dp[0] = 0;
	o_dp[0] = 0;

	for (int i = 1; i < MAX; i++) {
		dp[i] = i;
		o_dp[i] = i;

		for (int j = 1; i - tri[j] >= 0; j++) {
			dp[i] = min(dp[i], dp[i - tri[j]] + 1);

			if (tri[j] % 2 == 1) {
				o_dp[i] = min(o_dp[i], o_dp[i - tri[j]] + 1);
			}
		}
	}

	while (true) {
		int n;
		cin >> n;

		if (n == 0) {
			break;
		}

		cout << dp[n] << " " << o_dp[n] << endl;
	}

	return 0;
}