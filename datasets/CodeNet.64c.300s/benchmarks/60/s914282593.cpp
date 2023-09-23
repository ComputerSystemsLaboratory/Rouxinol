#include <stdio.h>

int main(void){
	while(1){
		int n,i,j,a,b;
		int masu[20][20]={0};
		int ura[20][20]={0};
		int bad[2];
		
		scanf("%d %d", &a, &b);
		if(a==0)break;
		scanf("%d",&n);
		
		
		for(i=0;i<n;i++){
			scanf("%d %d", &bad[0], &bad[1]);
			ura[bad[0]][bad[1]]=1;
		}
		masu[0][1]=1;
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				masu[i][j]=masu[i-1][j]+masu[i][j-1];
				if(ura[i][j]==1)masu[i][j]=0;
			}
		}
		printf("%d\n",masu[a][b]);
	}
	return 0;
}