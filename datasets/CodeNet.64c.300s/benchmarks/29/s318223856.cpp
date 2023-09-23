#include <bits/stdc++.h>

using namespace std;

int e;

void solve() {
	int m = e;
	
	for (int y = 0; y * y <= e; y++) {
		for (int z = 0; z * z * z <= e; z++) {
			int x = e - (y * y) - (z * z * z);
			if (0 <= x) {
				m = min(m, x + y + z);
			}
		}
	}
	
	cout << m << endl;
}

int main() {
	while (1) {
		cin >> e; if (e == 0) break;
		solve();
	}
	
	return 0;
}