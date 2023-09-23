#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

double a, b, c, d, e, f;
double x, y;

int main() {
	a = -10000;
	cin >> a >> b >> c >> d >> e >> f;

	while (a != -10000) {
		x = (c * e - f * b) / (a * e - d * b);
		y = (c * d - f * a) / (b * d - e * a);

		if (x > -0.001 && x <= 0) x = 0;
		if (y > -0.001 && y <= 0) y = 0;

		printf("%.3f %.3f\n", x, y);

		a = -10000;
		cin >> a >> b >> c >> d >> e >> f;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/