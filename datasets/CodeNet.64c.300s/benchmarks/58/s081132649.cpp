#include<cstdio>
#include<memory.h>
bool flag[110][110];
char map[110][110];
int ans;
int w, h, ix, iy;
bool dfs(int x,int y,char c){
	if (flag[x][y] || (x < 0) || (x >= h) || (y < 0) || (y >= w) || (map[x][y] != c))
		return false;
	flag[x][y] = true;
	dfs(x-1, y, c);
	dfs(x+1, y, c);
	dfs(x, y+1, c);
	dfs(x, y-1, c);
	return true;
}

int main(){
	while((scanf("%d%d", &h, &w) != EOF) && w && h){
		char tc;
		tc = getchar();
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				scanf("%c", &map[i][j]);
			}
			tc = getchar();
		}
		ans = 0;
		memset(flag,0,sizeof(flag));
		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++)
				if(dfs(i, j, map[i][j]))ans++;
		printf("%d\n",ans);
	}
	return 0;
}