#include <cstdio>

int main(){
	int a, b, n, t1, t2, way[17][17];
	while(1){
		scanf("%d %d", &a, &b);
		if(!a && !b)break;
		scanf("%d", &n);
		for(int i = 1;i <= b;i++){
			for(int j = 1;j <= a;j++)way[i][j] = 0;
		}
		for(int i = 0 ;i < n;i++)scanf("%d %d", &t1, &t2), way[t2][t1] = -1;
		for(int i = 1;i <= a;i++){if(way[1][i] == -1)break;way[1][i] = 1;}
		for(int i = 1;i <= b;i++){if(way[i][1] == -1)break;way[i][1] = 1;}
		for(int i = 2;i <= b;i++){
			for(int j = 2;j <= a;j++){
				if(way[i][j] != -1){
					int w = 0, h = 0;
					if(way[i][j-1] != -1)w = way[i][j-1];
					if(way[i-1][j] != -1)h = way[i-1][j];
					way[i][j] = w + h;
				}
			}
		}
		printf("%d\n", way[b][a]);
	}
	return 0;
}