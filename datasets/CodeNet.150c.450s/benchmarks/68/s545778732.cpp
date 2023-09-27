#include <iostream>
#include <algorithm>
using namespace std;

int n, a[1000], ans;

int main() {
	while (true) {
		cin >> n;
		if (!n)break;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);

		ans = INT32_MAX;
		for (int i = 0; i < n-1; i++) {
			ans = min(ans, abs(a[i] - a[i + 1]));
		}

		cout << ans << endl;
	}
}
