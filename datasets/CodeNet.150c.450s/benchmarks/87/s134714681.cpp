#include "bits/stdc++.h"
using namespace std;
#define int long long
#define REP(i, s, n) for (signed i = (s); i < signed(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(c) (c).begin(), (c).end()

using VV = vector<vector<int>>;
using V = vector<int>;
using P = pair<int, int>;
using IP = pair<int, P>;

const double EPS = 1e-9;

signed main() {
	int h;
	while (cin >> h && h) {
		VV board(h, V(5));
		rep(i, h) rep(j, 5) cin >> board[i][j];
		int score = 0;

		while (true) {
			int added = 0;
			VV next = board;
			rep(i, h) rep(j, 3) {
				if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2]) {
					added += next[i][j] + next[i][j + 1] + next[i][j + 2];
					next[i][j] = next[i][j + 1] = next[i][j + 2] = 0;
				}
			}
			score += added;
			board = next;

			rep(j, 5) {
				int shift = 0;
				for (int i = h - 1; i >= 0; i--) {
					int tmp = board[i][j];
					board[i][j] = 0;
					board[i + shift][j] = tmp;
					shift += tmp == 0;
				}
			}

			if (added == 0) break;
		}

		cout << score << endl;
	}
}