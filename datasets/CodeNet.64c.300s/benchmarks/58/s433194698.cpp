#include <iostream>
#include <cstdio>
using namespace std;

char map[100][100];
char now;
int h, w;
int dh[] = {1, 0, -1, 0};
int dw[] = {0, 1, 0, -1};

void dfs(int a, int b){
	map[a][b] = '0';
	for(int i = 0; i < 4; i++){
		int na = a + dh[i], nb = b + dw[i];
		if(na >= 0 && na < h && nb >= 0 && nb < w && map[na][nb] == now){
			dfs(na, nb);
		}
	}
	return;
}

int main(void){
	int cnt;
	while(true){
		cnt = 0;
		cin >> h >> w;
		if(!h && !w)	break;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				cin >> map[i][j];
			}
		}

		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				if(map[i][j] == '#' || map[i][j] == '*' || map[i][j] == '@'){
					now = map[i][j];
					dfs(i, j);
					cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}
  return 0;
}