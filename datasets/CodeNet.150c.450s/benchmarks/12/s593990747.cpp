#include <stdio.h>

#define N 2000000

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int A[N];
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for(i=1;i<=n;i++){
		printf("node %d: key = %d, ",i,A[i]);
		if(i/2>0)printf("parent key = %d, ",A[i/2]);
		if(i*2<=n)printf("left key = %d, ",A[i*2]);
		if(i*2+1<=n)printf("right key = %d, ",A[i*2+1]);
		printf("\n");
	}
	return 0;

}