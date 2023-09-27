#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int n, a, b, c, x;

int slot(vector<int> y) {
	int fr = 0;
	int i = 0;
	if (x == y[0]) i = 1;
	for (; i < n; ++i) {
		do {
			x = (a * x + b) % c;
			fr++;
			if (fr > 10000) return -1;
		} while (x != y[i]);
	}
	return fr;
}

int main() {
	while (cin >> n >> a >> b >> c >> x && (n || a || b || c || x)) {
		vector<int> y(n);
		for (int i = 0; i < n; ++i)cin >> y[i];
		cout << slot(y) << endl;
	}

	return 0;
}
