#include<stdio.h>
#include<string.h>
char gra[110][110];
int m, n;
int dirx[] = {0, 0, -1, 1},diry[] = {-1,1,0,0}, ans;

void DFS(int r,int c,char k){
	gra[r][c] = 0;
	for(int i = 0; i < 4; i++){
		int dr = r + dirx[i];
		int dc = c + diry[i];
		if(dr >= 0 && dr<m && dc >= 0 && dc < n && gra[dr][dc] == k){
			DFS(dr, dc, k);
		}
	}
}

int main(){
	while(scanf("%d%d", &m, &n) && m+n){
		for(int i = 0;i < m; i++){
			scanf("%s", gra[i]);
		}
		ans = 0;
		for(int i = 0;i < m; i++){
			for(int j = 0; j < n; j++){
				if(gra[i][j]){
					ans++;
					DFS(i, j, gra[i][j]);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
