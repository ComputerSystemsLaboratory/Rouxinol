#include<bits/stdc++.h>

using namespace std;

class disjoint_set {
private:
	vector<int> id;
	vector<int> rank;
public:

	disjoint_set(int size) {
		id = vector<int>(size);
		rank = vector<int>(size);
		for (size_t i = 0; i < size; i++) {
			id[i] = i;
		}
	}

	int size() {
		return id.size();
	}

	int getRoot(int x) {
		if (x != id[x]) {
			id[x] = getRoot(id[x]);
		}
		return id[x];
	}

	bool same(int x, int y) {
		return getRoot(x) == getRoot(y);
	}

	void merge(int x, int y) {
		int xRoot = getRoot(x);
		int yRoot = getRoot(y);
		if (xRoot == yRoot) return;
		if (rank[xRoot] < rank[yRoot]) {
			id[xRoot] = yRoot;
		} else if (rank[xRoot] > rank[yRoot]) {
			id[yRoot] = xRoot;
		} else {
			id[xRoot] = yRoot;
			rank[yRoot]++;
		}
	}
};

int main() {
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	disjoint_set s(n);
	for (size_t i = 0; i < q; i++) {
		int t,x, y;
		cin >> t >> x >> y;
		if (t == 0) s.merge(x, y);
		else cout << s.same(x, y) << endl;
	}
}