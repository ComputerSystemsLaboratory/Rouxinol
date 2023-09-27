#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_E = 500001;
const int MAX_V = 100001;
const int MAX_D = 1000000000;

struct edge { int from, to, cost=MAX_D; };

int main() {
	int V, E, s;
	cin >> V >> E >> s;
	//int table[MAX_V][MAX_V] = {0};
	edge table[MAX_E];

	for (int i = 0; i < E; i++)
		cin >> table[i].from >> table[i].to >> table[i].cost;
	
	//*****************
	int prev[MAX_V];
	int dist[MAX_V];
	bool s_[MAX_V];

	for (int i = 0; i < V; i++)
		dist[i] = MAX_D;
	dist[s] = 0;

	for (int i = 0; i < V; i++)
		prev[i] = -1;
	prev[s] = s;

	for (int i = 0; i < V; i++)
		s_[i] = false;
	s_[s] = true;

	for (int i = 0; i < E; ++i)
	{
		if (table[i].from == s)
		{
			dist[table[i].to] = table[i].cost;
			prev[table[i].to] = s;
		}


	}
	dist[s] = 0;
	s_[s] = true; //????§????

	int mindist = MAX_D;
	bool mark = false;
	for (int i = 1; i < V; i++)
	{
		if (!mark&&i != 1)
			continue;
		mark = false;
		int u = s;
		for (int j = 0; j < V; j++)
		{
			if (!s_[j] && dist[j] < mindist)
			{
				u = j;
				mindist = dist[j];
				mark = true;
			}
		}
		s_[u] = true;//?????°???s????§????????????????

		int mindist_ = MAX_D;
		for (int j = 0; j < E; j++)
		{
			if (!s_[table[j].to] && table[j].cost < mindist_)
			{
				if (dist[table[j].from] + table[j].cost < dist[table[j].to])
				{
					dist[table[j].to] = dist[table[j].from] + table[j].cost;
					prev[table[j].to] = table[j].from;
					mark = true;
				}
			}
		}
	}

	for (int i = 0; i < V; i++)
	{
		if(dist[i]<MAX_D)
			cout << dist[i] << endl;
		else
			cout << "INF" << endl;
	}

	return 0;
}