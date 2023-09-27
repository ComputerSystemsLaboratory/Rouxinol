#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef vector<int>    VI;
typedef vector<bool>   VB;
typedef vector<string> VS;

#define MP make_pair
#define PB push_back
#define ALL(x)  (x).begin(),(x).end()
#define rep(i, N)  for (int i = 0; i < (int)(N); i++)
#define REP(i, init, N)  for (int i = (init); i < (int)(N); i++)
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define RANGE(x, min, max) min <= x && x <= max

int w, h;
VS tbl;

const int DX[] = {-1, 0, 1, 0}, DY[] = {0, -1, 0, 1};

int dfs(int y, int x) {
	int res = 1;
	tbl[y][x] = '#';
	rep (i, 4) {
		int ny = y + DY[i], nx = x + DX[i];
		if (RANGE(ny, 0, h - 1) && RANGE(nx, 0, w - 1) && tbl[ny][nx] == '.') {
			res += dfs(ny, nx);
		}
	}
	return res;
}

int main(void) {
	while (1) {
		tbl.clear();
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		rep (i, h) {
			string s;
			cin >> s;
			tbl.PB(s);
		}
		int sy, sx;
		rep (i, h) rep (j, w) {
			if (tbl[i][j] == '@') {
				sy = i;
				sx = j;
				break;
			}
		}
		cout << dfs(sy, sx) << endl;	
	}
    return 0;
}