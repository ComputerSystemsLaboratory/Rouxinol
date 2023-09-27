#include <iostream>
#include <algorithm>

using namespace std;

int main ( void )
{
	const int INF = (1 << 15);
	int n;
	int cost[10][10];

	while ( cin >> n , n )
	{
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
				cost[i][j] = INF;
			cost[i][i] = 0;
		}

		int a, b, c, V = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a >> b >> c;
			cost[a][b] = cost[b][a] = c;
			V = max(V, max(a, b));
		}

		for (int k = 0; k <= V; ++k)
			for (int i = 0; i <= V; ++i)
				for (int j = 0; j <= V; ++j)
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);

		int from = -1, minCost = INF;
		for (int i = 0; i <= V; ++i) {
			int sum = 0;
			for (int j = 0; j <= V; ++j)
				sum += cost[i][j];
			if ( sum < minCost ) {
				from = i;
				minCost = sum;
			}
		}

		cout << from << ' ' << minCost << endl;

	}
	return 0;
}