#include<stdio.h>

int main(void){	
	int a,b,n;
	while(scanf("%d%d", &a, &b) && a && b){
		int x,y;
		int road[32][32]={0};
		int stop[32][32]={0};
		
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d%d",&x, &y);
			stop[y][x] = 1;
		}
		road[0][1] = 1;
		
		for(int i = 1 ; i <=b; i++){
			for(int j = 1 ;j <= a; j++){
				if(stop[i][j] == 0){
					road[i][j] = road[i-1][j]+road[i][j-1];
				}
			}
		}
		
		printf("%d\n",road[b][a]);
	}
	return 0;
}

/*
					road[i+1][j] += road[i][j];
					road[i][j+1] += road[i][j];
					*/