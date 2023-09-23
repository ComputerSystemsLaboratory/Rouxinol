#include <stdio.h>

#define N 100

int main(){
	int n;
	scanf("%d",&n);
	int A[N][N];
	int i;
	int v;
	int j;
	int p;
	int q;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d",&v);
		scanf("%d",&q);
		for(j=0;j<q;j++){
			scanf("%d",&p);
			A[v-1][p-1] = 1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			printf("%d ",A[i][j]);
		}
		printf("%d\n",A[i][j]);
	}
	return 0;
}