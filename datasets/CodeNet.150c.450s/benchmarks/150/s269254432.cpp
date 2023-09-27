#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stack>
#define NMAX 2000000
#define VMAX 10000

using namespace std;

int main() {
	unsigned short *A, *B;
	int n;
	int C[VMAX + 1];
	scanf("%d", &n);

	for (int i = 0; i <= VMAX; i++) C[i] = 0;
	A = (unsigned short*)malloc(sizeof(short)*n + 1);
	B = (unsigned short*)malloc(sizeof(short)*n + 1);

	for (int i = 1; i <= n; i++) {
		scanf("%hu", &A[i]);
		C[A[i]]++;
	}
	for (int i = 1; i <= VMAX; i++) {
		C[i] += C[i - 1];
	}
	for (int i = n; i >= 1; i--) {
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	for (int i = 1; i <= n; i++) {
		if (i > 1) printf(" ");
		printf("%d", B[i]);
	}
	printf("\n");
}