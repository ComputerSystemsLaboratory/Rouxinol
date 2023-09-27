#include <stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);	
	
	//arrayA
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}

	//arrayB
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",b + i);
	}
	
	//calc
	int c[n];
	for(int i=0;i<n;i++){
		c[i] = 0;
		for(int j=0;j<m;j++){
			c[i] += a[i][j] * b[j];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}



