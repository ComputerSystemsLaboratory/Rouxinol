#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

void add(int i, int x, vector<int>& node, int n) {
	i += n - 1;
	node[i] += x;
	while (i > 0) {
		i = (i - 1) / 2;
		node[i] = node[2 * i + 1] +node[2 * i + 2];
	}
}
int getSum(int a, int b, int k, int l, int r, vector<int>& node) {
	if (r <= a || b <= l) return 0;
	if (a <= l && r <= b) return node[k];
	return (getSum(a, b, 2*k+1 , l, (l + r)/2, node) + getSum(a, b, 2*k + 2 , (l + r)/2, r, node));
}


int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n_, q;  cin >> n_ >> q;
	int n = 1;
	while (n < n_) n *= 2;
	vector<int> node(2 * n - 1, 0);

	for (int i = 0; i < q; i++) {
		int com, x, y; cin >> com >> x >> y;
		if (com == 0) { add(x - 1, y, node, n); }
		else { cout << getSum(x - 1, y, 0, 0, n, node) << endl; }
	}
}