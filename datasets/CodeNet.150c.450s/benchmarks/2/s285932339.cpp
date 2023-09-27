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

int Partition(int p, int r)
{
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
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

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	int q = Partition(0, N - 1);

	printf("%d", A[0]);
	for (int i = 1; i < N; i++)
	{
		if (i == q)
		{
			printf(" [%d]", A[i]);
		}
		else
		{
			printf(" %d", A[i]);
		}
	}
	printf("\n");

	return 0;
}
