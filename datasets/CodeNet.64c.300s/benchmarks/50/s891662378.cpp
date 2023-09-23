#include<stdio.h>

int main(){
	int i,j,k,N,flag,tmp;
	int count=0;
	int A[101];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N-1;i++){
		for(j=N-1;j>i;j--){
			if(A[j-1]>A[j]){
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				count++;
			}
		}
	}
	
	for(k=0;k<N;k++){
		if(k==N-1){
			printf("%d\n%d\n",A[k],count);
		}else{
			printf("%d ",A[k]);
		}
	}
}