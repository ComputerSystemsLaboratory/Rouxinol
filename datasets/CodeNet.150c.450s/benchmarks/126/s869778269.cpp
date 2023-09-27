#include <iostream>
#include <algorithm>
using namespace std;
int a, b, n;
pair<int, int> c[64];
int reachCount;

void walk(int x, int y) {
	if (a < x || b < y) return;
	if (x == a && y == b) {
		reachCount++;
		return;
	}
	pair<int, int>* pos = find(c, c + n, pair<int, int>(x, y));
	if (pos == c + n) {
		walk(x + 1, y);
		walk(x, y + 1);
	}
}

int main() {
	while (cin >> a >> b, a || b) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> c[i].first >> c[i].second;
		}
		reachCount = 0;
		walk(1, 1);
		cout << reachCount << endl;
	}
	return 0;
}