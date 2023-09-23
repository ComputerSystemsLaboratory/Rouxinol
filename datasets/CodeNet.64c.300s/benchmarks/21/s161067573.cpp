#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ld long double
ld a, b, c, d, e, f, x, y;
ld shish(ld a)
{
	if (a == 0) { return a; }
	
	a *= 1000;
	if (a > 0) {
		a += 0.51;
	}
	else {
		a -= 0.51;
	}
	a = (ld)((int)a);
	a /= 1000;
	return a;
}
int main() {
	while (cin >> a >> b >> c >> d >> e >> f) {
		y = (a*f - c*d) / (ld)(a*e - b*d);
		x = (c*e - f*b) / (ld)(a*e - b*d);

		x = shish(x);
		y = shish(y);
		if (x == 0) { cout << "0.000"; }
		else {
			cout << fixed << setprecision(3) << x;
		}
		cout << " ";
		if (y == 0) { cout << "0.000" << endl; }
		else{
			cout << fixed << setprecision(3) << y << endl;
		}
	}
	return 0;
}

