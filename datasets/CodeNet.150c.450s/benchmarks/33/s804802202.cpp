#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int x, y, s;
	while (cin >> x >> y >> s) {
		if (x == 0 && y == 0 && s == 0) {
			break;
		}
		int k, p;
		int kk, pp;
		int a, b;
		int MAX = 0;
		for (int i = 1; i < s; i++) {
			bool hantei = true;
			bool hantei2 = true;
			k = (double)i * (double)(100 + x) / 100.0;
			kk = k;
			k = s - k;
			if (k <= 0) {
				break;
			}
			p = (double)k * 100.0 / (double)(100 + x);
			pp = (double)p * (double)(100 + x) / 100.0;
			if (kk + pp == s) {
				hantei = false;
			}
			pp = (double)(p+1) * (double)(100 + x) / 100.0;
			if (kk + pp == s) {
				hantei2 = false;
				p++;
			}
			if (hantei && hantei2) {
				continue;
			}
			a = (double)i * (double)(100 + y) / 100.0;
			b = (double)p * (double)(100 + y) / 100.0;
			MAX = max(MAX, a+b);
		}
		cout << MAX << endl;
	}
	return 0;
}