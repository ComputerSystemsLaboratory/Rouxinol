#include "bits/stdc++.h"
using namespace std;

#define ASC(vec) vec.begin(), vec.end()		// 昇順ソート 例：sort(ASC(vec));
#define DESC(vec) vec.rbegin(), vec.rend()	// 降順ソート 例:sort(DESC(vec));
#define rep(i, n) for(int i = 0; i < (n); i++)
#define Rep(i, n) for(int i = 1; i < n; i++)

const int mod = 1000000007;
const int inf = (1 << 21);
const long long INF = 1LL << 60;

using ii = pair<int, int>;
using ll = long long;
using vi = vector<int>;
using vd = vector<double>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vii = vector<pair<int, int>>;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
ll LCM(ll a, ll b) { return (a * b) / GCD(a, b); }
int round_int(int a, int b) { return (a + (b - 1)) / b; }

constexpr array<int, 9> dx = { 0, 1, 0, -1, -1, 1, 1, -1, 0 };
constexpr array<int, 9> dy = { 1, 0, -1, 0, 1, 1, -1, -1, 0 };

// ──────────────────────────────────────────────────────────────────

int t[10][5], h;

int check() {
	int row, col, len, i;
	int score = 0;

	for (row = 0; row < h; row++) {
		for (col = 0; col <= 2; col++) {
			for (len = 1; col + len <= 4; len++) {
				if (t[row][col] != t[row][col + len]) break;
			}
			if (len <= 2) continue;
			score += t[row][col] * len;
			for (int i = 0; i < len; ++i) t[row][col + i] = 0;
		}
	}
	return score;
}

void down() {
	int col, row, min;
	for (col = 0; col < 5; ++col) {
		for (min = 1; min < h; ++min) {
			for (row = h - 1; row >= min; row--) {
				if (t[row][col] == 0) {
					t[row][col] = t[row - 1][col];
					t[row - 1][col] = 0;
				}
			}
		}
	}
}

int main() {
	int i, j;
	int score, cs;
	while (true) {
		cin >> h;
		if (h == 0) break;

		for (i = 0; i < h; ++i) {
			for (j = 0; j < 5; ++j) {
				cin >> t[i][j];
			}
		}
		score = 0;
		while (true) {
			cs = check();
			//cout << cs << endl;
			if (cs == 0) {
				cout << score << endl;
				break;
			}
			score += cs;
			down();
		}
	}
}
