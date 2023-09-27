#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	int N, M;
	while (cin >> N >> M, N || M) {
		vector<int> x(N+1, 0), y(M+1, 0);
		for (int i = 0; i < N; ++i) {
			cin >> x[i+1];
			x[i+1] += x[i];
		}
		for (int i = 0; i < M; ++i) {
			cin >> y[i+1];
			y[i+1] += y[i];
		}
		ll ans = 0;
		map<int, int> mx;
		for (int i = 0; i < x.size(); ++i) {
			for (int j = i+1; j < x.size(); ++j) {
				mx[x[j]-x[i]]++;
			}
		}
		for (int i = 0; i < y.size(); ++i) {
			for (int j = i+1; j < y.size(); ++j) {
				ans += mx[y[j]-y[i]];
			}
		}
		cout << ans << endl;
	}
}