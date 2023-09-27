#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
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
const double eps = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, -1, 0, 1};

int W, H;
int ans;
string field[100];

void dfs(int y, int x) {
	if (x < 0 || y < 0 || x == W || y == H) return;
	if (field[y][x] == '#') return;
	ans++;
	field[y][x] = '#';
	rep(i, 4) dfs(y + dy[i], x + dx[i]);
}

int main() {
	while (cin >> W >> H, W) {
		ans = 0;
		rep(i, H) cin >> field[i];
		rep(i, H) rep(j, W) {
			if (field[i][j] == '@') dfs(i, j);
		}
		cout << ans << endl;
	}
	return 0;
}