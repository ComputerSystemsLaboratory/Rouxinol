#include<stdio.h>

static const int MAX = 200000;
static const int MAX_INT = 2147483647;

int A[MAX+2];
int L[MAX/2+2], R[MAX / 2 + 2];
long long sum=0;

void merge(int A[], int left, int mid, int right)
{
	int n1, n2, i, j;
	n1 = mid - left;
	n2 = right - mid;
	for (i = 0; i < n1; i++)
	{
		L[i] = A[i + left];
	}

	for (i = 0; i < n2; i++)
	{
		R[i] = A[i + mid];
	}
	L[n1] = MAX_INT;
	R[n2] = MAX_INT;
	i = j = 0;
	for (int k = left; k < right; k++)
	{
		if (L[i] <= R[j])
			A[k] = L[i++];
		else
		{
			sum += n1 - i;
			A[k] = R[j++];
		}
	}
	
}

void mergeSort(int A[], int left, int right)
{
	int mid;
	if (left + 1 < right)
	{
		mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main()
{
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}

	mergeSort(A, 0, n);

	printf("%lld\n", sum);

	return 0;
}
