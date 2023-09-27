#include <iostream>

using namespace std;

int P[10001];

void init(int n) {
	for (int i = 0; i <= n; i++)
		P[i] = i;
}

int root(int a) {
	if (P[a] == a)
		return a;
	return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b) {
	return root(a) == root(b);
}

void unite(int a, int b) {
	P[root(a)] = root(b);
}

int main() {
	int n, q;
	cin >> n >> q;
	init(n);
	for (int i = 0; i < q; i++) {
		int query, x, y;
		cin >> query >> x >> y;
		if (query == 0)
			unite(x, y);
		else
			cout << (is_same_set(x, y) ? 1 : 0) << endl;
	}
}