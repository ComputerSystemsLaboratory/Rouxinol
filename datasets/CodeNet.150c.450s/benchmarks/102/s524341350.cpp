#include <cstdio>
#include <cstring>
#include <iostream>

int dxy[]={1,0,-1,0,1};
int ans=0;

char tile[21][21];
int H,W;

void dfs(int x, int y){
	if(tile[x][y]=='.'){
		ans++;
		tile[x][y]='#';
	}
	for(int i = 0; i < 4; ++i){
		int nx = dxy[i] + x, ny = y + dxy[i + 1];
		if(nx < H && nx >= 0 && ny >= 0 && ny < W){
			if(tile[nx][ny] == '.')dfs(nx, ny);
		}
	}
}

int main(){
	while(std::cin>>W>>H && W+H){
		ans = 0;
		memset(tile, '#', sizeof(tile));
		int sx,sy;
		for(int i = 0; i < H; ++i){
			for(int j = 0; j < W; ++j){
				char c;
				std::cin>>c;
				tile[i][j]=c;
				if(tile[i][j] == '@')sx = i, sy = j;
			}
		}
		tile[sx][sy] = '.';
		dfs(sx,sy);
		printf("%d\n",ans);
	}
}