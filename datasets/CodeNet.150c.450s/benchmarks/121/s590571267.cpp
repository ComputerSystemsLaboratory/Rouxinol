#include <iostream>
#include <stdio.h>

using namespace std;

int H, W;
int N = 21;
char map[101][101];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

//現在地(x,y)から深さ優先探索
void dfs(int x, int y){
	char now = map[x][y];
	map[x][y] = '.';
	
	for(int i = 0; i<4; i++){
		int nx = x+dx[i]; int ny = y+dy[i];
			
		if(0 <= nx && nx < H && 0 <= ny && ny <W){
			if(map[nx][ny] == now) dfs(nx,ny);
		}
	}
}

int main(){
	for(int i=0; i<N; i++){
		cin >> H >> W;
		if(H == 0 && W == 0) break;
		
		for(int i=0; i<H; i++){
			for(int j=0; j<W; j++){
				cin >> map[i][j];
			}
		}
		
		int ans = 0;
		for(int i=0; i<H; i++){
			for(int j=0; j<W; j++){
				if(map[i][j] != '.') {
					dfs(i,j);
					ans++;
				}
			}
		}
		
		printf("%d\n", ans);
	}
}
