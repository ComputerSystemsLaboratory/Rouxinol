#include <bits/stdc++.h>
using namespace std;

template <typename T>
class FenwickTree {
	const int n;
	vector<T> data;
public:
	FenwickTree(int n_) : n(n_), data(n) {}
	T find(int p) const {
		T res = 0;
		while (p >= 0) {
			res += data[p];
			p = (p & (p + 1)) - 1;
		}
		return res;
	}
	T find(int l, int r) const {
		return find(r) - find(l - 1);
	}
	void add(int p, T val) {
		while (p < n) {
			data[p] += val;
			p |= p + 1;
		}
	}
	void update(int p, T val) {
		add(p, val - find(p));
	}
};

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int n, q, com, x, y;
	cin >> n >> q;
	FenwickTree<int> st(n);
	while (q--) {
		cin >> com >> x >> y; x--;
		if (com) {
			y--;
			printf("%d\n", st.find(x, y));
		}
		else {
			st.add(x, y);
		}
	}
	return 0;
}

