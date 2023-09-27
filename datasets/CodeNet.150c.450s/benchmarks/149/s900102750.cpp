#include <cstdio>
#include <iostream>

using namespace std;

const int MAX = 10000;

int p[MAX];
int hight[MAX];

int findSet(int v) {
	if (p[v] != v) {
		p[v] = findSet(p[v]);
	}
	return p[v];
}

void unite(int x, int y) {
	int px = findSet(x);
	int py = findSet(y);
	if (hight[px] < hight[py]) {
		p[px] = py;
	} else {
		p[py] = px;
	}
}

bool same(int x, int y) {
	if (findSet(x) == findSet(y))
		return true;
	else
		return false;
}

int main() {

	int n, q;
	scanf("%d %d", &n, &q);

	for (int i = 0; i < n; ++i) {
		p[i] = i;
		hight[i] = 0;
	}

	for (int i = 0; i < q; ++i) {
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);

		if (com == 0) {
			unite(x, y);
		} else {
			if (same(x, y))
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
	}

	return 0;
}