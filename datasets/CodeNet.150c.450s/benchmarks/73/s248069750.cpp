#include <bits/stdc++.h>
using namespace std;

const int bB = 16;
const int B = 1 << bB;

int up(int x) {
	return (x + (1 << bB) - 1) >> bB;
}

int down(int x) {
	return x >> bB;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int n, q;
	cin >> n >> q;
	int H = up(n);
	vector<int> bv(H), v(n);
	while (q--) {
		int com, x, y;
		cin >> com >> x >> y; x--;
		if (com == 0) {
			v[x] += y;
			bv[down(x)] += y;
		}
		else {
			int res = 0;
			for (int i = x; i < y && i < (up(x) << bB); i++) {
				res += v[i];
			}
			if (up(x) <= down(y)) {
				for (int i = up(x); i < down(y); i++) {
					res += bv[i];
				}
				for (int i = down(y) << bB; i < y; i++) {
					res += v[i];
				}
			}
			printf("%d\n", res);
		}
	}
	return 0;
}

