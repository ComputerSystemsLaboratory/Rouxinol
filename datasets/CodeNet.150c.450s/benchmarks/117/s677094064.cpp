#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int counter = 0;

void Merge(int A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	int L[500000], R[500000];
	for (int i = 0; i < n1; i++)
	{
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++)
	{
		R[i] = A[mid + i];
	}
	L[n1] = R[n2] = SENTINEL;
	int i = 0, j = 0;
	for (int k = left; k < right; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		counter++;
	}
}

void Merge_sort(int A[], int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		Merge_sort(A, left, mid);
		Merge_sort(A, mid, right);
		Merge(A, left, mid, right);
	}
}

int main()
{
	int S[500000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &S[i]);
	}
	Merge_sort(S, 0, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", S[i]);
		if (i < (n - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
	printf("%d\n", counter);
	return 0;
}
