#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)
#define all(v) v.begin(),v.end()

using int64 = long long;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int main(void){
	int H, W;
	while(cin >> W >> H && H && W){
		vector<string> f(H+2, string(W+2, '#'));
		int sy, sx;
		REP(i, H){
			cin >> f[i+1];
			REP(j, W)
				if(f[i+1][j] == '@'){
					sy = i+1;
					sx = j+1;
				}
			f[i+1] = '#'+f[i+1]+'#';
		}
		bool visited[30][30] = {};
		int cnt = 0;
		
		function<void(int, int)> dfs = [&](int y, int x){
			visited[y][x] = 1;
			cnt++;
			REP(i, 4){
				int yy = y+dy[i], xx = x+dx[i];
				if(f[yy][xx] != '#' && !visited[yy][xx]){
					dfs(yy, xx);
				}
			}
		};
		dfs(sy, sx);
		cout << cnt << endl;
	}
}
