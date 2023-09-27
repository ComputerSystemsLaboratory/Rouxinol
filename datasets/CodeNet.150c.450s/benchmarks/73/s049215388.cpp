#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
//#include "toollib.h"
#pragma warning (disable:4018)

using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	vector<int> a(n, 0);
	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0) {
			a[x - 1] += y;
		}
		else {
			cout << accumulate(a.begin() + x - 1, a.begin() + y, 0) << endl;
		}
	}
	return 0;
}