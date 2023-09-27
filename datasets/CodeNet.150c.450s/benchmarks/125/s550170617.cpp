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
int d[101];
int f[101];
bool checked[101];

void explore(int id, int n,int& t)
{
	if (checked[id])
	{
		return;
	}
	checked[id] = true;
	d[id] = t;
	t++;

	for (int i = 1; i <= n; i++)
	{
		if (G[id][i] == 1)
		{
			explore(i, n,t);
		}
	}

	f[id] = t;
	t++;
}

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

	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		if (!checked[i])
		{
			explore(i, n, t);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		printf("%d %d %d\n", i, d[i], f[i]);
	}

	return 0;
}
