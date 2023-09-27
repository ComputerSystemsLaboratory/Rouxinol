#include <cstdio>
#include <iostream>

using namespace std;

int w, h;
int d1[4] = {1, -1, 0, 0};
int d2[4] = {0, 0, 1, -1};
char room[105][105];

void dfs(int x, int y, char c){
	room[x][y] = 'X';
	int xx, yy;
	for(int i = 0; i < 4; i++){
		xx = x + d1[i];
		yy = y + d2[i];
		if(0 <= xx && xx < h && 0 <= yy && yy < w && room[xx][yy] == c){
			dfs(xx, yy, c);
		} 
	}
}

int main(){
	while(scanf("%d %d", &h, &w) == 2){
		if(!h && !w){
			break;
		}
        getchar();
		for(int i = 0; i < h; i++){
			scanf("%s", room[i]);
		}
		int res = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(room[i][j] != 'X'){
					dfs(i, j, room[i][j]);
					res++;
				}
			}
		}
		printf("%d\n", res);
	}
	return 0;
}