#include <iostream>
#include <cstdio>
using namespace std;

int map[50][50];
int w, h;

void dfs(int x, int y){
	map[y][x] = 0;
	for(int i = -1; i <= 1; i++){
		for(int j = -1; j <= 1; j++){
			int nx = x + i, ny = y + j;
			if(nx >= 0 && nx < w && ny >= 0 && ny < h && map[ny][nx] == 1)	dfs(nx, ny);
		}
	}
	return;
}

int main(void){
	int cnt;
	while(true){
		cin >> w >> h;
		if(!w && !h)	break;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> map[i][j];
			}
		}
		cnt = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(map[i][j] == 1){
					dfs(j, i);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
  return 0;
}