#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

bool p(pair<int, int> a, pair<int, int> b) {
	int h1 = a.first;
	int h2 = b.first;
	int w1 = a.second;
	int w2 = b.second;
	int d1 = h1 * h1 + w1 * w1;
	int d2 = h2 * h2 + w2 * w2;
	if (d1 == d2) {
		return h1 < h2;
	}
	return d1 < d2;
}

int main() {
	int h, w;
	pair<int, int> rs[151 * 151];
	int idx = 0;
	for (int x = 1; x < 151; x++) {
		for (int y = 1; y < x; y++) {
			rs[idx++] = make_pair(y, x);
		}
	}
	sort(rs, rs + (151 * 151), p);
	for (;;) {
		cin >> h >> w;
		if ((h | w) == 0)
			break;
		for (int i = 0; i < 151 * 151; i++) {
			int y = rs[i].first;
			int x = rs[i].second;
			if (y == h && x == w) {
				cout << rs[i + 1].first << " " << rs[i + 1].second << endl;
				break;
			}
		}
	}

	return 0;
}