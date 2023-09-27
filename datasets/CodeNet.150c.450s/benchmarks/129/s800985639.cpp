#include<stdio.h>
int main(){
	int r,c;
	int i,j,a[110][110]={0};
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			scanf("%d",&a[i][j]);
			a[i][c+1]+=a[i][j];
			a[r+1][j]+=a[i][j];
		}
	}
	for(j=1;j<=c;j++){
			a[r+1][c+1]+=a[r+1][j];
	}
	for(i=1;i<=r+1;i++){
		for(j=1;j<=c+1;j++){
			if(j==c+1) printf("%d",a[i][j]);
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}