#include <bits/stdc++.h>
#define maxn 205
#define maxk 60
using namespace std;

int T, n;
long long a[maxn];
string s;

int bits[maxk][maxn], choice[maxk], N = 0;

void add(long long target) {
	for (int i = 0; i < maxk; i++) {
		bits[i][N] = (target & (1LL << i)) ? 1 : 0;
	}
	for (int i = 0; i < maxk; i++) if (bits[i][N]) {
		for (int col = 0; col < N; col++) if (bits[i][col]) {
			bool is_valid = true;
			for (int row = 0; row < i; row++) if (bits[row][col]) {
				is_valid = false;
				break;
			}
			if (!is_valid) {
				continue;
			}
			for (int row = 0; row < maxk; row++) {
				bits[row][N] ^= bits[row][col];
			}
			break;
		}
	}
	N++;
}

bool solve(long long target) {
	for (int i = 0; i < maxk; i++) {
		choice[i] = (target & (1LL << i)) ? 1 : 0;
	}

	for (int i = 0; i < maxk; i++) if (choice[i]) {
		for (int col = 0; col < N; col++) if (bits[i][col]) {
			bool ok = true;
			for (int row = 0; row < i; row++) if (bits[row][col]) {
				ok = false;
			}
			if (!ok) {
				continue;
			}
			for (int row = 0; row < maxk; row++) choice[row] ^= bits[row][col];
			break;
		}
		if (choice[i]) {
			return false;
		}
	}
	return true;
}

bool solve_case() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> s;

	N = 0;
	for (int i = n - 1; i >= 0; i--) if (s[i] == '0') {
		add(a[i]);
	} else if (!solve(a[i])) {
		return true;
	}
	return false;
}

int main() {
	cin >> T;
	while (T--) {
		cout << solve_case() << endl;
	}
	return 0;
}