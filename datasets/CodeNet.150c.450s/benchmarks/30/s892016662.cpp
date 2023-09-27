#include<stdio.h>

int selectionSort(int A[],int N){
	int i,j,t,sw=0,minj;
	for(i=0;i<N;i++){
		minj=i;
		for(j=i;j<N;j++){
			if(A[minj]>A[j]) minj = j;
		}
		if(minj != i){
			t = A[i];A[i]=A[minj];A[minj]=t;
			sw++;
		}
	}
	return sw;
}

int main(){
	int A[100],N,i,sw;
	
	scanf("%d",&N);
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	
	sw = selectionSort(A,N);
	
	for(i=0;i<N;i++){
		if(i) printf(" ");
		printf("%d",A[i]);
	}
	printf("\n%d\n",sw);
	
	return 0;
}