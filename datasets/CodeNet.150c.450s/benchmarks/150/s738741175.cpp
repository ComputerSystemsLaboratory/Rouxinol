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

int A[2000000];
int B[2000000];
int C[10001];

void CountingSort(int n,int k)
{
	for (int i = 0; i < 10001; i++)
	{
		C[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		C[A[i]]++;
	}

	for (int i = 1; i < k; i++)
	{
		C[i] += C[i - 1];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	CountingSort(N, 10000);

	printf("%d", B[0]);
	for (int i = 1; i < N; i++)
	{
		printf(" %d", B[i]);
	}
	printf("\n");

	return 0;
}
