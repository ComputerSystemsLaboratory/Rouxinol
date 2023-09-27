#ifndef _WIN32
#include<iostream>
#endif
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

#define FOR(i,bg,ed) for(int i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
typedef vector<string> VS;
VS wrap(VS v,char c) {
	int R = v.size(), C = v[0].size();
	VS ret(R + 2, string(C + 2, c));
	REP(i, R)REP(j, C)ret[i + 1][j + 1] = v[i][j];
	return ret;
}
int res ;
const int dr[] = { 0,0,1,-1 };
const int dc[] = { 1,-1,0,0 };

void f(int r, int c,VS&x) {
	if (x[r][c] == '#')return;
	res++;
	x[r][c] = '#';
	REP(i, 4) {
		f(r + dr[i], c + dc[i], x);
	}
}
int main() {
	int R, C;
	while (cin >> C >> R, R + C) {
		VS in(R);
		REP(i, R)cin >> in[i];
		in = wrap(in, '#');
		int sr, sc;
		REP(i, R + 2)REP(j, C + 2)if (in[i][j] == '@')sr = i, sc = j;
		res = 0;
		f(sr, sc, in);
		cout << res << endl;

	}
}