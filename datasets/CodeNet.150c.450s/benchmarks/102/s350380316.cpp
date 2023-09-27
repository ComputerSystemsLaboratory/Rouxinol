#include<iostream>
#include<vector>
#include<string>

using namespace std;
using vec = vector<int>;
using mat = vector<vec>;

void init(vec & parent, vec & size)
{
	for (int i = 0; i < parent.size(); ++i)
	{
		parent[i] = i;
		size[i] = 1;
	}
}


int find(vec & parent, int x)
{
	if (parent[x] == x)
	{
		return x;
	}
	return x = find(parent,parent[x]);
}


void unite(vec & parent, vec & size, int x, int y)
{
	x = find(parent, x);
	y = find(parent, y);

	if (x == y)return;

	parent[y] = x;
	size[x] += size[y];
}


int change(int y,int x,int W)
{
	return y*W + x;
}


int main()
{
	while (true)
	{
		int W, H;
		cin >> W >> H;
		if (W == 0 && H == 0)return 0;

		mat color(H, vec(W));
		vec parent(W*H);
		vec size(W*H);

		init(parent, size);

		int start;

		for (int y = 0; y < H; ++y)
		{
			string c;
			cin >> c;

			for (int x = 0; x < W; ++x)
			{
				
				if (c[x] == '.') { 
					
					color[y][x] = 0; 
					
				}
				else if (c[x] == '#') { color[y][x] = 1; }
				else
				{
					color[y][x] = 0;
					start = change(y, x, W);
				}

				if (x != 0 && color[y][x] == color[y][x - 1])
				{
					unite(parent, size, change(y, x, W), change(y, x - 1, W));
				}
				if (y != 0 && color[y][x] == color[y - 1][x])
				{	
					unite(parent, size, change(y, x, W), change(y - 1, x, W));
				}
				
			}
		}

		cout << size[find(parent, start)] << endl;
	}
}
