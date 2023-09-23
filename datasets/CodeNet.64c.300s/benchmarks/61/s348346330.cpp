#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int h, w; cin >> h >> w;
	int t[150][150] = {0};
	for (int y = 0; y < h; ++y) {
		for (int x = 0; x < w; ++x) {
			cin >> t[y][x];
		}
	}
	for (int y = 0; y < h; ++y) {
		for (int x = 0; x < w; ++x) {
			t[y][w] += t[y][x];
		}
	}
	for (int x = 0; x < w; ++x) {
		for (int y = 0; y < h; ++y) {
			t[h][x] += t[y][x];
		}
	}
	for (int x = 0; x < w; ++x) {
		t[h][w] += t[h][x];
	}
	for (int y = 0; y <= h; ++y) {
		for (int x = 0; x <= w; ++x) {
			if (x) cout << " ";
			cout << t[y][x];
		}
		cout << endl;
	}
}