#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int) n; i++)
#define reps(i, n, m) for (int i = (int) n; i < (int) m; i++)

int w, h;

bool init() {
	cin >> h >> w;
	return w != 0;
}

bool check(int a, int b, int c, int d) {
	int A = a * a + b * b;
	int B = c * c + d * d;
	if (A != B) return A < B;
	return a < c;
}

void solve() {
	int W = 1000, H = 1000;
	reps(i, 1, 200) {
		reps(j, i + 1, 200) {
			if (check(h, w, i, j) && check(i, j, H, W)) {
				H = i;
				W = j;
			}
		}
	}
	cout << H << " " << W << endl;
}

int main() {
	while (init()) {
		solve();
	}
}
