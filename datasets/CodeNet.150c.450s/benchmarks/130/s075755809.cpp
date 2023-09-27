#include <stdio.h>

int main(){
	int i,j,n,m,a,b,c;
	int matrixA[101][101];
	int matrixB[101];
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a);
			matrixA[i][j] = a;
		}
	}
	
	for(j=0;j<m;j++){
		scanf("%d",&b);
		matrixB[j] = b;
	}
	c=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c += matrixA[i][j] * matrixB[j];
		}
		printf("%d\n",c);
		c=0;
	}
}