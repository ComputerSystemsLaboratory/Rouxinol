#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q, com, x, y;
	cin >> n >> q;
	vector<int> seg(n + 1, 0);
	while (q--) {
		cin >> com >> x >> y;
		if (com) {
			int sum = 0;
			for (int i = y;i > 0; i = i & (i - 1))
				sum += seg[i];
			for (int i = x - 1; i > 0; i = i & (i - 1))
				sum -= seg[i];
			cout << sum << endl;
		}
		else
			for (int i = x;i <= n; i += (i & -i))
				seg[i] += y;
	}
	return 0;
}