#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <utility>

constexpr int Inf = std::numeric_limits<int>::max();

class SegTree {
public:
	explicit SegTree(int _n) {
		n = 1;
		while (n < _n)
			n *= 2;

		node = std::vector<int>(2 * n - 1, 0);
	}

	void update(int i, int x) {
		i += n - 1;

		node[i] += x;
		while (i > 0) {
			i = parent(i);
			node[i] += x;
		}
	}

	int query(int a, int b, int k = 0, int l = 0, int r = -1) {
		if (r == -1)
			r = n;

		if (r <= a || b <= l)
			return 0;
		if (a <= l && r <= b)
			return node[k];

		const auto c = children(k);
		return query(a, b, c.first, l, (l + r) / 2) + query(a, b, c.second, (l + r) / 2, r);
	}

private:
	int parent(int i) {
		return (i - 1) / 2;
	}
	std::pair<int, int> children(int i) {
		return { 2 * i + 1, 2 * i + 2 };
	}

	int n;
	std::vector<int> node;

};

int main() {
	int n, q;
	std::cin >> n >> q;

	SegTree tree(n);
	for (int i = 0; i < q; ++i) {
		int com, x, y;
		std::cin >> com >> x >> y;

		if (com == 0)
			tree.update(x - 1, y);
		else
			std::cout << tree.query(x - 1, y) << std::endl;
	}
}