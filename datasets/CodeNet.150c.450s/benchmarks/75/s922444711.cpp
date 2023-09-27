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

long long int A[500010];

void MaxHeapify(int i, int H)
{
	int l = 2 * i;
	int r = 2 * i + 1;
	int largest;

	if (l <= H&&A[l] > A[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r <= H&&A[r] > A[largest])
	{
		largest = r;
	}
	
	if (largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		MaxHeapify(largest, H);
	}
}

void BuiledMaxHeap(int H)
{
	for (int i = H / 2; i >= 1; i--)
	{
		MaxHeapify(i, H);
	}
}

int main()
{
	int H;
	cin >> H;

	for (int i = 0; i < H; i++)
	{
		cin >> A[i + 1];
	}

	BuiledMaxHeap(H);

	for (int i = 0; i < H; i++)
	{
		printf(" %d", A[i + 1]);
	}
	printf("\n");

	return 0;
}
