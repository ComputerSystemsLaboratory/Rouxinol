#include<iostream>
#include<vector>

using namespace std;
using vec = vector<int>;
using mat = vector<vec>;

void init(vec & parent)
{
	for (int i = 0; i < parent.size(); ++i)
	{
		parent[i] = i;
	}
}

int find(vec & parent, int x)
{
	if (parent[x] == x)return x;
	return parent[x] = find(parent, parent[x]);
}

void unite(vec & parent, int x, int y)
{
	x = find(parent, x);
	y = find(parent, y);
	if (x == y)return;
	parent[y] = x;
}

int change(int y, int x, int W)
{
	return y*W + x;
}


int main()
{
	while (true)
	{
		int w, h;
		cin >> w >> h;

		if (w == 0 && h == 0)return 0;

		mat c(h, vec(w));
		vec parent(h*w);

		init(parent);

		for (int y = 0; y < h; ++y)
		{
			for (int x = 0; x < w; ++x)
			{
				cin >> c[y][x];

				if (x != 0 && c[y][x] == c[y][x - 1])
				{
					unite(parent, change(y, x, w), change(y, x - 1, w));
				}
				if (y != 0 && c[y][x] == c[y - 1][x])
				{
					unite(parent, change(y, x, w), change(y - 1, x, w));
				}
				if (x != 0 && y != 0 && c[y][x] == c[y - 1][x - 1])
				{
					unite(parent, change(y, x, w), change(y - 1, x - 1, w));
				}
				if (x != w - 1 && y != 0 && c[y][x] == c[y - 1][x + 1])
				{
					unite(parent, change(y, x, w), change(y - 1, x + 1, w));
				}
			}
		}

		int ans = 0;
		for (int y = 0; y < h; ++y)
		{
			for (int x = 0; x < w; ++x)
			{
				int i = change(y, x, w);
				ans += parent[i] == i && c[y][x] == 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
