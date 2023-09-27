#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <cctype>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector<vector<bool>> VVB;
typedef pair<int,int> PII;
typedef pair<char,int> PCI;

const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};

#define process first
#define movecnt second

int N, M;
VVB area;
vector<PCI> ms;
int posx, posy;

bool check () {
	rep (i, area.size()) {
		rep (j, area[i].size()) {
			if (area[i][j]) return false;
		}
	}
	return true;
}

void move (int movex, int movey, int cnt) {
	rep (i, cnt) {
		if (xyrange(posx, 0, 20, posy, 0, 20)) {
			posx += movex;
			posy += movey;
			area[posy][posx] = false;
		}
	}
}

bool solve () {
	posx = posy = 10;
	area[posy][posx] = false;
	for (auto &m : ms) {
		switch (m.process) {
			case 'N':
				move(0, 1, m.movecnt);
				break;
			case 'S':
				move(0, -1, m.movecnt);
				break;
			case 'E':
				move(1, 0, m.movecnt);
				break;
			case 'W':
				move(-1, 0, m.movecnt);
				break;

		}
	}
	return check();
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (cin >> N, N) {
		area.clear();
		area.resize(21, VB(21, false));
		ms.clear();
		rep (i, N) {
			int x, y;
			cin >> x >> y;
			area[y][x] = true;
		}
		cin >> M;
		rep (i, M) {
			PCI m;
			cin >> m.process >> m.movecnt;
			ms.pb(m);
		}

		cout << (solve()? "Yes" : "No") << endl;
	}
	return 0;
}