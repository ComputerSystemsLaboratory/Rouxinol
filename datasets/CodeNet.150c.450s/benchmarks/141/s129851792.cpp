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

bool flag;
double x1, yt1, x2, y2, x3, y3, xp, yp;
double v[3][2];

double inpr(double v1[2], double v2[2]) {
	double ret = v1[0] * v2[0] + v1[1] * v2[1];
	return ret;
}

int main() {
	x2 = -123456;
	cin >> x1 >> yt1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;

	while (x2 != -123456) {
		flag = true;
		v[0][0] = -(y2 - yt1);
		v[0][1] = x2 - x1;		
		
		v[1][0] = x3 - x1;
		v[1][1] = y3 - yt1;

		v[2][0] = xp - x1;
		v[2][1] = yp - yt1;

		if (inpr(v[0], v[1]) * inpr(v[0], v[2]) < 0) flag = false;
		
		v[0][0] = -(y3 - y2);
		v[0][1] = x3 - x2;		
		
		v[1][0] = x1 - x2;
		v[1][1] = yt1 - y2;

		v[2][0] = xp - x2;
		v[2][1] = yp - y2;

		if (inpr(v[0], v[1]) * inpr(v[0], v[2]) < 0) flag = false;
		
		v[0][0] = -(yt1 - y3);
		v[0][1] = x1 - x3;		
		
		v[1][0] = x2 - x3;
		v[1][1] = y2 - y3;

		v[2][0] = xp - x3;
		v[2][1] = yp - y3;

		if (inpr(v[0], v[1]) * inpr(v[0], v[2]) < 0) flag = false;

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;

		x2 = -123456;
		cin >> x1 >> yt1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/