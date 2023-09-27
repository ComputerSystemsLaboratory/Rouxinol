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

int main()
{
	int H;
	long long int A[255];
	cin >> H;

	for (int i = 0; i < H; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < H; i++)
	{
		printf("node %d: key = %lld, ", i + 1, A[i]);
		if (i != 0)
		{
			printf("parent key = %lld, ", A[((i + 1) / 2) - 1]);
		}
		if ((i + 1) * 2 <= H)
		{
			printf("left key = %lld, ", A[((i + 1) * 2) - 1]);
		}
		if ((i + 1) * 2+1 <= H)
		{
			printf("right key = %lld, ", A[((i + 1) * 2 + 1) - 1]);
		}
		printf("\n");
	}

	return 0;
}
