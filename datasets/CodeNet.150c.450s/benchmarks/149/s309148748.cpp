#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

typedef long long ll;

int r[10500];
int n, q;

void init()
{
	for (int i = 0; i < n; i++) {
		r[i] = i;
	}
}

int find(int x)
{
	if (r[x] == x)return x;
	else {
		r[x] = find(r[x]);
		return r[x];
	}

}

void unite(int x,int y)
{
	x = find(x);
	y = find(y);
	r[x] = y;
}

int same(int x, int y)
{
	if (find(x) == find(y))return 1;
	else return 0;
}

int main()
{
	cin >> n >> q;
	init();

	int a, x, y;
	for (int i = 0; i < q; i++) {
		cin >> a >> x >> y;
		if (a == 0) unite(x, y);
		if (a == 1)cout << same(x, y) << endl;
	}

	return 0;
}