#include <bits/stdc++.h>
using namespace std;

class UnionFind {
private:
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
		if (ra == rb)
			return;
		if (data[ra] < data[rb]) {
			data[ra] += data[rb];
			data[rb] = a;
		}
		else {
			data[rb] += data[ra];
			data[ra] = b;
		}
	}
	int size(int a) {
		return -data[root(a)];
	}
};

int main()
{
	int n, q;
	cin >> n >> q;
	UnionFind uf(n);
	for (int i = 0, com, x, y;i < q;i++) {
		cin >> com >> x >> y;
		if (com)
			cout << uf.Find(x,y) << endl;
		else
			uf.Union(x,y);
	}
	return 0;
}