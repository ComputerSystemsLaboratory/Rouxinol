#include<stdio.h>
#define MAX 100000
int A[MAX], n;

int partition(int p, int r){
	int tmp,x = A[r];
	int j,i = p - 1;
	for (j = p; j < r; j++){
		if (A[j] <= x){
			i = i + 1;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	return i + 1;
}

int main(){
	int i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	j = partition(0, n-1);
	for (i = 0; i < n; i++){
		if (i){
			printf(" ");
		}
		if (i == j){
			printf("[%d]", A[i]);
		}
		else{
			printf("%d", A[i]);
		}
	}
	printf("\n");
	return 0;
}