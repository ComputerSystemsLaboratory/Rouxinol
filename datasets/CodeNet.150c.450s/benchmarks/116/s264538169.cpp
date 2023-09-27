#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int> DpSum;

int solve() {
	int sum;

	sum = -1000000001;
	for (int i = 1; i + K <= N; ++i) {
		sum = max(sum, DpSum[i + K] - DpSum[i]);
	}

	return sum;
}

int main() {
	int a;

	while (cin >> N >> K, N) {
		DpSum.clear();
		DpSum.resize(N + 1);
		DpSum[0] = 0;
		for (int i = 1; i <= N; ++i) {
			cin >> a;
			DpSum[i] += DpSum[i - 1] + a;
		}
		cout << solve() << endl;
	}

	return 0;
}
