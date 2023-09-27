#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;
int main() {
	while (true) {
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)break;
		int ret = 0;
		for (int i = 1; i <= x; i++) {
			for (int j = i+1; j <= x; j++) {
				for (int k = j+1; k <= x; k++) {
					if (i + j + k == y)ret++;
				}
			}
		}
		cout << ret << endl;
	}
	return 0;
}
