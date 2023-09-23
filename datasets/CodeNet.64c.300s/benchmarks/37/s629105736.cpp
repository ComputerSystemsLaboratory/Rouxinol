#include <bits/stdc++.h>

using namespace std;

int solve(int N) {
	int ans = 0;
	for (int w = 2; w < N; ++w) {
		for (int i = 1; i < N; ++i) {
			int j = i + w - 1;
			int a0 = i - 1;
			if (a0 * w + w * (w+1) / 2 == N) {
//				cout << i << " " << w << endl;
				++ans;
			}
		}
	}
	return ans;
}
int main() {
	int N;
	while ( cin >> N, N ) {
		cout << solve(N) << endl;
	}
}