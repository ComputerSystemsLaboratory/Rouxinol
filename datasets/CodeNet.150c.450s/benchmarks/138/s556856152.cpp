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
//#include "toollib.h"
#pragma warning (disable:4018)
using namespace std;

int solve_GCD(int x, int y) {
	while (x != y) {
		if (x > y) {
			x -= y;
		}
		else {
			y -= x;
		}
	}
	return x;
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << solve_GCD(x, y) << endl;
	return 0;
}