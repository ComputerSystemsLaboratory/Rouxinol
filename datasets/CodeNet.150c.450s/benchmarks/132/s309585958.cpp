#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
	while (true) {
		int n, pmax;
		int stone[50] = {};

		cin >> n >> pmax;
		if (!n && !pmax) break;

		int i;
		int p = pmax;
		for (i = 0; 1; i++) {
			if (p) {
				p--;
				stone[i % n]++;
				if (!p && stone[i % n] == pmax) {
					break;
				}
			}
			else {
				p += stone[i % n];
				stone[i % n] = 0;
			}
		}

		cout << i % n << endl;
	}

	return 0;
}
