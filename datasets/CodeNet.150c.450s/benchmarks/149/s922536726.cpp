#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#include<numeric>
#include<limits>

#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()

using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ll, string> pls;

int parent[1000000];

void initialize(int n) 
{
	for (int i = 0; i < n; i++) 
		parent[i] = i;
}

int find(int x) 
{
	if (parent[x] == x)return x;
	else return parent[x] =find(parent[x]);
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);
	parent[x] = y;
}

int same(int x, int y) {
	if(find(x) == find(y))
		return 1;
	else
		return 0;
}

int main()
{
	int n,q; 
	cin >> n >> q;

	initialize(n);

	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com) {
			if (same(x, y))cout << 1 << endl;
			else cout << 0 << endl;
		}
		else {
			unite(x, y);
		}
	}
	return 0;
}