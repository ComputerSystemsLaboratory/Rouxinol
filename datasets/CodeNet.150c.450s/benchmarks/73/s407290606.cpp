#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct BIT {
	int n;
	vector<T> tree;
	T def = 0;
	
	BIT(int n) : n(n + 1) {
		tree.assign(n + 1, def);
	}
	
	T sum(int index) {
		T r = 0;
		for (; index; index -= index & -index) {
			r += tree[index];
		}
		return r;
	}
	
	void add(int index, T x) {
		for (; index < n; index += index & -index) {
			tree[index] += x;
		}
	}
};

int main() {
	int n, q;
	cin >> n >> q;
	BIT<int> bit(n);
	for (int i = 0; i < q; i++) {
		bool b;
		int x, y;
		cin >> b >> x >> y;
		if (b) {
			cout << bit.sum(y) - bit.sum(x - 1) << endl;
		} else {
			bit.add(x, y);
		}
	}
}