#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <cmath>
using namespace std;
int main(void) {
	for (;;) {
		int x, y, s;
		cin >> x >> y >> s;
		if (!x)return 0;
		int max=0;
		for (int i = 1; i <s; i++) {
			for (int j = i; j + i <= s; j++) {
				if (i*(100 + x) / 100 + (j)*(100 + x) / 100 != s)continue;
				max = std::max(max, i*(100 + y) / 100 + (j)*(100 + y) / 100);
			}
		}
		cout << max << endl;
	}
}