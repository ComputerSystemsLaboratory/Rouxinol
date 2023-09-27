#pragma GCC optmize("Ofast", "unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int issqrt(int d) {
	for (int i = 0; i * i <= d; ++i) {
		if (i * i == d) return i;
	}
	return 0;
}

bool solve() {
	int h, w;
	cin >> h >> w;
	if (h == 0 && w == 0) return false;
	int d = h * h + w * w;
	for (int i = h + 1; i * i < d; ++i) {
		int tmp = d - i * i;
		int sq;
		if (sq = issqrt(tmp)) {
			if (sq <= i) continue;
			cout << i << " " << sq << endl;
			return true;
		}
	}
	while (true) {
		++d;
		for (int i = 1; i * i < d; ++i) {
			int w_ = issqrt(d - i * i);
			if (w_) {
				if (w_ <= i) continue;
				cout << i << " " << w_ << endl;
				return true;
			}
		}
	}
}

int main() {
	while (solve());
	return 0;
}
