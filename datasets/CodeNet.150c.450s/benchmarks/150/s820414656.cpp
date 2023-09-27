#include <stdio.h>

int C[10001] = {0};

int n,a[2000001],b[2000001];

void CountingSort(int* A, int* B, int k){
	for(int i = 0; i <= k; i++){
		C[i] = 0;
	}

	for(int j = 1; j <= n; j++){
		C[A[j]]++;
	}

	for(int i = 1; i <= k; i++){
		C[i] = C[i] + C[i-1];
	}

	for(int j = n; j > 0; j--){
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
}


int main(){
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		scanf("%d",&a[i]);
	}
	CountingSort(a,b,10000);
	printf("%d",b[1]);
	for(int i = 2; i <= n; i++){
		printf(" %d",b[i]);
	}
	printf("\n");
	return 0;
}

