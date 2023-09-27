#include <iostream>
using namespace std;

const int depth = 17;
class SegTree {
public:
	int data[1<<(depth+1)];
	SegTree() { for (int i = 0; i < (1<<(depth+1)); i++) data[i] = 0; }
	void add(int pos, int x) {
		pos = (1<<depth) - 1 + pos;
		data[pos] += x;
		while (pos > 0) {
			pos = (pos - 1) / 2;
			data[pos] += x;
		}
	}
	int getSum(int l, int r, int a = 0, int b = (1 << depth), int id = 0) {
		if (b <= l || a >= r) return 0;
		if (l <= a && b <= r) { return data[id]; }
		int u = getSum(l, r, a, a + (b - a) / 2, id * 2 + 1);
		int v = getSum(l, r, a + (b - a) / 2, b, id * 2 + 2);
		return u + v;
	}
};

SegTree seg;
int n, q;
int com, x, y;

int main() {
	cin >> n >> q;
	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com == 0) { seg.add(x, y); }
		else { cout << seg.getSum(x, y + 1) << endl; }
	}
	return 0;
}