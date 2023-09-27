#include<stdio.h>
int main(){
	int n,m,i,j;
	static int a[100][100]={0},b[110]={0},c[110]={0};
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			c[i]+=a[i][j]*b[j];
		}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}