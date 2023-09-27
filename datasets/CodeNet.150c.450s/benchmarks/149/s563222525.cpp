#include <iostream>
#include <vector>

using namespace std;

int p[10000];
int r[10000];

int findSet(int x) {
	int y = x;
	while (y != p[y]) {
		y = p[y];
	}
	while (x != p[x]) {
		int temp = p[x];
		p[x] = y;
		x = temp;
	}
	return y;
}

bool same(int x, int y) {
	return findSet(x) == findSet(y);
}

void link(int x, int y) {
	if (r[x] > r[y]) {
		p[y] = x;
		return;
	}
	if (r[x] < r[y]) {
		p[x] = y;
		return;
	}
	p[y] = x;
	r[x]++;
}

void unite(int x, int y) {
	link(findSet(x), findSet(y));
}




int main() {
	int n, q;
	int com;
	int x, y;

	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		p[i] = i;
		r[i] = 0;
	}

	for (int i = 0; i < q; i++) {
		cin >> com >> x >> y;
		if (com == 0) {
			unite(x, y);
			continue;
		}
		if (com == 1) {
			cout << (same(x, y) ? 1 : 0) << endl;
			continue;
		}
	}

	return 0;
}