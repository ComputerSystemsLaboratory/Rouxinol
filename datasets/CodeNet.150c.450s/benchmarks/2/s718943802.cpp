#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	int A[n];
	for(int i=0; i<n; ++i){
		scanf("%d", &A[i]);
	}
	int x = A[n-1];

	// Partition
	int i = -1;
	int temp;
	for(int j=0; j<n-1; ++j){
		if(x < A[j]){
			continue;
		}else{
			i += 1;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	temp = A[i+1];
	A[i+1] = A[n-1];
	A[n-1] = temp;
	int s = i+1;

	for(int i=0; i<n; ++i){
		if(i>0)
			printf(" ");

		if(i == s){
			printf("[%d]", A[i]);
		}else{
			printf("%d", A[i]);
		}
	}	
	printf("\n");

	return 0;
}
