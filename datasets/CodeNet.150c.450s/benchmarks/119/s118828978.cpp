#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<vector<int>>    VVI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define RANGE(x, min, max) min <= x && x <= max

const int DX[] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int DY[] = {-1, -1, -1, 0, 0, 1, 1, 1};

int w, h;
VVI cs;

void dfs(int y, int x) {
	cs[y][x] = 0;
	rep (i, 8) {
		int ny = y + DY[i];
		int nx = x + DX[i];
		if (RANGE(nx, 0, w - 1) && RANGE(ny, 0, h - 1) && cs[ny][nx]) {
			dfs(ny, nx);
		}
	}
}

int main(void) {
	while (1) {
		cs.clear();
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		cs.resize(h, VI (w));
		rep (i, h) rep (j, w) {
			cin >> cs[i][j];
		}
		int ans = 0;
		rep (i, h) rep (j, w) {
			if (!cs[i][j]) continue;
			dfs(i, j);
			ans++;
		}
		cout << ans << endl;
	}
    return 0;
}