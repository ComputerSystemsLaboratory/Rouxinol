#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

int a[100000];

int main() {
	int n, k;
	
	while (cin >> n >> k && n != 0) {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int sum = 0, ans = 1 << 31;
		for (int l = 0, r = 0; r < n; ++r) {
			if (r - l == k) {
				ans = max(ans, sum);
				sum -= a[l++];
			}
			sum += a[r];
		}
		cout << ans << endl;
	}

	return 0;
}