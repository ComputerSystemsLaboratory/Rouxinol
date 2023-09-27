#pragma GCC optimize("Ofast", "unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

//#define TEST

void show_b(vector<vector<int>> b) {
#ifdef TEST
	for (int i = 0; i < b.size(); ++i) {
		for (int j = 0; j < 5; ++j) cout << b[i][j] << " ";
		cout << endl;
	}
#endif
}

bool solve() {
	int H; cin >> H;
	if (H == 0) return false;
	vector<vector<int>> b(H, vector<int>(5));
	for (int i = 0; i < H; ++i)
		for (int j = 0; j < 5; ++j)
			cin >> b[i][j];
	bool deleted; int res = 0;
	do {
		vector<vector<int>> newb(H, vector<int>(5, 0));
		deleted = false;
		for (int i = 0; i < H; ++i) {
			for (int j = 0; j < 5; ++j) {
				if (j >= 2 && b[i][j] == b[i][j - 1] && b[i][j - 1] == b[i][j - 2]) {
					if (b[i][j]) deleted = true;
					newb[i][j] = b[i][j];
					for (int jj = j; jj >= j - 2; --jj) {
						res += newb[i][jj];
						newb[i][jj] = 0;
					}
				}
				else newb[i][j] = b[i][j];
			}
		}
		for (int i = H - 1; i > 0; --i) {
			for (int j = 0; j < 5; ++j) {
				if (newb[i][j] == 0) {
					int ptr = i - 1;
					while (ptr >= 0 && newb[ptr][j] == 0) --ptr;
					if (ptr >= 0) {
						newb[i][j] = newb[ptr][j];
						newb[ptr][j] = 0;
					}
				}
			}
		}
		b = newb;
		show_b(b);
	} while (deleted);
	cout << res << endl;
	return true;
}

int main() {
	while (solve());
	return 0;
}
