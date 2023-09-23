#include <cstdio>
using namespace std;

int h, w;
char a[101][101];
int ans;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dfs(int x, int y, int z){
	if(0 <= x && x < h && 0 <= y && y < w && z == a[x][y]){
		a[x][y] = '/';
		for(int i=0; i<4; i++){
			dfs(x+dx[i], y+dy[i], z);
		}
	}
	return 0;
}

int main(){
	while(1){
		scanf("%d %d", &h, &w);
		if(h == 0 && w == 0) break;
		for(int i=0; i<h; i++){
			scanf("%s", a[i]);
		}
		ans = 0;

		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				if(a[i][j] == '@' || a[i][j] == '#' || a[i][j] == '*'){
					ans++;
					dfs(i, j, a[i][j]);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}