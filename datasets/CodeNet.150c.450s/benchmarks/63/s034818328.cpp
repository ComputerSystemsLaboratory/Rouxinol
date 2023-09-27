#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>

using namespace std;

typedef long long int lld;
typedef pair<lld,lld> P;

const lld mod = 1e9+7;
const lld INF = 1e9;
const lld MAXE = 500000;
const lld MAXV = 100000;

struct edge
{
	lld to,cost;
};

int main()
{
	lld V,E,r;
	vector<edge> e[MAXV];

	cin >> V >> E >> r;
	for(int i = 0; i < E; i++)
	{
		lld s,t,d;
		cin >> s >> t >> d;
		
		edge ee;
		ee.to = t, ee.cost = d;
		e[s].push_back(ee);
	}

	lld dist[MAXV];
	fill(dist,dist+V,INF);
	dist[r] = 0;

	priority_queue< P, vector<P>, greater<P> > Q;

	Q.push(P(0,r));

	while(!Q.empty())
	{
		//printf("okok\n");
		P p = Q.top();
		Q.pop();

		lld v = p.second;
		if (dist[v] < p.first)
		{
			continue;
		}

		for(int i = 0; i < e[v].size(); i++)
		{
			//printf("bbbb\n");
			edge ee = e[v][i];
			//printf("ee.cost = %lld\n",ee.cost);
			//printf("dist[ee.to] = %lld\n", dist[ee.to]);
			if (dist[ee.to] > dist[v] + ee.cost)
			{
				dist[ee.to] = dist[v] + ee.cost;

				//printf("dist[%lld] = %lld\n", ee.to,dist[ee.to]);

				Q.push(P(dist[ee.to],ee.to));
			}
		}
	}

	for(int i = 0; i < V; i++)
	{
		if (dist[i] == INF)
		{
			cout << "INF" << endl;
		}else
		{
			cout << dist[i] << endl;
		}
	}

	return 0;
}
	