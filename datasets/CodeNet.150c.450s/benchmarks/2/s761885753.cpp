#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 100000

int A[MAX], n;

int partition(int p, int r) {
	
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			swap(A[j], A[i]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);
	int q = partition(0, n-1);
	for (int i = 0; i < n; i++) {
		if (i) printf(" ");
		if (i == q) printf("[");
		printf("%d",A[i]);
		if (i == q) printf("]");
	}
	printf("\n");

    return 0;
}