#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

//?´?????????????????§????
//Union-Find??¨
struct UnionFind {
	vector<int> par;
	vector<int> rank;
	UnionFind(int n) :par(n), rank(n, 0) {
		for (int i = 0; i < n; i++)
			par[i] = i;
	}
	void unite(int x, int y) {
		x = root(x); y = root(y);
		if (x == y)return;
		if (rank[x] < rank[y]) {
			par[x] = y;
		}
		else {
			par[y] = x;
			if (rank[x] == rank[y])rank[x]++;
		}
	}
	bool same(int x, int y) { return root(x) == root(y); }
	int root(int x) { return par[x] == x ? x : par[x] = root(par[x]); }
	int size(int x) { return -par[root(x)]; }
	void dump() {
		for (int i = 0; i < par.size(); i++) cout << par[i] << " ";
		cout << "par" << endl;
		for (int i = 0; i < rank.size(); i++) cout << rank[i] << " ";
		cout << "rank" << endl;
	}
};

int main() {
	int n, q; cin >> n >> q;
	UnionFind UF(n);

	//UF.dump();
	for (int i = 0; i < q; i++) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0)UF.unite(x, y);
		else cout << UF.same(x, y) << endl;
		//UF.dump();
	}
	return 0;
}