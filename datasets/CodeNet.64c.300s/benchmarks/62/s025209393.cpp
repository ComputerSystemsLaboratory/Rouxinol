#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int w, h; cin >> h >> w;
	int a[100][100];
	for (int y = 0; y < h; ++y) {
		for (int x = 0; x < w; ++x) {
			cin >> a[y][x];
		}
	}
	int b[100];
	for (int i = 0; i < w; ++i) {
		cin >> b[i];
	}

	for (int i = 0; i < h; ++i) {
		int sum = 0;
		for (int j = 0; j < w; ++j) {
			sum += a[i][j] * b[j];
		}
		cout << sum << endl;
	}
}