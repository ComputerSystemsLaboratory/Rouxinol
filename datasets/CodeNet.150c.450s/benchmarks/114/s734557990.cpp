#include<iostream>
using namespace std;
#define REP(i,n) for(unsigned int i=0;i<(n);i++)
#define MAX 101
#define INF (1<<21)
#define NONE -1
#define WHITE 0
#define GRAY 1
#define BLACK 2


int node[MAX][MAX];
int N;

int prim()
{
	int cost[MAX];
	int color[MAX];
	int parent[MAX];
	REP(i, N)
	{
		cost[i] = INF;
		color[i] = WHITE;
		parent[i] = NONE;
	}

	cost[0] = 0;
	
	while (true)
	{
		int min_index = NONE;
		int min_value = INF;
		REP(i, N)
		{
			if (color[i] !=BLACK)
			{
				if (cost[i] < min_value)
				{
					min_index = i;
					min_value = cost[i];
				}
			}
		}
		if (min_index == NONE)break;
		color[min_index] = BLACK;
		REP(i, N)
		{
			if (color[i] != BLACK)
			{
				if (node[min_index][i] != INF)
				{
					if (cost[i] > node[min_index][i])
					{
						cost[i] = node[min_index][i];
						parent[i] = min_index;
						color[i] = GRAY;
					}
				}
			}
		}
	}
	int ans = 0;
	REP(i, N)
	{
		if (parent[i]!=NONE)
		{
			ans += node[i][parent[i]];
		}
	}
	return ans;
}


int main()
{
	REP(i, MAX)
	{
		REP(j, MAX)
		{
			node[i][j] = INF;
		}
	}
	cin >> N;
	REP(i, N)
	{
		REP(j, N)
		{
			int tmp;
			cin >> tmp;
			if (tmp == -1)
			{
				node[i][j] = INF;
			}
			else node[i][j] = tmp;
		}
	}
	cout << prim() << endl;
	return 0;
}