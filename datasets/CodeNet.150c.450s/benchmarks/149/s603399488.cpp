#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

struct UnionFind {
	vector<int> data;
	UnionFind(int size) : data(size, -1) { }
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
		return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
		return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
		return -data[root(x)];
	}
};
//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
int main() {
	int N, Q; cin >> N >> Q;
	UnionFind uf(N);
	long long int sum = 0;
	for (int i = 0; i < Q; ++i) {
		string st; cin >> st;
		int x, y; cin >> x >> y;
		if (st == "0") {
			uf.unionSet(x, y);
		}
		else {
			cout << ((uf.root(x) == uf.root(y))?1:0 )<< endl;
		}

	}
	return 0;
}