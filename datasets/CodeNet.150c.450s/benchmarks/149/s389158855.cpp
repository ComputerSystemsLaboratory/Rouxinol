#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class UnionFind {
public:
	vector<int> par;
	
	UnionFind() {}
	UnionFind(int n) {
		par.resize(n);
		for (int i = 0; i < n; i++) par[i] = i;
	}
	
	int root(int a) {
		if (par[a] == a)return a;
		else return par[a] = root(par[a]);
	}

	void unite(int a, int b) {
		int x = root(a);
		int y = root(b);
		if (x == y)return;
		par[x] = y;
	}

	bool same(int a, int b) {
		return root(a) == root(b);
	}

};

int main() {
	int n, q,com,x,y;
	cin >> n >> q;
	UnionFind UF(n);
	while (q--) {
		cin >> com >> x >> y;
		if (!com)UF.unite(x, y);
		if (com)cout << UF.same(x, y) << endl;
	}
}