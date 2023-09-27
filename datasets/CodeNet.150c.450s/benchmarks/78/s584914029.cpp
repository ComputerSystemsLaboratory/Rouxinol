#include<iostream>
#include<algorithm>

using namespace std;

int N;
int dp[1000001], dpodd[1000001];

int main() {

	//前計算でdpテーブルを計算。8sもあるのでオーダーは怪しいけど大丈夫のはず
	for (int i = 1; i <= 1000000; i++)dp[i] = 1 << 29, dpodd[i] = 1 << 29;

	dp[0] = 0, dpodd[0] = 0;
	for (int i = 1;; i++) {
		int cur = i * (i + 1) * (i + 2) / 6;
		
		if (cur > 1000000)break;

		for (int j = cur; j <= 1000000; j++) {
			if (cur % 2 == 1) {

				dpodd[j] = min(dpodd[j], dpodd[j - cur] + 1);
			}

			dp[j] = min(dp[j], dp[j - cur] + 1);
		}

	}

	while (1) {
		cin >> N;
		if (N == 0)break;
		cout << dp[N] << " " << dpodd[N] << endl;
	}
	return 0;
}
