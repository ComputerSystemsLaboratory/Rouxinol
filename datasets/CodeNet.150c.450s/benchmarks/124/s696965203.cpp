#include<iostream>
#define REP(i,n) for(int i=0;i<(n);i++)
#define INF 1000000
#define BLACK 2
#define GRAY 1
#define WHITE 0
using namespace std;

int Node[100][100];
int Cost[100];

void dijkstra()
{
	int Color[100];
	REP(i, 100)Color[i] = WHITE;
	REP(i, 100)Cost[i] = INF;

	Color[0] = GRAY;
	Cost[0] = 0;

	while (true)
	{
		int min_index = -1;
		int min_value = INF;
		REP(i, 100)
		{
			if (Color[i] != BLACK && min_value>Cost[i])
			{
				min_value = Cost[i];
				min_index = i;
			}
		}
		if (min_index == -1)break;

		REP(i, 100)
		{
			if (Color[i] != BLACK && i != min_index && Node[min_index][i]!=INF && Node[min_index][i]+min_value<Cost[i])
			{
				Cost[i] = min_value+Node[min_index][i];
				Color[i] = GRAY;
			}
		}
		Color[min_index] = BLACK;
	}
}

int main()
{
	REP(i,100)
	{
		REP(j, 100)
		{
			Node[i][j] = INF;
		}
	}
	REP(i, 100)Node[i][i] = 0;
	int n;
	cin >> n;
	REP(i,n)
	{
		int u, k;
		cin >> u >> k;
		REP(j,k)
		{
			int v, c;
			cin >> v >> c;
			Node[u][v] = c;
		}
	}
	dijkstra();
	REP(i, n)
	{
		cout << i << " " << Cost[i] << endl;
	}

	return 0;
}
