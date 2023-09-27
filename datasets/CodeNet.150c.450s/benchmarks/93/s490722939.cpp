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

long long int A[100000];
long long int tempA[100000];
char C[100000];
char tempC[100000];

int Partition(int p, int r)
{
	long long int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++)
	{
		if (A[j] <= x)
		{
			i++;
			long long int tempi = A[i];
			char tempc = C[i];
			A[i] = A[j];
			C[i] = C[j];
			A[j] = tempi;
			C[j] = tempc;
		}
	}

	long long int tempi = A[i + 1];
	char tempc = C[i + 1];
	A[i + 1] = A[r];
	C[i + 1] = C[r];
	A[r] = tempi;
	C[r] = tempc;
	return i + 1;
}

void QuickSort(int p, int r)
{
	if (p < r)
	{
		int q = Partition(p, r);
		QuickSort(p, q - 1);
		QuickSort(q + 1, r);
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		cin >> C[i] >> A[i];
		//scanf("%c", &C[i]);
		//scanf("%d", &A[i]);
		tempC[i] = C[i];
		tempA[i] = A[i];
	}

	QuickSort(0, N - 1);
	
	bool isStable = true;

	int offset = 0;
	int temp = -1;
	for (int i = 0; i < N&&isStable; i++)
	{
		if (temp != A[i])
		{
			offset = 0;
		}
		while (offset < N)
		{
			if (A[i] == tempA[offset])
			{
				if (C[i] != tempC[offset])
				{
					isStable = false;
				}
				offset++;
				break;
			}
			offset++;
		}
		temp = A[i];
	}

	if (isStable)
	{
		printf("Stable\n");
	}
	else
	{
		printf("Not stable\n");
	}

	for (int i = 0; i < N; i++)
	{
		printf("%c %d\n", C[i], A[i]);
	}

	return 0;
}
