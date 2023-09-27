#include <stdio.h>

int main(void){
	int a=0;
	int b=0;
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	int A[100][100]={};
	int B[100]={};
	int X[100]={};

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a);
			A[i][j]=a;
		}
	}

	for(int k=0; k<m; k++){
		scanf("%d", &b);
		B[k]=b;
	}

	for(int s=0; s<n; s++){
		for(int t=0; t<m; t++){
			X[s] += A[s][t]*B[t];
		}
	}

	for(int u=0; u<n; u++){
		printf("%d\n",X[u]);
	}

	return 0;
}
