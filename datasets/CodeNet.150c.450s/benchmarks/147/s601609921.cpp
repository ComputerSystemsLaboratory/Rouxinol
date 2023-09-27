#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, ans[N];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int x = 1; x * x <= n; x++) {
		for (int y = 1; y * y <= n; y++) {
			for (int z = 1; z * z <= n; z++) {
				int f = 0;
				f += x * x + y * y + z * z;
				f += x * y + y * z + z * x;
				ans[f] += 1;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << ans[i] << '\n';
	}

	return 0;
}
