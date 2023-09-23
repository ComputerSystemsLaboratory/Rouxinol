#include <iostream>
#include <list>
#include <vector>

using namespace std;
int main() {
	int n, a, b,aa=0,bb=0;
	for (;;) {
		cin >> n;
		if (n == 0) return 0;

		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (a > b)aa += a + b;
			else if (b > a)bb += a + b;
			else if (a == b) {
				aa += a;
				bb += b;
			}
			
		}
		cout << aa << " " << bb << endl;
		aa = 0; bb = 0;
	}
	return 0;
}