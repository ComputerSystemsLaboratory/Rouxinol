#include <cstdio>
using namespace std;

#define MAX 10000

int *A, *B, C[MAX + 1];

void CountingSort(int n)
{
	
	for (int i = 0; i <= MAX; i++) C[i] = 0;

	for (int j = 0; j < n; j++) C[A[j]]++;

	for (int i = 1; i <= MAX; i++)
		C[i] += C[i - 1];

	for (int j = n - 1; j >= 0; j--) {
		B[C[A[j]] - 1] = A[j];
		C[A[j]]--;
	}
}

int main()
{
	int n;
	scanf("%d", &n);

	A = new int[n];
	B = new int[n];

	for (int i = 0; i < n; i++) 
		scanf("%d", &A[i]);

	CountingSort(n);

	for (int i = 0; i < n; i++) {
		if (i) printf(" ");
		printf("%d", B[i]);
	}
	printf("\n");

	delete[] A;
	delete[] B;
	return 0;
}