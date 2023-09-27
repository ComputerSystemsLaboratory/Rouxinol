#include <bits/stdc++.h>
using namespace std;

class UnionFind {
	vector<int> data;
	int root(int a) {
		return data[a] < 0 ? a : data[a] = root(data[a]);
	}
public:
	UnionFind(int n) : data(n, -1) {}
	bool Find(int a, int b) {
		return root(a) == root(b);
	}
	void Union(int a, int b) {
		int ra = root(a), rb = root(b);
		if (ra == rb) return;
		if (data[ra] < data[rb]) {
			data[ra] += data[rb];
			data[rb] = a;
		}
		else {
			data[rb] += data[ra];
			data[ra] = b;
		}
	}
};

int main()
{
	int n, m, q;
	cin >> n >> m;
	UnionFind uf(n);
	for (int i = 0, s, t; i < m;i++) {
		cin >> s >> t;
		uf.Union(s, t);
	}
	cin >> q;
	for (int i = 0, s, t; i < q; i++) {
		cin >> s >> t;
		if (uf.Find(s, t))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}