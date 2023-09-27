#include<stdio.h>
#include<stdlib.h>
const int MAXSIZE = 10000+2;
int C[MAXSIZE];
void Counting_sort(int A[], int B[], int k,int n) {
	for (int i = 0; i <= k; i++) {
		C[i] = 0;
	}
	for (int j = 0; j < n; j++) {
		C[A[j]]++;
	}
	for (int i = 1; i <= k; i++) {
		C[i] = C[i] + C[i - 1];
	}
	for (int j = n - 1; j >= 0; j--) {
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int*A, *B;
	A = (int*)malloc(sizeof(int)*n + 2);
	B = (int*)malloc(sizeof(int)*n + 2);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	Counting_sort(A, B, MAXSIZE, n);
	for (int i = 1; i <= n; i++) {
		if (i > 1)printf(" ");
		printf("%d", B[i]);
	}
	printf("\n");
	return 0;

}