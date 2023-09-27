#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 1050000000
 
using namespace std;

int par[10001];
int rank_[10001];

void init(int n)
{
	for (int i = 0; i < n; i++) {
		par[i] = i;
		rank_[i] = 0;
	}
}

int find(int x)
{
	if (par[x] == x) 
		return (x);
	else 
		return par[x] = find(par[x]);
}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y) return;
	if (rank_[x] < rank_[y]) {
		par[x] = y;
	} else {
		par[y] = x;
		if (rank_[x] == rank_[y]) rank_[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}

int main(void)
{
	int n;
	int q;
	int com, x, y;

	cin >> n >> q;

	init(n);
	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;

		if (com == 0) unite(x, y);
		else {
			if(same(x, y)) cout << "1" << endl;
			else		   cout << "0" << endl;
		}
	}


	return (0);
}