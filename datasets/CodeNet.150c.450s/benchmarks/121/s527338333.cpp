#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 100 + 5;

int h, w;
char map[MAX][MAX];
bool vis[MAX][MAX];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool in(int x, int y){
	return x >= 0 && x < h && y >= 0 && y < w;
}

void dfs(int x, int y){
	vis[x][y] = true;
	for (int i = 0; i < 4; i++){
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(in(xx, yy) && !vis[xx][yy] && map[xx][yy] == map[x][y]){
			dfs(xx, yy);
		}
	}
}

int main(){
	while(cin >> h >> w && h && w){
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> map[i][j];
			}
		}
		int ans = 0;
		memset(vis, false, sizeof(vis));
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if(!vis[i][j]){
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	} 
	return 0;
} 
