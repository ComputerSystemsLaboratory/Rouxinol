#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	for (int t = 0; t < n; ++t) {
		int a[10];
		for (int i = 0; i < 10; ++i) cin >> a[i];

		bool ans = false;
		for (int k = 0; k < (1 << 10); ++k) {
			int top[2] = {-1, -1};
			bool f = true;
			for (int i = 0; i < 10; ++i) {
				int tid = k & (1 << i) ? 1 : 0;
				if (a[i] < top[tid]) {
					f = false;
					break;
				}
				top[tid] = a[i];
			}
			ans |= f;
		}

		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}