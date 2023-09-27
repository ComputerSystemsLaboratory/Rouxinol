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

int G[101][101];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int id, k;
		cin >> id >> k;

		for (int i = 0; i < k; i++)
		{
			int v;
			cin >> v;
			G[id][v] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf(j == 1 ? "%d" : " %d", G[i][j]);
		}
		printf("\n");
	}

	return 0;
}
