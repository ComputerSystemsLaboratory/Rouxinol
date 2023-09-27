#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};

int W, H, maze[64][64];
bool visited[64][64];

bool check(int x, int y){
	return x >= 0 && x < W && y >= 0 && y < H && maze[y][x] == 1 && !visited[y][x];
}

void dfs(int x, int y){
	visited[y][x] = true;
	
	for(int i = 0; i < 8; ++i){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(check(nx, ny)){
			dfs(nx, ny);
		}
	}
	return;
}

int main() {
	while(cin >> W >> H && (W || H)){
		memset(visited, 0, sizeof(visited));
		
		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				scanf("%d", &maze[i][j]);
			}
		}
		int ans = 0;
		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				if(maze[i][j] == 1 && !visited[i][j]){
					ans++;
					dfs(j, i);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}