
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"


#include <iostream>
#include <vector>

using namespace std;
using lint = long long;


template<class T>
class FenwickTree {
private:
	int n;
	vector<T> bit;
public:
	FenwickTree(int sz, T&& x = T(0)) : n(sz), bit(n + 1) {
		for (int i = 0; i < n; i++) add(i, x);
	}

	T sum(int k) const {
		T res = 0;
		for (k--; k >= 0; k = (k & (k + 1)) - 1) res += bit[k];
		return res;
	}
	T sum(int l, int r) const { return sum(r) - sum(l); }

	void add(int k, const T& x) {
		for (; k < n; k |= k + 1) bit[k] += x;
	}
	void set(int k, const T& x) { add(k, x - sum(k, k + 1)); }
};


int main() {

	int n, q;
	cin >> n >> q;

	FenwickTree<lint> ft(n, 0);
	vector<int> ans;
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;
		x--;
		if (c) {
			ans.emplace_back(ft.sum(x, y));
		}
		else {
			ft.add(x, y);
		}
	}

	for (const auto& e : ans) cout << e << "\n";
	
	return 0;
}

