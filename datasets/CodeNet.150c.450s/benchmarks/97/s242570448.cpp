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

vector<VB> tbls;
map<int, pair<int, int>> ps;
int n;

const int offsetx = 201;
const int offsety = 201;
const int INF = INT_MAX / 2;
const int DX[] = {-1, 0, 1, 0}, DY[] = {0, 1, 0, -1};

#define x first
#define y second

int main(void) {
	while (1) {
		tbls.clear();
		ps.clear();
		cin >> n;
		if (n == 0) break;
		tbls.resize(410, VB(410));
		tbls[offsety][offsetx] = true;
		ps[0] = MP(offsetx, offsety);
		REP (i, 1, n) {
			int s, d;
			cin >> s >> d;
			pair<int, int> p = ps[s];
			tbls[p.y + DY[d]][p.x + DX[d]] = true;
			ps[i] = MP(p.x + DX[d], p.y + DY[d]);
		}
		int min_x = INF, min_y = INF;
		int max_x = -1, max_y = -1;
		rep (y, 410) {
			rep (x, 410) {
				if(tbls[y][x]) {
					min_x = min(min_x, x);
					min_y = min(min_y, y);
					max_x = max(max_x, x);
					max_y = max(max_y, y);
				}
			}
		}
		cout << max_x - min_x + 1 << " " << max_y - min_y + 1 << endl;
	}
    return 0;
}