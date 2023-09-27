#include <cstdio>

int w, h;
int c[50][50];

void dfs(int a, int b){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			int A = a+i-1, B = b+j-1;
			if(0<=A&&A<w&&0<=B&&B<h&&c[A][B]){
				c[A][B] = 0;
				dfs(A,B);
			}
		}
	}
}

int main(){
	while(scanf("%d%d", &w, &h),w||h){
		int ans = 0;
		for(int i = 0; i < h; i++){
			for(int j = 0; j < w; j++){
				scanf("%d", &c[j][i]);
			}
		}
		for(int i = 0; i < w; i++){
			for(int j = 0; j < h; j++){
				if(c[i][j]){
					c[i][j] = 0;
					ans++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n", ans);
	}
}