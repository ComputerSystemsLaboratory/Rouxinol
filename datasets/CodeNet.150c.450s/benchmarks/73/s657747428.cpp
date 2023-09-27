#include<iostream>
using namespace std;

int n, q;
int tree[100005];

void add(int d, int y) {
	while (d <= n) {
		tree[d] += y;
		d += d&(-d);
	}
}

int getSum(int d) {
	int sum = 0;
	while (d > 0) {
		sum += tree[d];
		d -= d&(-d);
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(0);

	cin >> n >> q;

	int com, x, y;
	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;

		if (com == 0) {
			add(x, y);
		}
		else{
			cout << getSum(y) - getSum(x - 1) << endl;
		}
	}

	return 0;
}