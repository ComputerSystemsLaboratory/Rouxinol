#include <iostream>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
const int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };

int cnt = 0;
int w, h;
char tab[101][101];

void dfs(int x, int y, char c){
	tab[y][x] = '.';
	rep(i, 4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < w&&ny >= 0 && ny < h&&tab[ny][nx] == c){
			dfs(nx, ny, c);
		}
	}
}

void solve(){
	rep(i, h){
		rep(j, w){
			cin >> tab[i][j];
		}
	}
	cnt = 0;
	rep(i, h){
		rep(j, w){
			if (tab[i][j] != '.'){
				cnt++;
				dfs(j, i, tab[i][j]);
			}
		}
	}
	cout << cnt << endl;
}

int main(){
	while (1){
		cin >> h >> w;
		if (h == 0 && w == 0) break;
		solve();
	}
}