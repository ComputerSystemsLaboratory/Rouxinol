#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	int x, y, s;
	while(cin >> x >> y >> s, x || y || s) {
		int res = 0;
		for(int i = 1; i < s; i++) {
			for(int j = 1; j < s; j++) {
				int a, b;
				a = (double)i * (100 + x) / 100;
				b = (double)j * (100 + x) / 100;
				if(a + b == s) {
					int c, d;
					c = (double)i * (100 + y) / 100;
					d = (double)j * (100 + y) / 100;
					res = max(res, abs((c+d)));
				}
			}
		}
		cout << res << endl;
	}
}