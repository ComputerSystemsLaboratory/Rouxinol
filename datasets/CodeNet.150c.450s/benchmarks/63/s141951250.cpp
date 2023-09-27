#include<iostream>
#define MAX_V 100000
#define MAX_E 500000
#define INF 1e9
using namespace std;
struct edge {
	int from, to, cost;
};
edge es[MAX_E];
int d[MAX_V];
int V;
int E;



bool find_negative_loop(int s)
{
	d[s] = 0;
	int count = 0;
	while (true)
	{
		bool update = false;
		count++;
		for (int i = 0; i < MAX_E; i++)
		{

			if (d[es[i].from] != INF && d[es[i].to] > d[es[i].from] + es[i].cost)
			{
				if (count == V)
				{
					return true;
				}
				d[es[i].to] = d[es[i].from] + es[i].cost;
				update = true;
			}
		}
		if (update == false)
		{
			break;
		}


	}
	return false;
}

int main()
{

	int r;
	cin >> V >> E >> r;
	for (int i = 0; i < MAX_V; i++)
	{
		d[i] = INF;
	}
	for (int i = 0; i < E; i++)
	{
		cin >> es[i].from >> es[i].to >> es[i].cost;
	}
	if (find_negative_loop(r))
	{
		cout << "NEGATIVE CYCLE" << endl;
	}
	else
	{
		for (int i = 0; i < V; i++)
		{
			if (d[i] == INF)
			{
				cout << "INF" << endl;
			}
			else
			{
				cout << d[i] << endl;
			}
		}
	}

	return 0;
}

