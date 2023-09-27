/*
 * 角角画伯，かく悩みき
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1165&lang=jp
 *
 * 【メモ】
 * 座標の大きさが動的に変わるような座標シュミレート問題は
 * （例えば渦を巻いたり，縦横に予測できない動きをしたりするような問題）
 * 座標から配列の要素にアクセスするのではなく(map[x][y])，
 * 座標の要素としてためて(map.push_back(x); map_y.push_back(y);)から使う．
 */
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#include<sstream>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } //t=min
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } //t=max
using namespace std;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

int main() {
	int N;
	int n,d;
	int max_height,max_width;
	int min_height,min_width;
	vector<int> map_x;
	vector<int> map_y;

	while(cin >> N, N) {
		max_height = max_width=0;
		min_height = min_width=INT_MAX;
		map_x.clear(); map_y.clear();
		map_x.push_back(0); //0,0座標にIndex番号0を入る
		map_y.push_back(0);

		rep(i,N-1) {
			cin >> n >> d; //d=方向
			int x = map_x[n] + dx[d];
			int y = map_y[n] + dy[d];
			map_x.push_back(x); //座標をpushする
			map_y.push_back(y);
		}
		rep(i,map_x.size()) {
			chmax(max_width,map_x[i]);
			chmin(min_width,map_x[i]);
			chmax(max_height,map_y[i]);
			chmin(min_height,map_y[i]);
		}
		cout << max_width-min_width+1 << " " << max_height-min_height+1 << endl;
	}

	return 0;
}