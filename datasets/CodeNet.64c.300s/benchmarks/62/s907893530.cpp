#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[100][100],b[100],c[100]={0};
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			scanf("%d",&a[x][y]);
		}
	}
	for(int x=0;x<m;x++){
		scanf("%d",&b[x]);
	}
	for(int x=0;x<n;x++){
		for(int y =0;y<m;y++){
			c[x]=c[x]+(a[x][y]*b[y]);
		}
		printf("%d\n",c[x]);
	}
	return 0;
}