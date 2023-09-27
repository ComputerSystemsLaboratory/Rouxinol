#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			break;
		}
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int ans = a[1] - a[0];
		for (int i = 0; i < n - 1; i++) {
			ans = min(ans, a[i + 1] - a[i]);
		}
		cout << ans << endl;
	}
	return 0;
}