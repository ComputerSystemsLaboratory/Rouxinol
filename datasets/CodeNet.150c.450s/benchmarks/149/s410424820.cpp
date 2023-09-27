#ifndef ___Class_Union_Find
#define ___Class_Union_Find

#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class Union_Find
{
private:

	vector<int> data;

public:

	Union_Find(unsigned size_) : data(size_, -1) { }

	void unite(int x, int y);
	
	bool same(int x, int y);

	int root(int x);
};

void Union_Find::unite(int x, int y)
{
	x = root(x);
	y = root(y);

	if (x != y)
	{
		if (data[x] < data[y])
		{
			swap(x, y);
		}

		data[x] += data[y];
		data[y] = x;
	}
}

bool Union_Find::same(int x, int y)
{
	return root(x) == root(y);
}

int Union_Find::root(int x)
{
	return data[x] < 0 ? x : data[x] = root(data[x]);
}

#endif // ___Class_Union_Find


// ------ main ------ //

#include <iostream>

using namespace std;

int n, q, com, x, y;

int main()
{
	cin >> n >> q;

	Union_Find u(n);

	for (int i = 0; i < q; i++)
	{
		cin >> com >> x >> y;

		if (com == 0) { u.unite(x, y); }
		if (com == 1) { cout << (u.same(x, y) ? 1 : 0) << endl; }
	}

	return 0;
}