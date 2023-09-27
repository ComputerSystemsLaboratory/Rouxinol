#include <bits/stdc++.h>
using namespace std;

int main()
{
	int R, C;
	while (cin >> R >> C, R | C) {
		vector<int> a(C);
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				int b;
				cin >> b;
				a[j] |= b << i;
			}
		}
		int res = 0;
		for (int i = 0; i < (1 << R); i++) {
			int cnt = 0;
			for (int j = 0; j < C; j++) {
				int x = __builtin_popcount(a[j] ^ i);
				cnt += max(x, R - x);
			}
			res = max(res, cnt);
		}
		cout << res << endl;
	}
	return 0;
}

