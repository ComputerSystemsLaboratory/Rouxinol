#include<stdio.h>

void show(int *S, int &n){
	for(int i=1; i<n+1; ++i){
		if(i>1)
			printf(" ");
		printf("%d", S[i]);
	}	
	printf("\n");
}

int main(){
	int n;
	scanf("%d", &n);

	int A[n];
	int B[n+1];
	int k = 0;
	for(int i=0; i<n; ++i){
		scanf("%d", &A[i]);
		if(A[i] > k)
			k = A[i];
	}

	int C[k+1];
	for(int i=0; i<k+1; ++i)
		C[i] = 0;

	for(int j=0; j<n; ++j){
		C[A[j]] += 1;
	}

	for(int i=1; i<k+1; ++i){
		C[i] = C[i] + C[i-1]; 
	}

	for(int j=0; j<n; ++j){
		B[ C[A[j]] ] = A[j];
		C[ A[j] ] -= 1;
	}

	show(B, n);
	return 0;
}
