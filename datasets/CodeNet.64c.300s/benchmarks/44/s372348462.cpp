#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <complex>

using namespace std;

int main()
{
	int n;
	while (scanf("%d", &n), n)
	{
		const int Inf = 1000000;
		int cost[11][11];
		for (int i = 0; i < 11; ++i)
			for (int j = 0; j < 11; ++j)
				cost[i][j] = Inf;
		for (int i = 0; i < 11; ++i)
			cost[i][i] = 0;

		int m = 0;
		for (int i = 0; i < n; ++i)
		{
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			cost[a][b] = cost[b][a] = c;
			m = max(m, max(a, b));
		}
		++m;
		for (int k = 0; k < m; ++k)
			for (int i = 0; i < m; ++i)
				for (int j = 0; j < m; ++j)
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);

		int no, minCost = Inf;
		for (int i = 0; i < m; ++i)
		{
			int sum = 0;
			for (int j = 0; j < m; ++j)
				sum += cost[i][j];
			if (sum < minCost)
			{
				minCost = sum;
				no = i;
			}
		}
		printf("%d %d\n", no, minCost);
	}

	return 0;
}