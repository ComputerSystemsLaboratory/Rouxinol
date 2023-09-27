#include <iostream>
#include <cstdio>
#define MAXN 2000001
#define VMAX 10000
using namespace std;
int C[VMAX + 2];
int A[MAXN], B[MAXN];
void countingSort(int A[], int B[], int n){
	for (int i = 0; i <= VMAX; i++) {
		C[i] = 0;
	}
	for (int j = 1; j <= n; j++) {
		C[A[j]]++;
	}
	for (int i = 1; i <= VMAX; i++) {
		C[i] = C[i] + C[i-1];
	}
	for (int j = n; j >= 1; j--) {
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}
}

int main(int argc, char *argv[]) {
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i+1]);
	}
	
	countingSort(A, B, n);
	for (int i = 1; i <= n; i++) {
		if (i > 1) {
			printf(" ");
		}
		printf("%d", B[i]);
	}
	printf("\n");
	return 0;
}
