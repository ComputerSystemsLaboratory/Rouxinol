#include<stdio.h>

int main(){
	int i, j, temp;
	int A[10];

	for(i=0; i<10; i++){
		scanf("%d", &A[i]);
	}

	for(i=0; i<9; i++){
		for(j=i+1; j<10; j++){
			if(A[i] < A[j]){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
	
	for(i=0; i<3; i++){
		printf("%d\n", A[i]);
	}
	return 0;
}
