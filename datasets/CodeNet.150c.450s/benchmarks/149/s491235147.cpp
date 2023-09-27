#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class union_find {
public:
	union_find(int n)
		: par_(n, -1)
	{}
	void init(int n)
	{
		par_.assign(n, -1);
	}

	int root(int x)
	{
		return par_[x] < 0 ? x : par_[x] = root(par_[x]);
	}

	bool unite(int x, int y)
	{
		x = root(x); y = root(y);
		if (x == y)
		{
			return false;
		} else
		{
			if (par_[x] < par_[y])
			{
				par_[x] += par_[y];
				par_[y] = x;
			} else
			{
				par_[y] += par_[x];
				par_[x] = y;
			}
			return true;
		}
	}

	bool same(int x, int y)
	{
		return root(x) == root(y);
	}

	int size(int x)
	{
		return -par_[root(x)];
	}

private:
	std::vector<int> par_;
};

int main() {
	int n, q;
	cin >> n >> q;
	union_find uni(n+5);
	for (int i = 0; i < q; ++i)
	{
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0)
		{
			uni.unite(x, y);
		}
		else
		{
			if (uni.same(x, y))
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}
}