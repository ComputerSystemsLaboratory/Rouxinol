#include "bits/stdc++.h"
using namespace std;
int main() {
	int n, p;
	while (true) {
		cin >> n >> p;
		if (n == 0 && p == 0)break;
		vector<int> c(n, 0);
		int at = 0;
		int now = 0;
		while (true) {
			if (p != 0) {
				c[at]++; p--;
				if (c[at] == 1)now++;
				if (p == 0) {
					if (now == 1) {
						cout << at << endl;
						break;
					}
				}
			}
			else {
				p = c[at]; c[at] = 0;
				if (p != 0) now--;
			}
			at = (at + 1) % n;
		}
	}
}