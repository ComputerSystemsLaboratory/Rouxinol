#include <stdio.h>
#include <math.h>
#define rep(i,a,n) for(int i=a;i<n;i++)

int main(){
	int r,c,d[110][110]={0},sum=0;
	scanf("%d %d",&r,&c);
	rep(i,0,r){
		rep(j,0,c){
			scanf("%d",&d[i][j]);
			sum+=d[i][j];
			d[r][j]+=d[i][j];
			d[i][c]+=d[i][j];
		}
	}
	d[r][c]=sum;
	rep(i,0,r+1){
		rep(j,0,c+1){
			printf("%d",d[i][j]);
			if(j!=c) printf(" ");
		}
		printf("\n");
	}
	return 0;
}