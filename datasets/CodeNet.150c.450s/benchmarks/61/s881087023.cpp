#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, A, B, C, X;
	while (true) {
		cin >> N >> A >> B >> C >> X;
		if (N + A + B + C + X == 0)break;
		vector<int> Y(N);
		for (int i = 0; i < N;i++) cin >> Y[i];
		int ans = 0;
		while (!Y.empty()) {
			if (Y[0] == X) {
				Y.erase(Y.begin());
				if (Y.empty()) break;
			}
			if (ans == 10000) { ans = -1; break; }
			X = (A*X + B) % C;
			ans++;
		}
		cout << ans << endl;
	}
}