#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int cards[50];
int n, r;

void cut(int p, int c) {
	vector<int> temp(c);
	for (int i = 0; i < c; i++) {
		temp[i] = cards[p + i - 1];
	}

	for (int i = p - 2; i >= 0; i--) {
		cards[i + c] = cards[i];
	}

	for (int i = 0; i < c; i++) {
		cards[i] = temp[i];
	}
}

int main() {
	while (true) {
		cin >> n >> r;
		if (!n && !r) break;

		for (int i = 0; i < n; i++) {
			cards[i] = n - i;
		}

		for (int i = 0; i < r; i++) {
			int p, c;
			cin >> p >> c;
			cut(p, c);
		}

		cout << cards[0] << endl;
	}

	return 0;
}
