#include<stdio.h>
#include<stdlib.h>
int Partition(int a[],int p,int r) {
	int x = a[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (a[j] <= x) {
			i++;
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	a[r] = a[i + 1];
	a[i + 1] = x;
	return i + 1;
}
int main() {
	int n = 0;
	int A[100005];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int q = Partition(A, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (i)
			printf(" ");
		if (i == q) {
			printf("[%d]", A[i]);
		}
		else {
			printf("%d", A[i]);
		}
	}
	printf("\n");
	return 0;
}