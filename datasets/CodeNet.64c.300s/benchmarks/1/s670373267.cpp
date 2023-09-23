#include <iostream>
#include <cstdio>

int partition(int A[], int p, int r);

int main()
{
	int A[100005], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	int index = partition(A, 0, n - 1);
	for (int i = 0; i < n - 1; i++)
	{
		if (i == index)
		{
			printf("[%d] ", A[i]);
		}
		else
		{
			printf("%d ", A[i]);
		}
	}
	printf("%d\n", A[n - 1]);
	return 0;
}

int partition(int A[], int p, int r)
{
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= A[r])
		{
			i++;
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	int temp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = temp;
	return i + 1;
}
