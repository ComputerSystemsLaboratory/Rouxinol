#include <iostream>
#include <math.h>
#include <cstdio>
#include <utility>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, s[55], h[55], c[55], d[55];

int main() {

	cin >> n;

	for (int i = 0; i<n; i++) {
		char p; int q;
		cin >> p >> q;
		if (p == 'S') {
			s[q] = 1;
		}
		else if (p == 'H') {
			h[q] = 1;
		}
		else if (p == 'C') {
			c[q] = 1;
		}
		else if (p == 'D') {
			d[q] = 1;
		}
	}

	for (int i = 1; i <=13 ; i++) {

		if (s[i]==0) {
			cout << 'S' << " " << i << endl;
		}

	}

	for (int i = 1; i <= 13; i++) {

		if (h[i]==0) {
			cout << 'H' << " " << i << endl;
		}

	}

	for (int i = 1; i <= 13; i++) {

		if (c[i]==0) {
			cout << 'C' << " " << i << endl;
		}

	}

	for (int i = 1; i <= 13; i++) {

		if (d[i]==0) {
			cout << 'D' << " " << i << endl;
		}

	}
}