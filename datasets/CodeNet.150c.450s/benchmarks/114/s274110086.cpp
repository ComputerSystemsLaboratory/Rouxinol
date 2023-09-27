#include<iostream>
#include<vector>
#include<algorithm>
#define INFTY 10000
#define PII pair<int,int>
#define MPII(a,b) make_pair(a,b)
using namespace std;
class NODE
{
public:
	vector<PII> v;
	int index = 0;
	bool Isdone = false;
};
class Tree
{
public:
	vector<int> V;
	int cost = 0;
};

int main()
{
	NODE* nodes;
	nodes = new NODE[101];
	Tree T;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int t;
			cin >> t;
			if (t != -1)
			{
				PII p = MPII(t, j);
				nodes[i].v.push_back(p);
			}
		}
		sort(nodes[i].v.begin(), nodes[i].v.end());
	}
	T.V.push_back(1);
	nodes[1].Isdone = true;
	while (1)
	{
		if (T.V.size() == n)break;
		int mincost=INFTY;
		int addv=-1;
		int index;
		for (auto itr : T.V)
		{
			if (nodes[itr].v.size() <= nodes[itr].index)continue;
			while (1)
			{
				if (nodes[nodes[itr].v[nodes[itr].index].second].Isdone == false)break;
				nodes[itr].index++;
				if (nodes[itr].v.size() <= nodes[itr].index)break;
			}
			if (nodes[itr].v.size() <= nodes[itr].index)continue;
			if (mincost >= nodes[itr].v[nodes[itr].index].first)
			{
				mincost = nodes[itr].v[nodes[itr].index].first;
				addv = nodes[itr].v[nodes[itr].index].second;
				index = itr;
			}
		}
		
		nodes[index].index++;
		T.V.push_back(addv);
		nodes[addv].Isdone = true;
		T.cost += mincost;
	}
	cout << T.cost << endl;
	delete[] nodes;
	return 0;
}