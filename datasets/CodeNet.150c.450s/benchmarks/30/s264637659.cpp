#include<stdio.h>

int selectionSort(int A[],int N){
	int i,j,minj,tmp;
	int sw = 0;
	int flag;
	for(i=0;i<N;i++){
		minj = i;
		flag = 0;
		for(j=i;j<N;j++){
			if(A[minj]>A[j]){
				minj = j;
				flag = 1;
			}
		}
		if(flag){
			tmp=A[minj];
			A[minj]=A[i];
			A[i]=tmp;
			sw++;
		}
	}
	return sw;
}

int main(){
	int N,i,j,sw;
	int A[100];
	
	scanf("%d",&N);
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	
	sw = selectionSort(A,N);
	
	for(j=0;j<N;j++){
		if(j) printf(" ");
		printf("%d",A[j]);
	}
	printf("\n%d\n",sw);
	
	return 0;
}