#include <bits/stdc++.h>
using namespace std;

constexpr int INF = (1 << 30);

int main() {
	int n;
	cin >> n;
	vector<int> dp(n + 1, INF);
	
	for (int i = 0; i < n; i++) {
		int e;
		cin >> e;
		*lower_bound(dp.begin(), dp.end(), e) = e;
	}
	
	cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << '\n';
	
	return 0;
}
