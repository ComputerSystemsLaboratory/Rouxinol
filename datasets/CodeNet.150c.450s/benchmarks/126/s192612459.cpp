#include <stdio.h>

int main(void){
	int a,b;
	int i,j;
	while(scanf("%d%d",&a,&b),a,b){
		int n,x,y;
		int road[20][20]={0};
		
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				road[i][j]=1;
			}
		}
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d%d",&x,&y);
			road[x][y]=0;
		}
		
		road[0][1]=1;
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				if(road[i][j]!=0){
					road[i][j]=road[i-1][j]+road[i][j-1];
				}
			}
		}
		
		printf("%d\n",road[a][b]);
	}
	return 0;
}