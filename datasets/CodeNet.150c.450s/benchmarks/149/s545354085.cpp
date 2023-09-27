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

typedef pair<int, int> pii;

using namespace std;

struct UnionFind
{
	vector<int> parent;
	vector<int> rank;

	UnionFind(int n) :parent(n), rank(n, 0)
	{
		for (int i = 0; i < n; i++)
		{
			parent[i] = i;
		}
	}

	int find(int x)
	{
		if (x == parent[x])return x;
		else return parent[x] = find(parent[x]);
	}

	bool same(int x, int y)
	{
		return find(x) == find(y);
	}

	void unite(int x, int y)
	{
		int a = find(x);
		int b = find(y);

		if (a == b)
		{
			return;
		}

		if (rank[a] < rank[b])
		{
			parent[a] = b;
		}
		else
		{
			parent[b] = a;
			if (rank[a] == rank[b])rank[b]++;
		}
	}
};

int main()
{
	int n, q;
	cin >> n >> q;
	
	UnionFind uf(n);

	for (int i = 0; i < q; i++)
	{
		int c, x, y;
		cin >> c >> x >> y;

		switch (c)
		{
		case 0:
			uf.unite(x, y);
			break;
		case 1:
			cout << (uf.same(x, y) ? 1 : 0) << endl;
			break;
		}
	}

	return 0;
}


