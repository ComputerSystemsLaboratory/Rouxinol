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

int A[200000];

long long int merge(int a1[], int a2[], int a[], int n, int m)
{
	int i = 0, j = 0;
	long long int inv = 0;
	while (i < n||j < m)
	{
		if (i == n)
		{
			a[i + j] = a2[j];
			j++;
		}
		else if (j == m)
		{
			a[i + j] = a1[i];
			i++;
		}
		else
		{
			if (a1[i] < a2[j])
			{
				a[i + j] = a1[i];
				i++;
			}
			else
			{
				a[i + j] = a2[j];
				j++;
				inv += n - i;
			}
		}
	}
	return inv;
}

long long int mergeSort(int a[], int l)
{
	if (l > 1)
	{
		long long int inv = 0;
		int m = l / 2;
		int n = l - m;
		int* a1 = new int[m];
		int* a2 = new int[n];
		for (int i = 0; i < m; i++)
		{
			a1[i] = a[i];
		}
		for (int i = 0; i < n; i++)
		{
			a2[i] = a[m + i];
		}

		inv += mergeSort(a1, m);
		inv += mergeSort(a2, n);
		inv += merge(a1, a2, a, m, n);
		delete[] a1;
		delete[] a2;
		return inv;
	}
	return 0;
}

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	printf("%lld\n", mergeSort(A, N));
	return 0;
}
