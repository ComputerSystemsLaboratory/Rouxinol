#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class UnionFind
{
private:
	vector<int> par;
public:
	UnionFind(int n) : par(n) 
	{
		for (int i = 0; i < par.size(); i++) par[i] = i;
	}
	int root(int x)
	{
		return (par[x] == x ? x : par[x] = root(par[x]));
	}
	bool isSame(int x, int y)
	{
		return root(x) == root(y);
	}
	void unite(int x, int y)
	{
		x = root(x);
		y = root(y);
		par[x] = y;
	}
};


int main()
{
	int n, q;
	cin >> n >> q;
	UnionFind unionFind(n);

	while (q--)
	{
		int order, x, y;
		cin >> order >> x >> y;
		if (order == 0) unionFind.unite(x, y);
		if (order == 1) cout << unionFind.isSame(x, y) << endl;
	}

	return 0;
}