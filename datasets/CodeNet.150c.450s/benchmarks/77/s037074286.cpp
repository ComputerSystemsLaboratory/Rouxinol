#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double EPS = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int N, M;

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	while (cin >> N, N) {
		int table[21][21];
		rep(i, 21) rep(j, 21) table[i][j] = 0;
		int py = 10, px = 10;
		rep(i, N) {
			int x, y;
			cin >> x >> y;
			table[20 - y][x] = 1;
		}
		cin >> M;
		int cnt = 0;
		rep(i, M) {
			char d; int l;
			cin >> d >> l;
			switch (d) {
			case 'N':
				rep(i, l) {
					py--;
					if (table[py][px] == 1) {
						cnt++;
						table[py][px] = 0;
					}
				}
				break;
			case 'S':
				rep(i, l) {
					py++;
					if (table[py][px] == 1) {
						cnt++;
						table[py][px] = 0;
					}
				}
				break;
			case 'E':
				rep(i, l) {
					px++;
					if (table[py][px] == 1) {
						cnt++;
						table[py][px] = 0;
					}
				}
				break;
			case 'W':
				rep(i, l) {
					px--;
					if (table[py][px] == 1) {
						cnt++;
						table[py][px] = 0;
					}
				}
				break;
			}
		}
		if (cnt == N) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}