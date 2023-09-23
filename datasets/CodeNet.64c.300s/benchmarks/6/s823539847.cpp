#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int h[4][3][10] = {0};
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		int a, b, c, v; cin >> a >> b >> c >> v;
		--a, --b, --c;
		h[a][b][c] += v;
	}

	for (int a = 0; a < 4; ++a) {
		if (a) cout << "####################" << endl;
		for (int b = 0; b < 3; ++b) {
			for (int c = 0; c < 10; ++c) {
				cout << " ";
				cout << h[a][b][c];
			}
			cout << endl;
		}
	}
}