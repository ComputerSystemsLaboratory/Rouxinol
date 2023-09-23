#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

	int w, h, x, y, r;
	bool check() {
		return x >= r && y >= r && x <= w - r && y <= h - r;
	}

	int main() {
		cin >> w >> h >> x >> y >> r;
		cout << (check() ? "Yes" : "No") << endl;
	}