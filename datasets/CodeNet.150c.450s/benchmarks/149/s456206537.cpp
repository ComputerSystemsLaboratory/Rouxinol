#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

const int MAX_N = 1000000;
const int INFTY = (1 << 21); // 2097152
// const ll INFTY = (1 << 60);

struct UnionFind
{
	vector<int> par;
	vector<int> sizes;

	UnionFind(int n) : par(n), sizes(n, 1) {
		rep(i, n) par[i] = i;
	}

	int find(int x) {
		if (x == par[x]) return x;
		return par[x] = find(par[x]);
	}

	void unite(int x, int y) {
		x = find(x);
		y = find(y);

		if (x == y) return;

		if (sizes[x] < sizes[y]) swap(x, y);

		par[y] = x;
		sizes[x] += sizes[y];
		sizes[y] = 0;
	}

	bool same(int x, int y) {
		return find(x) == find(y);
	}

	int size(int x) {
		return sizes[find(x)];
	}
};

int N, Q;
UnionFind U(0);

int main() {
	cin >> N;
	U = UnionFind(N);
	cin >> Q;
	rep(i, Q){
		int com, x, y;
		cin >> com >> x >> y;
		if(com == 0){
			U.unite(x, y);
		}
		else{
			cout << U.same(x, y) << endl;
		}
	}
}