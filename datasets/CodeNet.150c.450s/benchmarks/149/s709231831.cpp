#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 1145141919
#define ll long long
//#define scanf scanf_s


int n, q, par[10005];

int root(int x)
{
	int tmp, tmp_,root;
	tmp = tmp_ = x;
	while (1)
	{
		if (par[tmp] == tmp) break;
		else
		{
			tmp = tmp[par];
		}
	}
	root = tmp;
	tmp = x;
	while (tmp != root)
	{
		tmp_ = tmp;
		tmp_ = par[tmp];
		par[tmp] = root;
		tmp = tmp_;
	}
	return root;
}

void unit(int x, int y)
{
	if (x < y) swap(x, y);
	par[root(y)] = root(x);
}

bool same(int x, int y)
{
	int rootx, rooty;
	int tmp = x;
	while (1)
	{
		if (par[tmp] == tmp) break;
		else tmp = par[tmp];
	}
	rootx = tmp;
	int tmp_;
	tmp = x;
	while (tmp != rootx)
	{
		tmp_ = tmp;
		tmp_ = par[tmp];
		par[tmp] = rootx;
		tmp = tmp_;
	}

	tmp = y;
	while (1)
	{
		if (par[tmp] == tmp) break;
		else tmp = par[tmp];
	}
	rooty = tmp;
	tmp = y;
	while (tmp != rooty)
	{
		tmp_ = tmp;
		tmp_ = par[tmp];
		par[tmp] = rooty;
		tmp = tmp_;
	}

	return rootx == rooty;
}

int main()
{
	cin >> n >> q;
	REP(i, n) par[i] = i;
	int a, b, c;
	REP(i, q)
	{
		cin >> a >> b >> c;
		if (a)
		{
			if (same(b, c)) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else unit(b, c);
	}
	return 0;
}