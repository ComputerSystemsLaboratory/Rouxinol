#include <iostream>
#include <vector>

using namespace std;

class UnionFind
{
public:
	vector<int> par;
	vector<int> rk;
	UnionFind(int n)
	{
		par.resize(n);
		rk.resize(n);
		for (int i = 0; i < n; ++i)
		{
			par[i] = i;
		}
	}
	int find(int x)
	{
		if (par[x] == x)
		{
			return(x);
		}
		return(par[x] = find(par[x]));
	}
	void unite(int x, int y)
	{
		x = find(x);
		y = find(y);
		if (rk[x] < rk[y])
		{
			par[x] = y;
		}
		else
		{
			par[y] = x;
			if (rk[x] == rk[y])
			{
				++rk[x];
			}
		}
	}
	bool same(int x, int y)
	{
		return(find(x) == find(y));
	}
};


void solve()
{
	int n, m;
	cin >> n >> m;
	UnionFind uf(n);
	for (int i = 0; i < m; ++i)
	{
		int s, t;
		cin >> s >> t;
		uf.unite(s, t);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		int s, t;
		cin >> s >> t;
		if (uf.same(s, t))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}