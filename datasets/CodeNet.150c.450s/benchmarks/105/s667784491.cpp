#include <bits/stdc++.h>

using namespace std;
#define int long long
const int MOD = 1000000007;
vector<int> add(vector<int> X, int a) {
	X.push_back(a);
	int cur = 0;
	for (int b = 0; b < 61; b++) {
		int bit = (int)1 << b;
		for (int i = cur; i < X.size(); i++) {
			if (X[i] & bit) {
				for (int j = i + 1; j < X.size(); j++) {
					if (X[j] & bit) {
						X[j] ^= X[i];
					}
				}
				swap(X[i], X[cur]);
				cur++;
				break;
			}
		}
	}
	while (X.size() > 0 && X.back() == 0) X.pop_back();
	return X;
}
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		vector<int> A(N);
		int res = 0;
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
		string S;
		cin >> S;
		vector<int> X;
		for (int i = N - 1; i >= 0; i--) {
			vector<int> Y = add(X, A[i]);
			if (S[i] == '0') {
				X = Y;
			} else {
				if (Y.size() > X.size()) {
					res = 1;
					break;
				}
			}
		}
		cout << res << "\n";
	}
	return 0;
}