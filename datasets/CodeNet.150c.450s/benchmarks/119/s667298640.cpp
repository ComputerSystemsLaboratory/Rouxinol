#include <cstdio>

using namespace std;

char mp[60][60] = {0};
int dx[9] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[9] = {1, -1, 0, 0, 1, -1,-1,  1};

void def(int y, int x){
	mp[y][x] = 0;
	for (int i = 0; i < 8; i++){
		int ty = y + dy[i];
		int tx = x + dx[i];
		if (mp[ty][tx] == '1') def(ty, tx);
	}
}

int main()
{
	int w, h;
	int pi, pj;
	int cnt;
	while (scanf("%d %d", &w, &h), !(w == 0 && h == 0)){
		cnt = 0;
		
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				scanf("%s", &mp[i][j]);
			}
		}
		
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (mp[i][j] == '1'){
					def(i, j);
					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
}