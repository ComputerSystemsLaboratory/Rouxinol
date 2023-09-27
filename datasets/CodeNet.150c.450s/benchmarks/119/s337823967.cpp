#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

using namespace std;

void dfs(vector<vector<int> > &v,int x,int y) {
	v[x][y] = 0;
	REP(i, 8) {
		int nx = x + dx[i], ny = y+dy[i];
		if (nx >= 0 && ny >= 0 && nx < v.size() && ny < v[0].size() && v[nx][ny] == 1) {

			dfs(v, nx, ny);
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	while (1) {
		int w, h, cnt = 0;
		cin >> w >> h;
		if (!w) break;
		vector<int> dm(w);
		vector<vector<int> > v(h, dm);
		REP(i, h)REP(j, w) cin >> v[i][j];
		REP(i, h)REP(j, w)
			if (v[i][j] == 1) {
				dfs(v, i, j);
				cnt++;
			}
		cout << cnt << endl;
	}
	return 0;
}