#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		vector<int> a(n);
		for (int& i : a) cin >> i;
		sort(a.begin(), a.end());
		int ans = INT_MAX;
		for (int i = 1; i < n; ++i) ans = min(a[i] - a[i - 1], ans);
		cout << ans << endl;
	}
}
