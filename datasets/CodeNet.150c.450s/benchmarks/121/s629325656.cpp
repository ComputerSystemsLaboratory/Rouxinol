#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int x[4] = {-1,0,1,0};
int y[4] = {0,-1,0,1};
void dfs(vector<vector<char> > &v, int i, int j, char c) {
	if(v[i][j] == c) {
		v[i][j]= 0;
		rep(k,4) {
			dfs(v, i+x[k], j+y[k], c);
		}
	} else return;
}
int main() {
	int h, w;
	while(cin >> h >> w && (h || w)) {
		vector<vector<char> > v(h+2);
		rep(i,h+2) {
			vector<char> va(w+2);
			v[i] = va;
		}
		rep(i,h) {
			string s;
			cin >> s;
			rep(j,w) {
				v[i+1][j+1] = s[j];
			}
		}
		int cnt = 0;
		rep2(i,1,h+1) {
			rep2(j,1,w+1) {
				if(v[i][j]) {
					cnt++;
					char ch = v[i][j];
					dfs(v, i, j, ch);
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}