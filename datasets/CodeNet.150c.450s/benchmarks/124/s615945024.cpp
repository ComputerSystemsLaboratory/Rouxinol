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

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

/*struct OwnNode
{
	vector<int> to;
	vector<int> to_cost;

	int id;
	bool checked;
	int cost;

	OwnNode(int id):id(id),checked(false),cost(-1){}

	bool operator<(const OwnNode& node)const
	{
		return cost < node.cost;
	}

	bool operator>(const OwnNode& node)const
	{
		return cost > node.cost;
	}

	OwnNode operator-(const OwnNode& node)const
	{
		return cost - node.cost;
	}
};*/

int d[100][100];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)for (int j = 0; j < n; j++)
	{
		d[i][j] = 100000000;
	}

	for (int i = 0; i < n; i++)
	{
		d[i][i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		int id, k;
		cin >> id >> k;
		for (int j = 0; j < k; j++)
		{
			int v, c;
			cin >> v >> c;
			d[id][v] = c;
		}
	}

	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", i, d[0][i]);
	}

	/*vector<OwnNode> nodes;

	for (int i = 0; i < n; i++)
	{
		int id, k;
		cin >> id >> k;

		nodes.push_back(OwnNode(id));

		for (int j = 0; j < k; j++)
		{
			int v, c;
			cin >> v >> c;
			nodes[i].to.push_back(v);
			nodes[i].to_cost.push_back(c);
		}
	}

	priority_queue<OwnNode, vector<OwnNode>, greater<OwnNode>> pq;

	nodes[0].cost = 0;
	pq.push(nodes[0]);

	while (pq.size() != 0)
	{
		OwnNode tn = pq.top();
		pq.pop();

		nodes[tn.id].checked = true;

		for (int i = 0; i != tn.to.size(); i++)
		{
			if (nodes[tn.to[i]].checked)continue;
			if (nodes[tn.to[i]].cost == -1)
			{
				nodes[tn.to[i]].cost = tn.to_cost[i];
			}
			else
			{
				nodes[tn.to[i]].cost = min(nodes[tn.to[i]].cost, tn.to_cost[i] + tn.cost);
			}
			pq.push(nodes[tn.to[i]]);
		}
	}

	for (auto& node : nodes)
	{
		
		printf("%d %d\n", node.id, node.cost);
	}*/

	return 0;
}
