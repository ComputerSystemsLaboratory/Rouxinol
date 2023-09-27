#include <iostream>
using namespace std;

const int N = 100000;
int par[N], runk[N];

void init(int n)
{
	for(int i = 0; i < n; ++i){
		par[i] = i;
		runk[i] = 0;
	}
}

int find(int x)
{
	if(par[x] == x)
		return x;
	else
		return par[x] = find(par[x]);
}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if(x == y) return;
	
	if(runk[x] > runk[y])
		par[y] = x;
	else {
		par[x] = y;
		if(runk[x] == runk[y])
			runk[x] ++;
	}
}

bool same(int x, int y)
{
	return find(x) == find(y);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int n, q;
	cin >> n >> q;
	
	init(n);
	
	int c, x, y;
	for(int i = 0; i < q; ++i){
		cin >> c >> x >> y;
		if(c == 0)
			unite(x, y);
		else
			cout << same(x, y) << endl;
	}
	
	return 0;
}