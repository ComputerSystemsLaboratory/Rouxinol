#include <iostream>
#include <cstdio>


void counting_sort(int A[], int B[], int C[], int k, int n);
int main()
{
	using namespace std;
	int n;
	cin >> n;
	int *A = new int[n];
	int *B = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	int k = A[0];
	for (int i = 0; i < n; i++)
	{
		k = k >= A[i] ? k : A[i];
	}
	int *C = new int[k + 1];
	counting_sort(A, B, C, k, n);
	for (int i = 0; i < n - 1; i++)
	{
		printf("%d ", B[i]);
	}
	printf("%d\n", B[n - 1]);
	delete[] A;
	delete[] B;
	delete[] C;
	return 0;
}

void counting_sort(int A[], int B[], int C[], int k, int n)
{
	for (int i = 0; i <= k; i++)
	{
		C[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		C[A[i]]++;
	}
	for (int i = 1; i <= k; i++)
	{
		C[i] += C[i - 1];
	}
	for (int j = n - 1; j >= 0; j--)
	{
		B[C[A[j]] - 1] = A[j];
		C[A[j]]--;
	}
}
