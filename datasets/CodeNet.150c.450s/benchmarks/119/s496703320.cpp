#ifndef _WIN32
#include<iostream>
#endif

using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()

typedef vector<int> V;
typedef vector<V> VV;

VV wrap(VV vs,int c) {
	int R = vs.size();
	int C = vs[0].size();
	VV ret(R + 2, V(C + 2, c));
	REP(i, R)REP(j, C)ret[i + 1][j + 1] = vs[i][j];
	return ret;
}
const int dr[] = { 0,0,-1,1 ,1,1,-1,-1};
const int dc[] = { -1,1,0,0, -1,1,-1,1};
VV g;
void dfs(int r,int c) {
	if (g[r][c] == 0)return;
	//cout << "(" << r << "," << c << ")";
	g[r][c] = 0;
	REP(i, 8) {
		int nr = r + dr[i];
		int nc = c + dc[i];
		dfs(nr, nc);
	}
}
int main() {
	int R, C;
	while (cin >> C >> R, C + R) {
		VV in(R,V(C));
		REP(i, R)REP(j,C)cin >> in[i][j];
		g = wrap(in,0);
		int res = 0;
		REP(i, R)REP(j, C) {
			if (g[i + 1][j + 1]) {
				res++;
				dfs(i + 1, j + 1);// cout << endl;
			}
		}

		cout << res << endl;
	}


}