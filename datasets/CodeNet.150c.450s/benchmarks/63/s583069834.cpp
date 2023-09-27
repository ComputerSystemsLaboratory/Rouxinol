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
#include<functional>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;

array<vector<pair<int,int>>, 100000> to;
ll tod[100000];

int main() 
{
	int V, E, r;
	scanf("%d %d %d", &V, &E, &r);

	for (int i = 0; i < V; i++)
	{
		tod[i] = 200000000000;
	}

	for (int i = 0; i < E; i++)
	{
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);

		to[s].push_back(pair<int,int>(t, d));
	}

	priority_queue<pli, vector<pli>, greater<pli>> pq;
	pq.push(pli(0, r));
	tod[r] = 0;

	while (!pq.empty())
	{
		pli t = pq.top();
		pq.pop();

		if (tod[t.second] < t.first)
		{
			continue;
		}

		for (int i = 0; i != to[t.second].size(); i++)
		{
			if ((to[t.second][i].second + t.first) < tod[to[t.second][i].first])
			{
				tod[to[t.second][i].first] = (to[t.second][i].second + t.first);
				pq.push(pli(tod[to[t.second][i].first], to[t.second][i].first));
			}
		}
	}

	for (int i = 0; i < V; i++)
	{
		printf(tod[i] == 200000000000 ? "INF\n" : "%lld\n", tod[i]);
	}

	return 0;
}
