#include <iostream>

using namespace std;
static const int SIZE = 10001;
int parent[SIZE];
int rk[SIZE];

void init()
{
	for (int i = 0; i < SIZE; ++i)
	{
		parent[i] = i;
		rk[i] = 0;
	}
}

int find(int x)
{
	if (x == parent[x])
	{
		return(x);
	}
	else
	{
		return(parent[x] = find(parent[x]));
	}
}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y)
	{
		return;
	}
	if (rk[x] < rk[y])
	{
		parent[x] = y;
	}
	else
	{
		parent[y] = x;
		if (rk[x] == rk[y])
		{
			rk[x]++;
		}
	}
}

bool same(int x, int y)
{
	return(find(x) == find(y));
}

void solve()
{
	init();
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < q; ++i)
	{
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0)
		{
			unite(x, y);
		}
		else
		{
			if (same(x, y))
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

int main()
{
	solve();
	return(0);
}