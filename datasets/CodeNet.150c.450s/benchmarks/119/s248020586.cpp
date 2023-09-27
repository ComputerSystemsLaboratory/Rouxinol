#include <bits/stdc++.h>
#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)
#define _all(arg) begin(arg),end(arg)

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0; }
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0; }

using namespace std;
using vi=vector<int>;
using vii=vector<vi>;

const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int w, h;

int dfs(vii &m, int pos_h, int pos_w) {
	int res = 0;
	if(0 <= pos_h && pos_h < h
	&& 0 <= pos_w && pos_w < w
	&& m[pos_h][pos_w] == 1) {
		m[pos_h][pos_w] = 0;
		res++;
	}
	else {
		return 0;
	}
	rep(i, 8) {
		res += dfs(m, pos_h+dx[i], pos_w+dy[i]);
	}
	return (res)?1:0;
}

int main(void){
	while(cin >> w >> h, w&&h) {
		vii m(h, vi(w));
		rep(i,h) rep(j,w) { cin >> m[i][j]; }
		int res = 0;
		rep(i,h) rep(j,w) res += dfs(m, i, j);
		cout << res << endl;
	}
	return 0;
}