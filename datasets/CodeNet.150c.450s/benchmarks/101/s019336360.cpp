#include<vector>
#include<iostream>
using namespace std;

#define MAX_N 100000
int par[MAX_N];//親の要素
int rank_[MAX_N];

//n要素で初期化
void init(int n)
{
	for (int i = 0; i < n; i++)
	{
		par[i] = i;
		rank_[i] = 0;
	}
}

//木の根を求める
int root(int x)
{
	if (par[x] == x)
	{
		return x;
	}
	else
	{
		return par[x] = root(par[x]);
	}
}

//xとyが同じ集合に属するか　否か
bool same(int x, int y)
{
	return root(x) == root(y);
}

//xとyの属する集合を併合
void unite(int x, int y)
{
	x = root(x);
	y = root(y);
	if (x == y)
	{
		return;
	}

	if (rank_[x] < rank_[y])
	{
		par[x] = y;
	}
	else
	{
		par[y] = x;
		if (rank_[x] == rank_[y])
		{
			rank_[x]++;
		}
	}


}

int main()
{
	int n;
	cin >> n;//頂点の数
	int m;
	cin >> m;//辺の数

	//初期化
	init(n);

	//木を作る
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (same(a, b))
		{
			continue;
		}
		else
		{
			unite(a, b);
		}
	}

	int q;//クエリの数
	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int a, b;
		cin >> a >> b;
		if (same(a, b))
		{
			cout << "yes" << endl;
		}
		else if(!same(a, b))
		{
			cout << "no" << endl;
		}
	}

	return 0;





}
