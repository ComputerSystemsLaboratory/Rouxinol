#include <bits/stdc++.h>
using namespace std;

template <typename T>
class SegmentTree {
	using func_t = function<T(T, T)>;
	const int n;
	const T id;
	func_t merge;
	vector<T> data;
	int size(int n) {
		int res;
		for (res = 1; res < n; res <<= 1);
		return res;
	}
	T sub(int l, int r, int node, int lb, int ub) {
		if (ub <= l || r <= lb) return id;
		if (l <= lb && ub <= r) return data[node];
		return merge(sub(l, r, node * 2, lb, (lb + ub) / 2), sub(l, r, node * 2 + 1, (lb + ub) / 2, ub));
	}
public:
	SegmentTree(int n_, T id_, func_t merge_) :
		n(size(n_)), id(id_), merge(merge_), data(n * 2, id) {}
	void init(const vector<T>& data_) {
		for (int i = 0; i < (int)data_.size(); i++)
			data[i + n] = data_[i];
		for (int i = n - 1; i >= 0; i--)
			data[i] = merge(data[i * 2], data[i * 2 + 1]);
	}
	void add(int p, T val) {
		p += n;
		data[p] += val;
		while (p >>= 1) data[p] = merge(data[p * 2], data[p * 2 + 1]);
	}
	T find(int l, int r) {
		return sub(l, r + 1, 1, 0, n);
	}
};

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int n, q, com, x, y;
	cin >> n >> q;
	SegmentTree<int> st(n, 0, [](int l, int r) { return l + r; });
	while (q--) {
		cin >> com >> x >> y;
		if (com) {
			printf("%d\n", st.find(x - 1, y - 1));
		}
		else {
			st.add(x - 1, y);
		}
	}
	return 0;
}