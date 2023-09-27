#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
const ld eps = 1e-9;

int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		vector<int>v(N);
		for (int i = 0; i < N; ++i) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());

		int ans = INT_MAX;
		for (int i = 0; i < N - 1; ++i) {
			ans = min(ans, v[i + 1] - v[i]);
		}
		cout << ans << endl;
	}
	return 0;
}