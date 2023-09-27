#include <bits/stdc++.h>
using namespace std;

const int N = 10005;

int ans[N];

int main() {
	for (int x = 1; x <= 100; x ++)
	for (int y = 1; y <= 100; y ++)
	for (int z = 1; z <= 100; z ++) {
		int val = x * x + y * y + z * z + x * y + y * z + x * z;
		if (val < N) ans[val] ++;
	}
	int n; cin >> n;
	for (int i = 1; i <= n; i ++) cout << ans[i] << endl;
	return 0;
}
