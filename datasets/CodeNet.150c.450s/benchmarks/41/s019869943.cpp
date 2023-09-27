#include <iostream>
#include <algorithm>

using namespace std;
static const int SIZE = 101;
static const long long int INF = 1e18;
long long int d[SIZE][SIZE] = { 0 };

void solve()
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			d[i][j] = INF;
		}
		d[i][i] = 0;
	}
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; ++i)
	{
		int from, to, cost;
		cin >> from >> to >> cost;
		d[from][to] = cost;
	}
	for (int k = 0; k < V; ++k)
	{
		for (int i = 0; i < V; ++i)
		{
			for (int j = 0; j < V; ++j)
			{
				if (d[i][k] != INF && d[k][j] != INF)
				{
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
	}
	bool isNegative = false;
	for (int i = 0; i < V; ++i)
	{
		if (d[i][i] < 0)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return;
		}
	}
	for (int i = 0; i < V; ++i)
	{
		for (int j = 0; j < V; ++j)
		{
			if (j)
			{
				cout << " ";
			}
			if (d[i][j] == INF)
			{
				cout << "INF";
			}
			else
			{
				cout << d[i][j];
			}
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}