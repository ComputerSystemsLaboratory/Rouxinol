#include <bits/stdc++.h>

using namespace std;

int N;

void solve() {
	int ans = 0;
	
	for (int i = 1; i <= N / 2; i++) {
		int sum = 0;
		for (int j = i; sum < N; j++) {
			sum += j;
		}
		if (sum == N) ans++;
	}
	
	cout << ans << endl;
}

int main() {
	while (1) {
		cin >> N; if (N == 0) break;
		solve();
	}
	
	return 0;
}