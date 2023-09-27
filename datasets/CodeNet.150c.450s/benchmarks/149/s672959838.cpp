
#include <vector>

class union_find
{
private:
	std::vector<int>parent;
	std::vector<int>rank;
public:
	union_find(int siz)
	{
		parent.resize(siz);
		rank.resize(siz);
		for (int i = 0; i < siz; ++i)
		{
			parent[i] = i;
			rank[i] = 0;
		}
	}
	void unite(int x, int y)
	{
		int xr = find(x);
		int yr = find(y);
		if (rank[xr] > rank[yr])
		{
			parent[yr] = xr;
		}
		else if (rank[xr] > rank[yr])
		{
			parent[xr] = yr;
		}
		else if (xr != yr)
		{
			parent[yr] = xr;
			++rank[xr];
		}
	}
	int find(int x)
	{
		if (parent[x] == x)
		{
			return x;
		}
		else
		{
			return parent[x] = find(parent[x]);
		}
	}
	bool check(int x, int y)
	{
		return find(x) == find(y);
	}
};

int n;
int q;

#include <cstdio>

int main()
{
	scanf("%d", &n);
	scanf("%d", &q);
	union_find uf(n);
	for (int i = 0; i < q; ++i)
	{
		int c, x, y;
		scanf("%d %d %d", &c, &x, &y);
		if (c == 0)
		{
			uf.unite(x, y);
		}
		else
		{
			if (uf.check(x, y))
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
	}
	return 0;
}